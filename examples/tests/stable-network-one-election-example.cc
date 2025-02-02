

////// Simulation test cases:
// test to make sure that the correct number of ping messages get sent

/// \file stable-network-one-election-example.cc
/// \author Marshall Asch <masch@uoguelph.ca>
/// \brief The purpose of this example is to run the RHPMAN scheme on 2 nodes
///        that are within communication range with eachother. There are no
///        data items.
///        In this test there should be the correct number of ping messages being
///        sent and received by the nodes. The nodes join the network within 1 second of eachother.
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

#include <sysexits.h>

#include "ns3/command-line.h"
#include "ns3/config.h"
#include "ns3/core-module.h"
#include "ns3/double.h"
#include "ns3/dsdv-helper.h"
#include "ns3/internet-stack-helper.h"
#include "ns3/ipv4-address-helper.h"
#include "ns3/ipv4-interface-container.h"
#include "ns3/ipv4-routing-helper.h"
#include "ns3/ipv6-address-helper.h"
#include "ns3/log-macros-enabled.h"
#include "ns3/log.h"
#include "ns3/mobility-helper.h"
#include "ns3/mobility-model.h"
#include "ns3/node-container.h"
#include "ns3/nstime.h"
#include "ns3/object.h"
#include "ns3/random-variable-stream.h"
#include "ns3/random-walk-2d-mobility-model.h"
#include "ns3/rng-seed-manager.h"
#include "ns3/wifi-phy.h"
#include "ns3/wifi-standards.h"
#include "ns3/yans-wifi-helper.h"

#include "ns3/energy-module.h"
#include "ns3/li-ion-energy-source.h"
#include "ns3/wifi-radio-energy-model-helper.h"

//#include "logging.h"
#include "ns3/data-access-helper.h"
#include "ns3/rhpman-helper.h"
#include "ns3/rhpman-stats.h"

#include "../../model/nsutil.h"
#include "../../model/util.h"

using namespace ns3;
using namespace rhpman;

NS_LOG_COMPONENT_DEFINE("triggerTimeoutsTest");

