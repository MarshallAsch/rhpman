/// \file data-access-helper.h
/// \author Marshall Asch <masch@uoguelph.ca>
/// \brief A helper to install the data access application on the nodes to run
///        the simulation
///
///     *References*:
///      - K. Shi and H. Chen, "RHPMAN: Replication in highly partitioned mobile
///        ad hoc networks," International Journal of Distributed Sensor Networks
///        Jul. 2014.
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
///
#ifndef __RHPMAN_DATA_ACCESS_HELPER_H
#define __RHPMAN_DATA_ACCESS_HELPER_H

#include <map>

#include "ns3/application-container.h"
#include "ns3/application.h"
#include "ns3/applications-module.h"
#include "ns3/attribute.h"
#include "ns3/core-module.h"
#include "ns3/node-container.h"
#include "ns3/object-base.h"
#include "ns3/object-factory.h"
#include "ns3/socket.h"

#include "ns3/dataAccess.h"
#include "ns3/rhpman.h"

namespace rhpman {

using namespace ns3;

/// \brief Helper class to install the Rhpman data access Application on a Node containers.
///     The defaults of this class as described by Shi and Chen in their paper.
class DataAccessHelper {
 public:
  DataAccessHelper(uint32_t dataOwners = 0) : m_dataOwners(dataOwners) {
    m_factory.SetTypeId(DataAccess::GetTypeId());
    rand = CreateObject<UniformRandomVariable>();
  };

  void SetAttribute(std::string name, const AttributeValue& value);
  void SetDataOwners(uint32_t num);

  /// \brief Configures a rhpman data access application and installs it on each node.
  ApplicationContainer Install(NodeContainer nodes);
  ApplicationContainer Install(Ptr<Node> node) const;
  ApplicationContainer Install(std::string nodeName) const;

 private:
  Ptr<Application> createAndInstallApp(Ptr<Node> node) const;
  ObjectFactory m_factory;
  Ptr<UniformRandomVariable> rand;
  uint32_t m_dataOwners;
};

};  // namespace rhpman

#endif
