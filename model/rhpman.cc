/// \file rhpman.cc
/// \author Keefer Rourke <krourke@uoguelph.ca>
/// \author Marshall Asch <masch@uoguelph.ca>
///
/// Copyright (c) 2020 by Keefer Rourke <krourke@uoguelph.ca>
/// Copyright (c) 2021 by Marshall Asch <masch@uoguelph.ca>
/// Permission to use, copy, modify, and/or distribute this software for any
/// purpose with or without fee is hereby granted, provided that the above
/// copyright notice and this permission notice appear in all copies.
///
/// THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES WITH
/// REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY
/// AND FITNESS. IN NO EVENT SHALL ISC BE LIABLE FOR ANY SPECIAL, DIRECT,
/// INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM
/// LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE
/// OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
/// PERFORMANCE OF THIS SOFTWARE.

#include <algorithm>
#include <map>

#include <cfloat>
#include <limits>

#include "ns3/application-container.h"
#include "ns3/application.h"
#include "ns3/applications-module.h"
#include "ns3/attribute.h"
//#include "ns3/core-module.h"
#include "ns3/double.h"
#include "ns3/enum.h"
#include "ns3/node-container.h"
#include "ns3/object-base.h"
#include "ns3/object-factory.h"
#include "ns3/output-stream-wrapper.h"
#include "ns3/pointer.h"
#include "ns3/udp-socket-factory.h"

#include "ns3/wifi-radio-energy-model.h"

#include "logging.h"
#include "nsutil.h"
#include "rhpman.h"
#include "util.h"

#include "proto/messages.pb.h"

