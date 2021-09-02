/// \file rhpman.h
/// \author Keefer Rourke <krourke@uoguelph.ca>
/// \author Marshall Asch <masch@uoguelph.ca>
/// \brief Declarations for the a simulation that attempts to reproduce the
///     RHPMAN scheme and performance evaluation from Shi and Chen 2014.
///
///     *References*:
///      - K. Shi and H. Chen, "RHPMAN: Replication in highly partitioned mobile
///        ad hoc networks," International Journal of Distributed Sensor Networks
///        Jul. 2014.
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
///
#ifndef __RHPMAN_APP_H
#define __RHPMAN_APP_H

// Uncomment this to enable the optional carrier forwarding
#define __RHPMAN_OPTIONAL_CARRIER_FORWARDING

// uncomment to enable the optional checking the data items in the buffer when doing a lookup
#define __RHPMAN_OPTIONAL_CHECK_BUFFER

// uncomment to enable not sending unnecessary messages, ie. dont send transfer if there are no
// items
//#define __RHPMAN_OPTIONAL_DONT_SEND_EMPTY_TRANSFERS

#define APPLICATION_PORT 5000

#include <map>
#include <memory>
#include <set>  // std::set

#include "ns3/application-container.h"
#include "ns3/application.h"
#include "ns3/applications-module.h"
#include "ns3/attribute.h"
#include "ns3/callback.h"
#include "ns3/energy-module.h"

//#include "ns3/core-module.h"
#include "ns3/event-id.h"
#include "ns3/node-container.h"
#include "ns3/object-base.h"
#include "ns3/object-factory.h"
#include "ns3/socket.h"
#include "ns3/uinteger.h"

#include "dataItem.h"
#include "storage.h"

#include "rhpman-stats.h"
#include "table.h"

namespace rhpman {

using namespace ns3;

/// \brief RHPMAN network application, which defines data transfer, node
///     election, etc.
///     If this app instance is a data owner, its role will be set to
///     REPLICATING and its DataId will be non-negative.
///     App instances which are not data owners will have negative a DataId.
class RhpmanApp : public Application {
 public:
  enum class Role { NON_REPLICATING = 0, REPLICATING };

  /// \brief Identifies the lifecycle state of this app.
  enum class State { NOT_STARTED = 0, RUNNING, STOPPED };

  static TypeId GetTypeId();

  RhpmanApp()
      : m_state(State::NOT_STARTED),
        m_role(Role::NON_REPLICATING),
        m_forwardingThreshold(0.4),
        m_carryingThreshold(0.6),
        m_wcdc(0.5),
        m_wcol(0.5),
        m_ws(1),
        m_we(0),
        m_wp(0),
        m_neighborhoodHops(2),
        m_electionNeighborhoodHops(4),
        m_profileDelay(),
        m_degreeConnectivity(),
        m_socket_recv(0),
        m_neighborhood_socket(0),
        m_election_socket(0),
        m_success(MakeNullCallback<void, std::shared_ptr<DataItem> >()),
        m_failed(MakeNullCallback<void, uint64_t>()),
        m_lowBattery(false){};

  Role GetRole() const;
  State GetState() const;

  void Lookup(uint64_t id);
  bool Save(std::shared_ptr<DataItem> data);
  void ClearBuffer();
  void ClearStorage();

  uint32_t GetFreeSpace() const;

  void RegisterSuccessCallback(Callback<void, std::shared_ptr<DataItem> > success);
  void RegisterFailureCallback(Callback<void, uint64_t> fail);

  static void CleanUp();

 private:
  enum class StorageType { BUFFER = 0, STORAGE };

  // Application lifecycle methods.

  // Member fields.
  State m_state;
  Role m_role;
  double m_forwardingThreshold;
  double m_carryingThreshold;
  double m_wcdc;
  double m_wcol;
  double m_ws;
  double m_we;
  double m_wp;
  uint32_t m_neighborhoodHops;
  uint32_t m_electionNeighborhoodHops;
  Time m_profileDelay;
  std::map<Time, uint32_t> m_degreeConnectivity;

  Ptr<Socket> m_socket_recv;
  Ptr<Socket> m_neighborhood_socket;
  Ptr<Socket> m_election_socket;

  // callbacks for lookup requests
  // callbacks for  requests
  Callback<void, std::shared_ptr<DataItem> > m_success;
  Callback<void, uint64_t> m_failed;

  bool m_lowBattery;

  double m_low_power_threshold;

  // timeouts
  Time m_request_timeout;
  Time m_peer_timeout;
  Time m_election_period;
  Time m_election_cooldown;
  Time m_min_election_time;  // this is the earliest time that another election is allowed to be
                             // requested by a node
  Time m_min_ping_time;

  EventId m_election_watchdog_event;
  EventId m_replica_exit_event;
  EventId m_ping_event;
  EventId m_election_results_event;
  EventId m_table_update_event;

  // data storage for the node
  uint32_t m_storageSpace;
  uint32_t m_bufferSpace;

  uint32_t m_address;

  Storage m_storage;
  Storage m_buffer;

  std::set<uint64_t> m_pendingLookups;

  // replication values
  std::map<uint32_t, double> m_peerFitness;

  std::map<uint32_t, double> m_peerProfiles;
  std::map<uint32_t, EventId> m_profileTimeouts;
  std::map<uint64_t, EventId> m_lookupTimeouts;
  std::map<uint64_t, Time> m_queryTimes;

  std::set<uint32_t> m_replicating_nodes;
  std::set<uint64_t> m_received_messages;

  Table m_peerTable;

  Stats stats;

  // things that the node is needed for
  Ptr<EnergySource> energySource;

  void StartApplication() override;
  void StopApplication() override;

  void Setup();

