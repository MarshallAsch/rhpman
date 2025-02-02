/// \file dataAccess.cc
/// \author Marshall Asch <masch@uoguelph.ca>
///
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

#include "dataAccess.h"
#include "logging.h"
#include "nsutil.h"
#include "util.h"

#include "proto/messages.pb.h"

// every time a data item gets stored increment this, this should be the highest dataID in the
// system
static uint32_t total_data_items;

namespace rhpman {

using namespace ns3;

NS_OBJECT_ENSURE_REGISTERED(DataAccess);

// static
TypeId DataAccess::GetTypeId() {
  static TypeId id =
      TypeId("rhpman::DataAccess")
          .SetParent<Application>()
          .SetGroupName("Applications")
          .AddConstructor<DataAccess>()
          .AddAttribute(
              "Role",
              "The initial role of this app",
              EnumValue(Role::CONSUMER_ONLY),
              MakeEnumAccessor(&DataAccess::m_role),
              MakeEnumChecker<
                  Role>(Role::OWNER, "Role::OWNER", Role::CONSUMER_ONLY, "Role::CONSUMER_ONLY"))
          .AddAttribute(
              "RequestTime",
              "Time to used to generate the delay between data lookups (T)",
              TimeValue(30.0_sec),
              MakeTimeAccessor(&DataAccess::m_request_generation_time),
              MakeTimeChecker(0.0_sec))
          .AddAttribute(
              "UpdateTime",
              "Time to used to generate the delay between data updates (T)",
              TimeValue(120.0_sec),
              MakeTimeAccessor(&DataAccess::m_update_generation_time),
              MakeTimeChecker(0.0_sec))
          .AddAttribute(
              "DataSize",
              "The number of bytes to use as the size for the data items",
              UintegerValue(512),
              MakeUintegerAccessor(&DataAccess::m_dataSize),
              MakeUintegerChecker<uint32_t>(1));

  return id;
}

// override
void DataAccess::StartApplication() {
  if (m_state == State::RUNNING) {
    NS_LOG_DEBUG("Ignoring DataAccess::StartApplication request on already started application");
    return;
  }
  NS_LOG_DEBUG("Starting DataAccess at: "<< Simulator::Now().GetMilliSeconds() << "ms");
  m_state = State::NOT_STARTED;

  // get application
  // register callbacks
  // create data item

  m_rhpman = GetNode()->GetApplication(0)->GetObject<RhpmanApp>();

  m_rhpman->RegisterSuccessCallback(MakeCallback(&success));
  m_rhpman->RegisterFailureCallback(MakeCallback(&failed));
  m_nodeID = GetID();

  if (m_role == Role::OWNER) CreateDataItem();

  m_lookupSelector = CreateObject<UniformRandomVariable>();
  m_lookupSelector->SetAttribute("Min", DoubleValue(1));
  m_lookupSelector->SetAttribute("Max", DoubleValue(DBL_MAX));

  m_lookupVariable = CreateObject<ExponentialRandomVariable>();
  m_updateVariable = CreateObject<ExponentialRandomVariable>();

  m_lookupVariable->SetAttribute("Mean", DoubleValue(m_request_generation_time.GetSeconds()));
  m_updateVariable->SetAttribute("Mean", DoubleValue(m_update_generation_time.GetSeconds()));

  m_state = State::RUNNING;

  if (m_request_generation_time.GetSeconds() != 0) {
    scheduleLookup();
  }

  if (m_role == Role::OWNER && m_update_generation_time.GetSeconds() != 0) {
    scheduleUpdate();
  }
}

// override
void DataAccess::StopApplication() {
  if (m_state == State::NOT_STARTED) {
    NS_LOG_ERROR("Called DataAccess::StopApplication on a NOT_STARTED instance");
    return;
  }
  if (m_state == State::STOPPED) {
    NS_LOG_DEBUG("Ignoring DataAccess::StopApplication on already stopped instance");
  }

  m_state = State::STOPPED;

  m_rhpman->ClearStorage();
  m_rhpman->ClearBuffer();

  // TODO: Cancel events.
}

// ================================================
//  event schedulers
// ================================================

Time DataAccess::GenerateLookupDelay() { return Seconds(m_lookupVariable->GetValue()); }

Time DataAccess::GenerateUpdateDelay() { return Seconds(m_updateVariable->GetValue()); }

void DataAccess::scheduleLookup() {
  if (m_state != State::RUNNING) return;

  lookup();

  Simulator::Schedule(GenerateLookupDelay(), &DataAccess::scheduleLookup, this);
}

void DataAccess::scheduleUpdate() {
  if (m_state != State::RUNNING) return;

  NS_LOG_WARN("NOT YET IMPLEMENTED!!!");

  Simulator::Schedule(GenerateUpdateDelay(), &DataAccess::scheduleUpdate, this);
}

uint64_t DataAccess::selectDataToLookup() {
  return m_lookupSelector->GetInteger(1, total_data_items);
}

// this will get the nodes IPv4 address and return it as a 32 bit integer
uint32_t DataAccess::GetID() {
  Ptr<Ipv4> ipv4 = GetNode()->GetObject<Ipv4>();
  Ipv4InterfaceAddress iaddr = ipv4->GetAddress(1, 0);
  Ipv4Address ipAddr = iaddr.GetLocal();

  uint32_t addr = ipAddr.Get();

  // This next line will print the ipv4 address in a.b.c.d format
  // std::cout << "addr: " << ((addr >> 24) & 0x00ff) << "." << ((addr >> 16) & 0x00ff) << "." <<
  // ((addr >> 8) & 0x00ff) << "." << ((addr) & 0x00ff) << "\n";

  return addr;
}

void DataAccess::CreateDataItem() {
  uint8_t* payload = new uint8_t[m_dataSize];
  auto data = std::make_shared<DataItem>(m_dataSize, m_nodeID, payload);
  delete[] payload;

  m_rhpman->Save(data);

  total_data_items++;
}

void DataAccess::lookup() {
  // if there are no items stored dont run a lookup
  if (total_data_items == 0) return;

  m_rhpman->Lookup(selectDataToLookup());
}

void DataAccess::success(std::shared_ptr<DataItem> data) {}

void DataAccess::failed(uint64_t dataID) {}

}  // namespace rhpman