int main(int argc, char* argv[]) {
  RngSeedManager::SetSeed(7);  // arbitrarily chosen
  Time::SetResolution(Time::NS);

  /* Create nodes, network topology, and start simulation. */
  NodeContainer allAdHocNodes;
  allAdHocNodes.Create(2);

  MobilityHelper mobilityHelper;

  // lay the nodes out in a grid with 10 spaces between them
  mobilityHelper.SetPositionAllocator(
      "ns3::GridPositionAllocator",
      "GridWidth",
      UintegerValue(10),
      "DeltaX",
      DoubleValue(10),
      "DeltaY",
      DoubleValue(10));

  // nodes do not move
  mobilityHelper.SetMobilityModel("ns3::ConstantPositionMobilityModel");
  mobilityHelper.Install(allAdHocNodes);

  YansWifiPhyHelper wifiPhy = YansWifiPhyHelper::Default();
  wifiPhy.SetPcapDataLinkType(YansWifiPhyHelper::DLT_IEEE802_11_RADIO);

  auto wifiChannel = YansWifiChannelHelper::Default();
  wifiChannel.SetPropagationDelay("ns3::ConstantSpeedPropagationDelayModel");

  // Shi and Chen refer to a 100m radius of connectivity for each node.
  // They do not assume any propagation loss model, so we use a constant
  // propagation loss model which amounts to having connectivity withing the
  // radius, and having no connectivity outside the radius.
  wifiChannel.AddPropagationLoss("ns3::RangePropagationLossModel", "MaxRange", DoubleValue(20));

  wifiPhy.SetChannel(wifiChannel.Create());

  WifiMacHelper wifiMac;
  wifiMac.SetType("ns3::AdhocWifiMac");

  WifiHelper wifi;
  wifi.SetStandard(WIFI_STANDARD_80211b);

  NetDeviceContainer adhocDevices = wifi.Install(wifiPhy, wifiMac, allAdHocNodes);
  // wifiPhy.EnablePcap("rhpman", adhocDevices);

  /** Energy Model **/
  /***************************************************************************/
  /* energy source */
  LiIonEnergySourceHelper liIonSourceHelper;
  // configure energy source
  // install source
  EnergySourceContainer sources = liIonSourceHelper.Install(allAdHocNodes);
  /* device energy model */
  WifiRadioEnergyModelHelper radioEnergyHelper;
  // configure radio energy model
  // install device model
  DeviceEnergyModelContainer deviceModels = radioEnergyHelper.Install(adhocDevices, sources);
  /***************************************************************************/

  InternetStackHelper internet;

  DsdvHelper dsdv;
  internet.SetRoutingHelper(dsdv);

  internet.Install(allAdHocNodes);
  Ipv4AddressHelper adhocAddresses;
  adhocAddresses.SetBase("10.1.0.0", "255.255.0.0");
  adhocAddresses.Assign(adhocDevices);

  // Install the RHPMAN Scheme onto each node.
  RhpmanAppHelper rhpman;
  rhpman.SetAttribute("CarryingThreshold", DoubleValue(0.6));
  rhpman.SetAttribute("ForwardingThreshold", DoubleValue(0.4));
  rhpman.SetAttribute("NeighborhoodSize", UintegerValue(4));
  rhpman.SetAttribute("StorageSpace", UintegerValue(10));
  rhpman.SetAttribute("BufferSpace", UintegerValue(10));
  rhpman.SetAttribute("ElectionNeighborhoodSize", UintegerValue(2));
  rhpman.SetAttribute("ColocationWeight", DoubleValue(0.5));
  rhpman.SetAttribute("DegreeConnectivityWeight", DoubleValue(0.5));
  rhpman.SetAttribute("ProfileUpdateDelay", TimeValue(Seconds(5)));
  rhpman.SetAttribute("ElectionCooldown", TimeValue(Seconds(5)));
  rhpman.SetAttribute("ElectionPeriod", TimeValue(Seconds(5)));
  rhpman.SetAttribute("PeerTimeout", TimeValue(Seconds(10)));
  rhpman.SetAttribute("RequestTimeout", TimeValue(Seconds(0.0)));
  rhpman.SetAttribute("StorageWeight", DoubleValue(1));
  rhpman.SetAttribute("EnergyWeight", DoubleValue(0.0));
  rhpman.SetAttribute("ProcessingWeight", DoubleValue(0));
  rhpman.SetAttribute("LowPowerThreshold", DoubleValue(0.2));

  ApplicationContainer rhpmanApps = rhpman.Install(allAdHocNodes);
  Ptr<UniformRandomVariable> jitter = CreateObject<UniformRandomVariable>();
  jitter->SetAttribute("Min", DoubleValue(0));
  jitter->SetAttribute("Max", DoubleValue(1.0));
  rhpmanApps.StartWithJitter(Seconds(0), jitter);
  // rhpmanApps.Start(Seconds(0));

  rhpmanApps.Stop(Seconds(100));

  // Install the RHPMAN Scheme onto each node.
  DataAccessHelper dataAccess;
  dataAccess.SetAttribute("RequestTime", TimeValue(Seconds(0)));
  dataAccess.SetAttribute("UpdateTime", TimeValue(Seconds(0)));
  dataAccess.SetAttribute("DataSize", UintegerValue(512));
  dataAccess.SetDataOwners(1);

  ApplicationContainer accessApps = dataAccess.Install(allAdHocNodes);
  accessApps.Start(Seconds(0));
  accessApps.Stop(Seconds(100));

  Stats stats;

  Simulator::Stop(101.0_sec);
  Simulator::Run();
  Simulator::Destroy();
  NS_LOG_UNCOND("Done.");

  // check to make sure that the failed lookup count is greater than 0
  NS_ASSERT_MSG(stats.getSave() == 1, "one data item should have been created in the system");
  NS_ASSERT_MSG(stats.getLookup() == 0, "No lookups should have happened");

  NS_ASSERT_MSG(
      stats.getStepUp() == 2,
      "one node should step up as an elected node, and it should not change");
  NS_ASSERT_MSG(stats.getStepDown() == 0, "no nodes should step down as replica holder nodes");
  NS_ASSERT_MSG(stats.getSent(Stats::Type::ELECTION_REQUEST) == 0, "there should be no elections");

  RhpmanApp::CleanUp();

  return EX_OK;
}
