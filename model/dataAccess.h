/// \file rhpman.h
/// \author Keefer Rourke <krourke@uoguelph.ca>
/// \brief Declarations for the a simulation that attempts to reproduce the
///     RHPMAN scheme and performance evaluation from Shi and Chen 2014.
///
///     *References*:
///      - K. Shi and H. Chen, "RHPMAN: Replication in highly partitioned mobile
///        ad hoc networks," International Journal of Distributed Sensor Networks
///        Jul. 2014.
///
/// Copyright (c) 2020 by Keefer Rourke <krourke@uoguelph.ca>
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
#ifndef __rhpman_data_access_h
#define __rhpman_data_access_h

#include <map>
#include <set>  // std::set

#include "ns3/application-container.h"
#include "ns3/application.h"
#include "ns3/applications-module.h"
#include "ns3/attribute.h"
#include "ns3/callback.h"
//#include "ns3/core-module.h"
#include "ns3/event-id.h"
#include "ns3/node-container.h"
#include "ns3/object-factory.h"
#include "ns3/uinteger.h"

#include "dataItem.h"
#include "rhpman.h"

namespace rhpman {

using namespace ns3;

/// \brief RHPMAN network application, which defines data transfer, node
///     election, etc.
///     If this app instance is a data owner, its role will be set to
///     REPLICATING and its DataId will be non-negative.
///     App instances which are not data owners will have negative a DataId.
class DataAccess : public Application {
 public:
  enum Role { OWNER = 0, CONSUMER_ONLY };

  /// \brief Identifies the lifecycle state of this app.
  enum class State { NOT_STARTED = 0, RUNNING, STOPPED };

  static TypeId GetTypeId();

  DataAccess()
      : m_state(State::NOT_STARTED),
        m_role(Role::CONSUMER_ONLY),
        m_request_generation_time(Seconds(30.0)),
        m_update_generation_time(Seconds(120.0)),
        m_dataSize(512){};

  Role GetRole() const;
  State GetState() const;

 private:
  // Application lifecycle methods.

  void StartApplication() override;
  void StopApplication() override;

  // RHPMAN Scheme methods.

  // Member fields.
  State m_state;
  Role m_role;

  // timeouts
  Time m_request_generation_time;
  Time m_update_generation_time;

  uint32_t m_dataSize;
  uint32_t m_nodeID;

  Ptr<RhpmanApp> m_rhpman;

  Time GenerateLookupDelay();
  Time GenerateUpdateDelay();

  void scheduleLookup();
  void scheduleUpdate();

  uint64_t selectDataToLookup();

  uint32_t GetID();
  void CreateDataItem();
  void lookup();

  void success(DataItem* data);
  void failed(uint64_t dataID);

  Ptr<UniformRandomVariable> m_lookupSelector;
};

};  // namespace rhpman

#endif