  // RHPMAN Scheme methods.
  void UpdateProfile();
  void ExchangeProfiles();

  // event handlers
  void ExitCheck();
  void LookupTimeout(uint64_t requestID, uint64_t dataID);
  void TriggerElection();
  void CheckElectionResults();
  void ProfileTimeout(uint32_t nodeID);
  void ReplicationNodeTimeout(uint32_t nodeID);
  void HandleReplicationAnnouncement(uint32_t nodeID);

  // event triggers
  void BroadcastToNeighbors(Ptr<Packet> packet, Stats::Type type);
  void BroadcastToElection(Ptr<Packet> packet, Stats::Type type);
  void SendMessage(Ipv4Address dest, Ptr<Packet> packet, Stats::Type type);
  void SendStartElection();
  void SendPing();
  void SendRoleChange(uint32_t newReplicationNode);
  void SendSyncLookup(uint64_t requestID, uint32_t nodeID, uint64_t dataID);
  void SendSyncStore(uint32_t nodeID, std::shared_ptr<DataItem> data);
  void SendResponse(
      uint64_t requestID,
      uint32_t nodeID,
      const std::shared_ptr<DataItem> data,
      Stats::Type type);

  // schedulers
  void ScheduleElectionCheck();
  void ScheduleElectionWatchdog();
  void ScheduleLookupTimeout(uint64_t requestID, uint64_t dataID);
  void ScheduleProfileTimeout(uint32_t nodeID);
  void SchedulePing();
  void ScheduleExitCheck();
  void ScheduleRefreshRoutingTable();

  // other helpers
  void RunElection();
  void MakeReplicaHolderNode();
  void MakeNonReplicaHolderNode();
  void LookupFromReplicaHolders(uint64_t dataID, uint64_t requestID, uint32_t srcNode);
  uint32_t GetID();
  void ResetFitnesses();
  std::set<uint32_t> GetRecipientAddresses(double sigma);
  void TransferBuffer(uint32_t nodeID);
  void TransferStorage(uint32_t nodeID, bool stepUp);
  void SendStorage(uint32_t nodeID, StorageType type, bool stepUp);
  std::shared_ptr<DataItem> CheckLocalStorage(uint64_t dataID);

  Ptr<Socket> SetupSocket(uint16_t port, uint32_t ttl);
  Ptr<Socket> SetupRcvSocket(uint16_t port);
  Ptr<Socket> SetupSendSocket(uint16_t port, uint8_t ttl);
  RhpmanApp::Role GetNewRole();
  void ChangeRole(Role newRole);
  void CancelEventMap(std::map<uint32_t, EventId> events);
  void CancelEventMap(std::map<uint64_t, EventId> events);
  void RunProbabilisticLookup(uint64_t requestID, uint64_t dataID, uint32_t srcNode);
  bool CheckDuplicateMessage(uint64_t messageID);
  bool IsResponsePending(uint64_t requestID);
  void DestroySocket(Ptr<Socket> socket);
  double GetTimeSinceRequest(uint64_t requestID);

  void SemiProbabilisticSend(Ptr<Packet> message, uint32_t srcAddr, double sigma, Stats::Type type);
  void SendToNodes(Ptr<Packet> message, const std::set<uint32_t> nodes, Stats::Type type);

  void RefreshRoutingTable();
  std::string GetRoutingTableString();
  uint32_t CountExpectedRecipients(uint32_t hops);
  uint32_t GetNextBestReplicaNode();

  void PowerLossHandler();
  void PowerRechargedHandler();

  // calculation helpers
  double GetEnergyLevel() const;
  double GetWeightedEnergyLevel() const;
  double GetWeightedStorageSpace() const;
  double CalculateElectionFitness() const;
  double CalculateProfile() const;
  double CalculateChangeDegree() const;
  double CalculateColocation() const;

  // message handlers
  void HandleRequest(Ptr<Socket> socket);
  void HandlePing(uint32_t nodeID, double profile, double fitness, bool isReplicatingNode);
  void HandleModeChange(uint32_t oldNode, uint32_t newNode);
  void HandleElectionRequest();
  void HandleLookup(uint32_t nodeID, uint64_t requestID, uint64_t dataID);
  void HandleStore(uint32_t nodeID, std::shared_ptr<DataItem> data, Ptr<Packet> message);
  uint32_t HandleTransfer(std::vector<std::shared_ptr<DataItem> > data, bool stepUp);
  void HandleResponse(uint64_t requestID, std::shared_ptr<DataItem> data);

  // static helpers
  static uint64_t GenerateMessageID();

  static std::set<uint32_t> FilterAddresses(
      const std::set<uint32_t> addresses,
      const std::set<uint32_t> exclude);
  static std::set<uint32_t> FilterAddress(const std::set<uint32_t> addresses, uint32_t exclude);

  // message generators
  static Ptr<Packet> GenerateLookup(
      uint64_t messageID,
      uint64_t dataID,
      double sigma,
      uint32_t srcNode);
  static Ptr<Packet> GenerateStore(const std::shared_ptr<DataItem> data);
  static Ptr<Packet> GeneratePing(double profile, double fitness, bool isReplicating);
  static Ptr<Packet> GenerateElectionRequest();
  static Ptr<Packet> GenerateModeChange(uint32_t addrss, uint32_t newNode);
  static Ptr<Packet> GenerateTransfer(std::vector<std::shared_ptr<DataItem> > items, bool stepUp);
  static Ptr<Packet> GenerateResponse(uint64_t responseTo, const std::shared_ptr<DataItem> data);

  void SuccessfulLookup(std::shared_ptr<DataItem> data);
  void FailedLookup(uint64_t dataID);
};

};  // namespace rhpman
std::ostream& operator<<(std::ostream& os, rhpman::RhpmanApp::Role role);

#endif