namespace rhpman {

using namespace ns3;

static Ptr<Packet> GeneratePacket(const rhpman::packets::Message message);
static rhpman::packets::Message ParsePacket(const Ptr<Packet> packet);

NS_OBJECT_ENSURE_REGISTERED(RhpmanApp);

// static
TypeId RhpmanApp::GetTypeId() {
  static TypeId id =
      TypeId("rhpman::RhpmanApp")
          .SetParent<Application>()
          .SetGroupName("Applications")
          .AddConstructor<RhpmanApp>()
          .AddAttribute(
              "ForwardingThreshold",
              "If probability of delivery to a node is higher than this value, data is forwarded "
              "(sigma)",
              DoubleValue(0.4),
              MakeDoubleAccessor(&RhpmanApp::m_forwardingThreshold),
              MakeDoubleChecker<double>(0.0, 1.0))
          .AddAttribute(
              "CarryingThreshold",
              "If probability of delivery to a node is hight than this value, data is cached (tau)",
              DoubleValue(0.6),
              MakeDoubleAccessor(&RhpmanApp::m_carryingThreshold),
              MakeDoubleChecker<double>(0.0, 1.0))
          .AddAttribute(
              "StorageWeight",
              "The weight of the storage component of the election fitness calculation"
              "(w_s)",
              DoubleValue(1),
              MakeDoubleAccessor(&RhpmanApp::m_ws),
              MakeDoubleChecker<double>(0.0, 1.0))
          .AddAttribute(
              "LowPowerThreshold",
              "The battery precentage at which a node will step down as a replication node if it "
              "drops below this point",
              DoubleValue(0.0),
              MakeDoubleAccessor(&RhpmanApp::m_low_power_threshold),
              MakeDoubleChecker<double>(0.0, 1.0))
          .AddAttribute(
              "EnergyWeight",
              "The weight of the energy component of the election fitness calculation"
              "(w_e)",
              DoubleValue(0),
              MakeDoubleAccessor(&RhpmanApp::m_we),
              MakeDoubleChecker<double>(0.0, 1.0))
          .AddAttribute(
              "ProcessingWeight",
              "The weight of the processing component of the election fitness calculation"
              "(w_p)",
              DoubleValue(0),
              MakeDoubleAccessor(&RhpmanApp::m_wp),
              MakeDoubleChecker<double>(0.0, 1.0))
          .AddAttribute(
              "DegreeConnectivityWeight",
              "Weight of degree connectivity for computing delivery probabilities (w_cdc)",
              DoubleValue(0.5),
              MakeDoubleAccessor(&RhpmanApp::m_wcdc),
              MakeDoubleChecker<double>(0.0))
          .AddAttribute(
              "ColocationWeight",
              "Weight of colocation for computing delivery probabilities (w_col)",
              DoubleValue(0.5),
              MakeDoubleAccessor(&RhpmanApp::m_wcol),
              MakeDoubleChecker<double>(0.0))
          .AddAttribute(
              "NeighborhoodSize",
              "Number of hops considered to be in the neighborhood of this node (h)",
              UintegerValue(2),
              MakeUintegerAccessor(&RhpmanApp::m_neighborhoodHops),
              MakeUintegerChecker<uint32_t>(1))
          .AddAttribute(
              "ElectionNeighborhoodSize",
              "Number of hops considered to be in the election neighborhood of this node (h_r)",
              UintegerValue(4),
              MakeUintegerAccessor(&RhpmanApp::m_electionNeighborhoodHops),
              MakeUintegerChecker<uint32_t>(1))
          .AddAttribute(
              "StorageSpace",
              "Number of data items that a node can hold",
              UintegerValue(10),
              MakeUintegerAccessor(&RhpmanApp::m_storageSpace),
              MakeUintegerChecker<uint32_t>(1))
          .AddAttribute(
              "BufferSpace",
              "Number of data items that a node can hold",
              UintegerValue(10),
              MakeUintegerAccessor(&RhpmanApp::m_bufferSpace),
              MakeUintegerChecker<uint32_t>(1))
          .AddAttribute(
              "ProfileUpdateDelay",
              "Time to wait between profile update and exchange (T)",
              TimeValue(6.0_sec),
              MakeTimeAccessor(&RhpmanApp::m_profileDelay),
              MakeTimeChecker(0.1_sec))
          .AddAttribute(
              "RequestTimeout",
              "Time to wait after a lookup is made before it is marked as unsuccessful (T)",
              TimeValue(0.0_sec),
              MakeTimeAccessor(&RhpmanApp::m_request_timeout),
              MakeTimeChecker(0.0_sec))
          .AddAttribute(
              "PeerTimeout",
              "Time to wait between last hearing from a node and removing them from the list of "
              "neighbors or replicating nodes (T)",
              TimeValue(12.0_sec),
              MakeTimeAccessor(&RhpmanApp::m_peer_timeout),
              MakeTimeChecker(0.1_sec))
          .AddAttribute(
              "ElectionPeriod",
              "Time to wait between before checking the results of an election (Ta)",
              TimeValue(6.0_sec),
              MakeTimeAccessor(&RhpmanApp::m_election_period),
              MakeTimeChecker(0.1_sec))
          .AddAttribute(
              "ElectionCooldown",
              "Time to wait before an election can be started again (T)",
              TimeValue(6.0_sec),
              MakeTimeAccessor(&RhpmanApp::m_election_cooldown),
              MakeTimeChecker(0.1_sec))
          .AddAttribute(
              "lookup_success_cb",
              "a callback to be called when a data item is successfully found",
              CallbackValue(),
              MakeCallbackAccessor(&RhpmanApp::m_success),
              MakeCallbackChecker())
          .AddAttribute(
              "lookup_failed_cb",
              "a callback to be called when a data lookup times out",
              CallbackValue(),
              MakeCallbackAccessor(&RhpmanApp::m_failed),
              MakeCallbackChecker());
  return id;
}

// override
void RhpmanApp::StartApplication() {
  if (m_state == State::RUNNING) {
    NS_LOG_DEBUG("Ignoring RhpmanApp::StartApplication request on already started application");
    return;
  }
  NS_LOG_DEBUG("Starting RhpmanApp");
  m_state = State::NOT_STARTED;

  Setup();
  // set powerloss callbacks
  Ptr<WifiRadioEnergyModel> model =
      energySource->FindDeviceEnergyModels("ns3::WifiRadioEnergyModel")
          .Get(0)
          ->GetObject<WifiRadioEnergyModel>();
  model->SetEnergyDepletionCallback(MakeCallback(&RhpmanApp::PowerLossHandler, this));
  model->SetEnergyRechargedCallback(MakeCallback(&RhpmanApp::PowerRechargedHandler, this));

  if (m_socket_recv == 0) {
    m_socket_recv = SetupSocket(APPLICATION_PORT, 0);
  }

  if (m_neighborhood_socket == 0) {
    m_neighborhood_socket = SetupSocket(APPLICATION_PORT, m_neighborhoodHops);
  }

  if (m_election_socket == 0) {
    m_election_socket = SetupSocket(APPLICATION_PORT, m_electionNeighborhoodHops);
  }

  m_storage.Init(m_storageSpace);
  m_buffer.Init(m_bufferSpace);

  m_peerTable = Table(m_profileDelay.GetSeconds(), m_neighborhoodHops);

  m_min_ping_time = Simulator::Now();
  m_state = State::RUNNING;

  // TODO: Schedule events.
  SchedulePing();
  ScheduleElectionWatchdog();
  ScheduleRefreshRoutingTable();

  // start inital replica node election
  RunElection();
}

// override
void RhpmanApp::StopApplication() {
  if (m_state == State::NOT_STARTED) {
    NS_LOG_ERROR("Called RhpmanApp::StopApplication on a NOT_STARTED instance");
    return;
  }
  if (m_state == State::STOPPED) {
    NS_LOG_DEBUG("Ignoring RhpmanApp::StopApplication on already stopped instance");
  }

  if (m_socket_recv != 0) {
    DestroySocket(m_socket_recv);
    m_socket_recv = 0;
  }

  if (m_neighborhood_socket != 0) {
    DestroySocket(m_neighborhood_socket);
    m_neighborhood_socket = 0;
  }

  if (m_election_socket != 0) {
    DestroySocket(m_election_socket);
    m_election_socket = 0;
  }

  m_state = State::STOPPED;

  std::cerr << "Node: " << GetNode()->GetId() << " has " << GetEnergyLevel() << " battery left\n";

  // TODO: Cancel events.
  // std::cout << "stopping \n";
  stats.addPending(m_pendingLookups.size());
  m_election_watchdog_event.Cancel();
  m_replica_exit_event.Cancel();
  m_ping_event.Cancel();
  m_election_results_event.Cancel();
  m_table_update_event.Cancel();
  CancelEventMap(m_profileTimeouts);
  CancelEventMap(m_lookupTimeouts);
}

// ================================================
//  Public interface to the storage application
// ================================================

// this is public and is how any data lookup is made
void RhpmanApp::Lookup(uint64_t id) {
  stats.incLookup();
  // check cache
  std::shared_ptr<DataItem> item = CheckLocalStorage(id);
  if (item != NULL) {
    stats.incCache();
    return SuccessfulLookup(item);
  }

  // run semi probabilistic lookup
  uint64_t requestID = GenerateMessageID();
  m_queryTimes[requestID] = Simulator::Now();
  FlagIgnoreMessage(requestID);
  RunProbabilisticLookup(requestID, id, m_address);

  ScheduleLookupTimeout(requestID, id);
}

// this is public and is how new data items are stored in the network
// if there is no more space in the local cache false is returned, otherwise it is true
bool RhpmanApp::Save(std::shared_ptr<DataItem> data) {
  stats.incSave();
  bool status = m_storage.StoreItem(data);

  Ptr<Packet> message = GenerateStore(data);
  SemiProbabilisticSend(message, 0, m_forwardingThreshold, Stats::Type::STORE);

  return status;
}

// this is a helper and will return the number of data items that can be stored in local storage
uint32_t RhpmanApp::GetFreeSpace() const { return m_storage.GetFreeSpace(); }

RhpmanApp::Role RhpmanApp::GetRole() const { return m_role; }

RhpmanApp::State RhpmanApp::GetState() const { return m_state; }

void RhpmanApp::RegisterSuccessCallback(Callback<void, std::shared_ptr<DataItem>> success) {
  m_success = success;
}

void RhpmanApp::RegisterFailureCallback(Callback<void, uint64_t> fail) { m_failed = fail; }

void RhpmanApp::ClearBuffer() { m_buffer.ClearStorage(); }

void RhpmanApp::ClearStorage() { m_storage.ClearStorage(); }

// ================================================
//  setup helpers
// ================================================

// this will get the nodes IPv4 address and return it as a 32 bit integer
uint32_t RhpmanApp::GetID() {
  Ptr<Ipv4> ipv4 = GetNode()->GetObject<Ipv4>();
  Ipv4InterfaceAddress iaddr = ipv4->GetAddress(1, 0);
  Ipv4Address ipAddr = iaddr.GetLocal();

  uint32_t addr = ipAddr.Get();

  // This next line will print the ipv4 address in a.b.c.d format
  // std::cout << "addr: " << ((addr >> 24) & 0x00ff) << "." << ((addr >> 16) & 0x00ff) << "." <<
  // ((addr >> 8) & 0x00ff) << "." << ((addr) & 0x00ff) << "\n";

  return addr;
}

Ptr<Socket> RhpmanApp::SetupRcvSocket(uint16_t port) {
  Ptr<Socket> socket;
  socket = Socket::CreateSocket(GetNode(), UdpSocketFactory::GetTypeId());

  InetSocketAddress local = InetSocketAddress(Ipv4Address::GetAny(), port);
  if (socket->Bind(local) == -1) {
    NS_FATAL_ERROR("Failed to bind socket");
  }

  socket->SetRecvCallback(MakeCallback(&RhpmanApp::HandleRequest, this));
  return socket;
}

Ptr<Socket> RhpmanApp::SetupSendSocket(uint16_t port, uint8_t ttl) {
  Ptr<Socket> socket;
  socket = Socket::CreateSocket(GetNode(), UdpSocketFactory::GetTypeId());

  socket->Connect(InetSocketAddress(Ipv4Address::GetBroadcast(), port));
  socket->SetAllowBroadcast(true);
  socket->SetIpTtl(ttl);

  socket->SetRecvCallback(MakeCallback(&RhpmanApp::HandleRequest, this));
  return socket;
}

Ptr<Socket> RhpmanApp::SetupSocket(uint16_t port, uint32_t ttl) {
  return ttl == 0 ? SetupRcvSocket(port) : SetupSendSocket(port, ttl);
}

void RhpmanApp::DestroySocket(Ptr<Socket> socket) {
  socket->Close();
  socket->SetRecvCallback(MakeNullCallback<void, Ptr<Socket>>());
}

// ================================================
//  send wrappers
// ================================================

void RhpmanApp::SemiProbabilisticSend(
    Ptr<Packet> message,
    uint32_t srcAddr,
    double sigma,
    Stats::Type type) {
  SendToNodes(message, m_replicating_nodes, type);

  std::set<uint32_t> nodes = GetRecipientAddresses(sigma);
  nodes = FilterAddresses(nodes, m_replicating_nodes);
  nodes = FilterAddress(nodes, srcAddr);

  SendToNodes(message, nodes, type);
}

void RhpmanApp::SendToNodes(Ptr<Packet> message, const std::set<uint32_t> nodes, Stats::Type type) {
  for (auto it = nodes.begin(); it != nodes.end(); ++it) {
    SendMessage(Ipv4Address(*it), message, type);
  }
}

// ================================================
//  generate messages
// ================================================

Ptr<Packet> RhpmanApp::GenerateLookup(
    uint64_t messageID,
    uint64_t dataID,
    double sigma,
    uint32_t srcNode) {
  rhpman::packets::Message message;
  message.set_id(messageID);
  message.set_timestamp(Simulator::Now().GetMilliSeconds());

  rhpman::packets::Request* request = message.mutable_request();
  request->set_data_id(dataID);
  request->set_requestor(srcNode);
  request->set_sigma(sigma);

  return GeneratePacket(message);
}

Ptr<Packet> RhpmanApp::GenerateStore(const std::shared_ptr<DataItem> data) {
  rhpman::packets::Message message;
  message.set_id(GenerateMessageID());
  message.set_timestamp(Simulator::Now().GetMilliSeconds());

  rhpman::packets::Store* store = message.mutable_store();
  rhpman::packets::DataItem* item = store->mutable_data();

  item->set_data_id(data->getID());
  item->set_owner(data->getOwner());
  item->set_data(data->getPayload(), data->getSize());

  return GeneratePacket(message);
}

Ptr<Packet> RhpmanApp::GeneratePing(double profile, double fitness, bool isReplicating) {
  rhpman::packets::Message message;
  message.set_id(GenerateMessageID());
  message.set_timestamp(Simulator::Now().GetMilliSeconds());

  rhpman::packets::Ping* ping = message.mutable_ping();
  ping->set_delivery_probability(profile);
  ping->set_fitness(fitness);
  ping->set_replicating_node(isReplicating);

  return GeneratePacket(message);
}

Ptr<Packet> RhpmanApp::GenerateElectionRequest() {
  rhpman::packets::Message message;
  message.set_id(GenerateMessageID());
  message.set_timestamp(Simulator::Now().GetMilliSeconds());

  message.mutable_election();
  return GeneratePacket(message);
}

Ptr<Packet> RhpmanApp::GenerateModeChange(uint32_t address, uint32_t newNode) {
  rhpman::packets::Message message;
  message.set_id(GenerateMessageID());
  message.set_timestamp(Simulator::Now().GetMilliSeconds());

  rhpman::packets::ModeChange* mode = message.mutable_mode_change();

  mode->set_old_replication_node(address);
  mode->set_new_replication_node(newNode);

  return GeneratePacket(message);
}

Ptr<Packet> RhpmanApp::GenerateTransfer(std::vector<std::shared_ptr<DataItem>> items, bool stepUp) {
  rhpman::packets::Message message;
  message.set_id(GenerateMessageID());
  message.set_timestamp(Simulator::Now().GetMilliSeconds());

  rhpman::packets::Transfer* transfer = message.mutable_transfer();
  transfer->set_stepup(stepUp);

  for (auto it = items.begin(); it != items.end(); ++it) {
    rhpman::packets::DataItem* item = transfer->add_items();

    item->set_data_id((*it)->getID());
    item->set_owner((*it)->getOwner());
    item->set_data((*it)->getPayload(), (*it)->getSize());
  }

  return GeneratePacket(message);
}

Ptr<Packet> RhpmanApp::GenerateResponse(uint64_t responseTo, const std::shared_ptr<DataItem> data) {
  rhpman::packets::Message message;
  message.set_id(GenerateMessageID());
  message.set_timestamp(Simulator::Now().GetMilliSeconds());

  rhpman::packets::Response* response = message.mutable_response();
  response->set_request_id(responseTo);

  rhpman::packets::DataItem* item = response->mutable_data();
  item->set_data_id(data->getID());
  item->set_owner(data->getOwner());
  item->set_data(data->getPayload(), data->getSize());

  return GeneratePacket(message);
}

static Ptr<Packet> GeneratePacket(const rhpman::packets::Message message) {
  uint32_t size = message.ByteSizeLong();
  uint8_t* payload = new uint8_t[size];

  if (!message.SerializeToArray(payload, size)) {
    NS_LOG_ERROR("Failed to serialize the message for transmission");
  }

  Ptr<Packet> packet = Create<Packet>(payload, size);
  delete[] payload;

  return packet;
}

static rhpman::packets::Message ParsePacket(const Ptr<Packet> packet) {
  uint32_t size = packet->GetSize();
  uint8_t* payload = new uint8_t[size];
  packet->CopyData(payload, size);

  rhpman::packets::Message message;
  message.ParseFromArray(payload, size);
  delete[] payload;

  return message;
}

// ================================================
//  actually send messages
// ================================================

// this will send to all nodes within h hops
void RhpmanApp::BroadcastToNeighbors(Ptr<Packet> packet, Stats::Type type) {
  m_neighborhood_socket->Send(packet);
  stats.addSent(type, RhpmanApp::CountExpectedRecipients(m_neighborhoodHops));
}

// this will send to all nodes within h_r hops
void RhpmanApp::BroadcastToElection(Ptr<Packet> packet, Stats::Type type) {
  m_election_socket->Send(packet);
  stats.addSent(type, RhpmanApp::CountExpectedRecipients(m_electionNeighborhoodHops));
}

// this does not have a TTL restriction, use this for targetted messages
void RhpmanApp::SendMessage(Ipv4Address dest, Ptr<Packet> packet, Stats::Type type) {
  m_socket_recv->SendTo(packet, 0, InetSocketAddress(dest, APPLICATION_PORT));
  stats.addSent(type);
}

// ================================================
//  send messages
// ================================================

// send the broadcast to all h_r nodes to start a new election
void RhpmanApp::SendStartElection() {
  Ptr<Packet> message = GenerateElectionRequest();
  BroadcastToElection(message, Stats::Type::ELECTION_REQUEST);
}

void RhpmanApp::SendPing() {
  if (m_min_ping_time > Simulator::Now()) return;

  Ptr<Packet> message =
      GeneratePing(CalculateProfile(), CalculateElectionFitness(), m_role == Role::REPLICATING);

  if (m_role == Role::REPLICATING) {
    BroadcastToElection(message, Stats::Type::PING);
  } else {
    BroadcastToNeighbors(message, Stats::Type::PING);
  }

  m_min_ping_time = Simulator::Now() + Seconds(1);
}

// this will take the IP address of the new node to become a replicating node
// if the node is stepping up then this should be set to the current ip
// if the node is stepping down this should be 0
void RhpmanApp::SendRoleChange(uint32_t newReplicationNode) {
  Ptr<Packet> message = GenerateModeChange(m_address, newReplicationNode);
  BroadcastToElection(message, Stats::Type::MODE_CHANGE);
}

void RhpmanApp::SendResponse(
    uint64_t requestID,
    uint32_t nodeID,
    const std::shared_ptr<DataItem> data,
    Stats::Type type) {
  Ptr<Packet> message = GenerateResponse(requestID, data);
  SendMessage(Ipv4Address(nodeID), message, type);
}

// ================================================
//  event schedulers
// ================================================

void RhpmanApp::SchedulePing() {
  if (m_state != State::RUNNING) return;

  SendPing();

  // schedule sending ping broadcast
  m_ping_event = Simulator::Schedule(m_profileDelay, &RhpmanApp::SchedulePing, this);
}

void RhpmanApp::ScheduleExitCheck() {
  if (m_state != State::RUNNING) return;

  ExitCheck();

  // schedule sending replica holder announcement
  m_replica_exit_event = Simulator::Schedule(m_profileDelay, &RhpmanApp::ScheduleExitCheck, this);
}

void RhpmanApp::ScheduleElectionCheck() {
  if (m_state != State::RUNNING) return;

  // schedule checking election results
  m_election_results_event =
      Simulator::Schedule(m_election_period, &RhpmanApp::CheckElectionResults, this);
}

void RhpmanApp::ScheduleElectionWatchdog() {
  if (m_state != State::RUNNING) return;

  m_election_watchdog_event =
      Simulator::Schedule(m_peer_timeout, &RhpmanApp::TriggerElection, this);
}

void RhpmanApp::ScheduleLookupTimeout(uint64_t requestID, uint64_t dataID) {
  if (m_state != State::RUNNING) return;

  m_pendingLookups.insert(requestID);

  // dont schedule any timeout events
  if (m_request_timeout.IsZero()) return;

  EventId event =
      Simulator::Schedule(m_request_timeout, &RhpmanApp::LookupTimeout, this, requestID, dataID);

  m_lookupTimeouts[requestID] = event;
  // m_lookupMapping[requestID] = dataID;
}

void RhpmanApp::ScheduleProfileTimeout(uint32_t nodeID) {
  if (m_state != State::RUNNING) return;

  // EventId e = m_profileTimeouts[nodeID];
  // e.Cancel();

  m_profileTimeouts[nodeID].Cancel();

  m_profileTimeouts[nodeID] =
      Simulator::Schedule(m_peer_timeout, &RhpmanApp::ProfileTimeout, this, nodeID);
}

void RhpmanApp::ScheduleRefreshRoutingTable() {
  if (m_state != State::RUNNING) return;

  RefreshRoutingTable();

  m_table_update_event =
      Simulator::Schedule(1.0_sec, &RhpmanApp::ScheduleRefreshRoutingTable, this);
}

// ================================================
//  message handlers
// ================================================

// this will handle all the inital messages to be received by the node
// and will delegate the specfic handling to the separate handlers
void RhpmanApp::HandleRequest(Ptr<Socket> socket) {
  Ptr<Packet> packet;
  Address from;
  Address localAddress;

  while ((packet = socket->RecvFrom(from))) {
    socket->GetSockName(localAddress);
    NS_LOG_INFO(
        "At time " << Simulator::Now().GetSeconds() << "s client received " << packet->GetSize()
                   << " bytes from " << InetSocketAddress::ConvertFrom(from).GetIpv4() << " port "
                   << InetSocketAddress::ConvertFrom(from).GetPort());

    uint32_t srcAddress = InetSocketAddress::ConvertFrom(from).GetIpv4().Get();
    rhpman::packets::Message message = ParsePacket(packet);

    if (CheckDuplicateMessage(message.id())) {
      NS_LOG_INFO("already received this message, dropping.");
      stats.incDuplicate();
      return;
    }
    FlagIgnoreMessage(message.id());

    // switch based on message type
    if (message.has_ping()) {
      stats.incReceived(Stats::Type::PING);
      HandlePing(
          srcAddress,
          message.ping().delivery_probability(),
          message.ping().fitness(),
          message.ping().replicating_node());
    } else if (message.has_mode_change()) {
      stats.incReceived(Stats::Type::MODE_CHANGE);
      HandleModeChange(
          message.mode_change().old_replication_node(),
          message.mode_change().new_replication_node());
    } else if (message.has_election()) {
      stats.incReceived(Stats::Type::ELECTION_REQUEST);
      HandleElectionRequest();
    } else if (message.has_store()) {
      stats.incReceived(Stats::Type::STORE);
      rhpman::packets::DataItem item = message.store().data();
      HandleStore(
          srcAddress,
          std::make_shared<DataItem>(item.data_id(), item.owner(), item.data()),
          packet);
    } else if (message.has_request()) {
      stats.incReceived(Stats::Type::LOOKUP);
      HandleLookup(message.request().requestor(), message.id(), message.request().data_id());
    } else if (message.has_response()) {
      stats.incReceived(Stats::Type::LOOKUP_RESPONSE);
      rhpman::packets::DataItem item = message.response().data();
      HandleResponse(
          message.response().request_id(),
          std::make_shared<DataItem>(item.data_id(), item.owner(), item.data()));
    } else if (message.has_transfer()) {
      stats.incReceived(Stats::Type::TRANSFER);
      std::vector<std::shared_ptr<DataItem>> items;

      for (auto i = 0; i < message.transfer().items_size(); i++) {
        rhpman::packets::DataItem item = message.transfer().items(i);
        items.push_back(std::make_shared<DataItem>(item.data_id(), item.owner(), item.data()));
      }

      HandleTransfer(items, message.transfer().stepup());
    } else {
      stats.incReceived(Stats::Type::UNKOWN);
      std::cerr << "handling message: other\n";
      NS_LOG_WARN("unknown message type");
    }
  }
}

void RhpmanApp::HandlePing(
    uint32_t nodeID,
    double profile,
    double fitness,
    bool isReplicatingNode) {
  m_peerProfiles[nodeID] = profile;
  m_peerFitness[nodeID] = fitness;
  ScheduleProfileTimeout(nodeID);

  if (isReplicatingNode) {
    m_election_watchdog_event.Cancel();
    m_replicating_nodes.insert(nodeID);

    if (m_replicating_nodes.find(nodeID) == m_replicating_nodes.end()) {
      TransferBuffer(nodeID);
    }
  }

// if the peer has a higher value then the current node, send items in the buffer to that node
// this is optional
#if defined(__RHPMAN_OPTIONAL_CARRIER_FORWARDING)
  if (profile > CalculateProfile()) {
    TransferBuffer(nodeID);
  }
#endif  // __RHPMAN_OPTIONAL_CARRIER_FORWARDING
}

// this will handle updating the nodes in the replication node list
// step up: old === new             -> insert into list
// step down: new == 0              -> remove from list
// handover: old != new, new != 0   -> remove old from list, insert new into list
void RhpmanApp::HandleModeChange(uint32_t oldNode, uint32_t newNode) {
  if (oldNode == newNode) {
    m_replicating_nodes.insert(newNode);
  } else if (newNode == 0) {
    m_replicating_nodes.erase(oldNode);
    TriggerElection();
  } else {
    m_replicating_nodes.erase(oldNode);
    m_replicating_nodes.insert(newNode);
  }
}

void RhpmanApp::HandleElectionRequest() {
  // check if currently running an election
  if (Simulator::Now() < m_min_election_time) {
    NS_LOG_DEBUG("too early to run another election");
    return;
  }

  RunElection();
}

void RhpmanApp::HandleLookup(uint32_t nodeID, uint64_t requestID, uint64_t dataID) {
  std::shared_ptr<DataItem> res = CheckLocalStorage(dataID);

  if (res != NULL) {
    SendResponse(requestID, nodeID, res, Stats::Type::LOOKUP_RESPONSE);
    return;
  }

  // I dont have the answer but ask other nodes if they have it
  RunProbabilisticLookup(requestID, dataID, nodeID);
}

uint32_t RhpmanApp::HandleTransfer(std::vector<std::shared_ptr<DataItem>> data, bool stepUp) {
  uint32_t stored = 0;
  for (auto it = data.begin(); it != data.end(); ++it) {
    if (!(m_role == Role::REPLICATING ? m_storage : m_buffer).StoreItem(*it)) {
      NS_LOG_DEBUG("not enough space to store all the items");
      break;
    }
    stored++;
  }

  if (stepUp) {
    MakeReplicaHolderNode();
  }
  return stored;
}

void RhpmanApp::HandleStore(uint32_t nodeID, std::shared_ptr<DataItem> data, Ptr<Packet> message) {
  // check to see if the node already has the data item in the buffer
  if (CheckLocalStorage(data->getID()) != NULL) return;

  // if it is a replicating node store the data item
  if (m_role == Role::REPLICATING) {
    if (!m_storage.StoreItem(data)) {
      NS_LOG_DEBUG("not enough space to store the data item");
    }
    return;
  }

  SemiProbabilisticSend(message, nodeID, m_forwardingThreshold, Stats::Type::STORE);

  if (CalculateProfile() > m_carryingThreshold) {
    if (!m_buffer.StoreItem(data)) {
      NS_LOG_DEBUG("not enough space in the buffer to store the data item");
    }
  }
}

double RhpmanApp::GetTimeSinceRequest(uint64_t requestID) {
  Time requestTime = m_queryTimes[requestID];
  m_queryTimes.erase(requestID);
  Time now = Simulator::Now();

  return (now - requestTime).GetSeconds();
}

void RhpmanApp::HandleResponse(uint64_t requestID, std::shared_ptr<DataItem> data) {
  if (IsResponsePending(requestID)) {
    stats.queryDelay(GetTimeSinceRequest(requestID));
    m_pendingLookups.erase(requestID);
    SuccessfulLookup(data);
  } else {
    stats.incLate();
  }
}

// ================================================
//   helpers
// ================================================

bool RhpmanApp::IsResponsePending(uint64_t requestID) {
  return m_pendingLookups.find(requestID) != m_pendingLookups.end();
}

bool RhpmanApp::CheckDuplicateMessage(uint64_t messageID) {
  // true if it is in the list
  return m_received_messages.find(messageID) != m_received_messages.end();
}

void RhpmanApp::FlagIgnoreMessage(uint64_t messageID) { m_received_messages.insert(messageID); }

void RhpmanApp::RunProbabilisticLookup(uint64_t requestID, uint64_t dataID, uint32_t srcNode) {
  // ask replica holder nodes
  if (m_replicating_nodes.size() != 0) {
    LookupFromReplicaHolders(dataID, requestID, srcNode);
  } else {
    // run semi probabilistic lookup
    double sigma = CalculateProfile();
    Ptr<Packet> message = GenerateLookup(requestID, dataID, sigma, srcNode);

    SemiProbabilisticSend(message, srcNode, sigma, Stats::Type::LOOKUP);
  }
}

void RhpmanApp::RunElection() {
  m_min_election_time = Simulator::Now() + m_election_cooldown;

  SendPing();  // this is scheduled to calculate node fitnesses
  ScheduleElectionCheck();
}

void RhpmanApp::ChangeRole(Role newRole) {
  if (m_role != Role::REPLICATING && newRole == Role::REPLICATING) {
    MakeReplicaHolderNode();
  } else if (m_role == Role::REPLICATING && newRole != Role::REPLICATING) {
    MakeNonReplicaHolderNode();
  }
}

// this helper will convert the new role to the ip address that should be sent
void RhpmanApp::MakeReplicaHolderNode() {
  m_role = Role::REPLICATING;
  SendRoleChange(m_address);
  ScheduleExitCheck();
  stats.incStepUp();
}

// this helper will convert the new role to the ip address that should be sent
void RhpmanApp::MakeNonReplicaHolderNode() {
  m_role = Role::NON_REPLICATING;
  m_replica_exit_event.Cancel();
  SendRoleChange(0);
  stats.incStepDown();

  uint32_t newReplicaNode = GetNextBestReplicaNode();
  TransferStorage(newReplicaNode, true);
}

// this will send the synchonous data lookup requests to all of the known replica holder nodes
void RhpmanApp::LookupFromReplicaHolders(uint64_t dataID, uint64_t requestID, uint32_t srcNode) {
  Ptr<Packet> message = GenerateLookup(requestID, dataID, 0, srcNode);
  SendToNodes(message, m_replicating_nodes, Stats::Type::LOOKUP);
}

// this will generate the ID value to use for the requests this is a static function that should be
// called to generate all the ids to ensure they are unique
uint64_t RhpmanApp::GenerateMessageID() {
  static uint64_t id = 0;
  return ++id;
}

std::set<uint32_t> RhpmanApp::GetRecipientAddresses(double sigma) {
  std::set<uint32_t> addresses;

  for (auto it = m_peerProfiles.begin(); it != m_peerProfiles.end(); ++it) {
    if (it->second >= sigma) addresses.insert(it->first);
  }

  return addresses;
}

std::set<uint32_t> RhpmanApp::FilterAddresses(
    const std::set<uint32_t> addresses,
    const std::set<uint32_t> exclude) {
  std::set<uint32_t> filtered = addresses;

  for (auto address : exclude) {
    if (filtered.find(address) != filtered.end()) filtered.erase(address);
  }

  return filtered;
}

std::set<uint32_t> RhpmanApp::FilterAddress(const std::set<uint32_t> addresses, uint32_t exclude) {
  std::set<uint32_t> filtered = addresses;

  if (filtered.find(exclude) != filtered.end()) filtered.erase(exclude);

  return filtered;
}

// call this to send the all of the contents of the buffer to a new node
void RhpmanApp::TransferBuffer(uint32_t nodeID) {
  SendStorage(nodeID, StorageType::BUFFER, false);
  // remove items from the buffer once they have been transferer so they cant be forwarded again
  m_buffer.ClearStorage();
}

void RhpmanApp::TransferStorage(uint32_t nodeID, bool stepUp) {
  SendStorage(nodeID, StorageType::STORAGE, stepUp);
}

void RhpmanApp::SendStorage(uint32_t nodeID, StorageType type, bool stepUp) {
#ifdef __RHPMAN_OPTIONAL_DONT_SEND_EMPTY_TRANSFERS
  if (type == StorageType::BUFFER && m_buffer.Count() == 0) return;
  if (type == StorageType::STORAGE && m_storage.Count() == 0) return;
#endif

  Ptr<Packet> message = GenerateTransfer(
      type == StorageType::BUFFER ? m_buffer.GetAll() : m_storage.GetAll(),
      stepUp);
  SendMessage(Ipv4Address(nodeID), message, Stats::Type::TRANSFER);
}

void RhpmanApp::Setup() {
  energySource = GetNode()->GetObject<EnergySourceContainer>()->Get(0);
  m_address = GetID();
}
// ================================================
//  calculation helpers
// ================================================

double RhpmanApp::GetWeightedStorageSpace() const { return m_ws * m_storage.PercentFree(); }

double RhpmanApp::GetEnergyLevel() const { return energySource->GetEnergyFraction(); }
double RhpmanApp::GetWeightedEnergyLevel() const { return m_we * GetEnergyLevel(); }

double RhpmanApp::CalculateElectionFitness() const {
  double changeDegree = CalculateChangeDegree();

  double fitness;
  if (isEqual(changeDegree, 0)) {
    fitness = DBL_MAX;
  } else {
    fitness = (GetWeightedStorageSpace() + GetWeightedEnergyLevel()) / changeDegree;
  }

  return fitness;
}

void RhpmanApp::PowerLossHandler() {
  // this call back will be called over and over again while there is no power
  // only handle the event once
  if (!m_lowBattery) return;
  m_lowBattery = false;

  stats.incPowerloss();
  std::cerr << "Node: " << GetNode()->GetId() << " lost power at: " << Simulator::Now().GetSeconds()
            << "\n";
}

void RhpmanApp::PowerRechargedHandler() {
  if (m_lowBattery) return;
  m_lowBattery = true;

  stats.incPowerRecharge();
  std::cerr << "Node: " << GetNode()->GetId()
            << " regained power at: " << Simulator::Now().GetSeconds() << "\n";
}

// this is the value of P_ij
double RhpmanApp::CalculateProfile() const {
  if (m_role == Role::REPLICATING) return 1;

  return m_wcdc * CalculateChangeDegree() + m_wcol * CalculateColocation();
}

// this is the U_cdc value
double RhpmanApp::CalculateChangeDegree() const { return m_peerTable.ComputeChangeDegree(); }

// this is the U_col value
// it is 1 if there is a replication node within h, 0 otherwise
double RhpmanApp::CalculateColocation() const {
  if (m_role == Role::REPLICATING) return 1;

  return m_replicating_nodes.size() == 0 ? 0 : 1;
}

// ================================================
//  Scheduled event handlers
// ================================================

void RhpmanApp::ExitCheck() {
  NS_LOG_FUNCTION(this);

  if (m_role != Role::REPLICATING) return;

  if (GetEnergyLevel() < m_low_power_threshold) {
    MakeNonReplicaHolderNode();
  }
}

// this will call the lookup failed callback for the request
void RhpmanApp::LookupTimeout(uint64_t requestID, uint64_t dataID) {
  NS_LOG_FUNCTION(this);

  if (IsResponsePending(requestID)) {
    // std::map<uint64_t, uint64_t>::iterator dataMapping;
    // dataMapping = m_lookupMapping.find(requestID);
    m_pendingLookups.erase(requestID);

    FailedLookup(dataID);
  }
}

// this event must be canceled / restarted whenever a 'ping' is received from one of the replicating
// nodes do not schedule this if current node is a replicating node if this triggers then start an
// election
void RhpmanApp::TriggerElection() {
  // check if currently running an election
  if (Simulator::Now() < m_min_election_time) {
    NS_LOG_DEBUG("too early to run another election");
    return;
  }

  if (m_role == Role::REPLICATING && m_replicating_nodes.size() > 0) {
    NS_LOG_DEBUG("Still have replicating nodes in list, dont run election");
    return;
  }

  NS_LOG_DEBUG("Cant connect to any replicating nodes, triggering an election");

  SendStartElection();
  RunElection();
}

void RhpmanApp::CancelEventMap(std::map<uint32_t, EventId> events) {
  for (auto it = events.begin(); it != events.end(); ++it) {
    it->second.Cancel();
  }
}

void RhpmanApp::CancelEventMap(std::map<uint64_t, EventId> events) {
  for (auto it = events.begin(); it != events.end(); ++it) {
    it->second.Cancel();
  }
}

// this will be triggered after an election delay to check to see if the current node should become
// a replication node announce to all the other nodes the results if the status is changing
void RhpmanApp::CheckElectionResults() {
  Role newRole = GetNewRole();
  ChangeRole(newRole);
}

RhpmanApp::Role RhpmanApp::GetNewRole() {
  double myFitness = CalculateElectionFitness();
  for (auto it = m_peerFitness.begin(); it != m_peerFitness.end(); ++it) {
    if (myFitness < it->second) return Role::NON_REPLICATING;
  }

  return Role::REPLICATING;
}

uint32_t RhpmanApp::GetNextBestReplicaNode() {
  double fitness = 0;
  uint32_t node = 0;
  for (auto it = m_peerFitness.begin(); it != m_peerFitness.end(); ++it) {
    if (fitness < it->second) {
      fitness = it->second;
      node = it->first;
    }
  }

  return node;
}

// this will remove the nodes information from the probabilistic table
void RhpmanApp::ProfileTimeout(uint32_t nodeID) {
  m_peerProfiles.erase(nodeID);
  m_peerFitness.erase(nodeID);
  m_replicating_nodes.erase(nodeID);

  TriggerElection();
}

// ================================================
// storage functions
// ================================================

std::shared_ptr<DataItem> RhpmanApp::CheckLocalStorage(uint64_t dataID) {
  // check cache
  std::shared_ptr<DataItem> item = m_storage.GetItem(dataID);
  if (item != NULL) {
    return item;
  }

#if defined(__RHPMAN_OPTIONAL_CHECK_BUFFER)

  // check the data items in the buffer
  item = m_buffer.GetItem(dataID);
  if (item != NULL) {
    return item;
  }

#endif  // __RHPMAN_OPTIONAL_CHECK_BUFFER

  return NULL;
}

std::string RhpmanApp::GetRoutingTableString() {
  Ptr<Ipv4> ipv4 = GetNode()->GetObject<Ipv4>();
  Ptr<Ipv4RoutingProtocol> table = ipv4->GetRoutingProtocol();
  NS_ASSERT(table);

  std::ostringstream ss;
  table->PrintRoutingTable(Create<OutputStreamWrapper>(&ss));

  return ss.str();
}

uint32_t RhpmanApp::CountExpectedRecipients(uint32_t hops) {
  return Table::GetNeighbors(GetRoutingTableString(), hops).size();
}

void RhpmanApp::RefreshRoutingTable() { m_peerTable.UpdateTable(GetRoutingTableString()); }

void RhpmanApp::CleanUp() { google::protobuf::ShutdownProtobufLibrary(); }

void RhpmanApp::SuccessfulLookup(std::shared_ptr<DataItem> data) {
  stats.incSuccess();
  if (!m_success.IsNull()) m_success(data);
}

void RhpmanApp::FailedLookup(uint64_t dataID) {
  stats.incFailed();
  if (!m_failed.IsNull()) m_failed(dataID);
}

}  // namespace rhpman

std::ostream& operator<<(std::ostream& os, rhpman::RhpmanApp::Role role) {
  switch (role) {
    case rhpman::RhpmanApp::Role::REPLICATING:
      os << "REPLICATING";
      break;
    case rhpman::RhpmanApp::Role::NON_REPLICATING:
      os << "NON_REPLICATING";
      break;
  }
  return os;
}
