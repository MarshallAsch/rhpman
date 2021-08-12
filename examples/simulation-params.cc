/// \file simulation-params.cc
/// \author Keefer Rourke <krourke@uoguelph.ca>
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

#define EPSILON 0.00001

#include <inttypes.h>
#include <cmath>
#include <utility>

#include "ns3/nstime.h"
#include "ns3/random-variable-stream.h"
#include "ns3/random-walk-2d-mobility-model.h"

#include "simulation-params.h"
#include "util.h"

namespace rhpman {
// static
std::pair<SimulationParameters, bool> SimulationParameters::parse(int argc, char* argv[]) {
  /* Default simulation values. */
  // Simulation run time.
  double optRuntime = 2.0_minutes;

  double optWaitTime = 30.0_seconds;

  // Node parameters.
  uint32_t optTotalNodes = 160;
  uint32_t optNodesPerPartition = 8;

  // Simulation area parameters.
  double optAreaWidth = 1000.0_meters;
  double optAreaLength = 1000.0_meters;

  // Shi and Chen describe a 4x4 grid of 16 partitions in the simulation,
  // but we allow this to be configurable.
  uint32_t optRows = 4;
  uint32_t optCols = 4;

  // Traveller mobility model parameters.
  double optTravellerVelocity = 20.0_mps;

  // Traveller random 2d walk mobility model parameters.
  // Note: Shi and Chen do not specify any parameters of their random walk
  //   mobility models.
  double optTravellerWalkDistance = 0.0_meters;
  double optTravellerWalkTime = 30.0_seconds;
  std::string optTravellerWalkMode = "distance";

  // Partition-bound node mobility model parameters.
  double optPbnVelocityMin = 1.0_mps;
  double optPbnVelocityMax = 10.0_mps;
  double optPbnVelocityChangeAfter = 100.0_seconds;

  // Link and network parameters.
  std::string optRoutingProtocol = "dsdv";
  double optWifiRadius = 100.0_meters;

  // RHPMAN app parameters.
  double optCarryingThreshold = 0.6;
  double optForwardingThreshold = 0.4;
  uint8_t optNeighborhoodSize = 2;
  uint8_t optElectionNeighborhoodSize = 4;
  double optWcdc = 0.5;
  double optWcol = 0.5;
  double optProfileUpdateDelay = 6.0_seconds;

  // data access parameters
  double optPercentageDataOwners = 10;
  double optLookupTime = 30._seconds;
  double optUpdateTime = 120.0_seconds;
  uint32_t optDataSize = 512;

  uint32_t optStorageSpace = 160;
  uint32_t optBufferSpace = 10;

  double optElectionCooldown = 6.0_seconds;
  double optElectionPeriod = 6.0_seconds;
  double optPeerTimeout = 12.0_seconds;
  double optRequestTimeout = 0.0_seconds;  // set to 0 to ignore timeouts

  double optStorageWeight = 0.5;
  double optEnergyWeight = 0.5;
  double optProcessingWeight = 0.0;

  bool optStaggeredStart = false;

  double optLowPowerThreshold = 0.0;

  // Animation parameters.
  std::string animationTraceFilePath = "rhpman.xml";

  /* Setup commandline option for each simulation parameter. */
  CommandLine cmd;
  cmd.AddValue("runTime", "Simulation run time in seconds", optRuntime);
  cmd.AddValue("totalNodes", "Total number of nodes in the simulation", optTotalNodes);
  cmd.AddValue(
      "staggeredStart",
      "If the application starting should be staggered across the different nodes",
      optStaggeredStart);
  cmd.AddValue(
      "percentDataOwners",
      "Percent of nodes who have original data to deciminate",
      optPercentageDataOwners);
  cmd.AddValue(
      "lowPowerThreshold",
      "The battery precentage at which a node will step down as a replication node if it drops "
      "below this point",
      optLowPowerThreshold);
  cmd.AddValue(
      "lookupTime",
      "number of seconds to used to generate the delay between data lookup",
      optLookupTime);
  cmd.AddValue(
      "updateTime",
      "number of seconds to used to generate the delay between data updates",
      optUpdateTime);
  cmd.AddValue(
      "storageSpace",
      "The number of data items that can be stored in the devices storage space",
      optStorageSpace);
  cmd.AddValue(
      "bufferSpace",
      "The number of data items that can be stored in the devices FCFS buffer space",
      optBufferSpace);
  cmd.AddValue(
      "waitTime",
      "number of seconds to wait before starting the data access application",
      optWaitTime);
  cmd.AddValue("dataSize", "The number of bytes that make up a data object", optDataSize);
  cmd.AddValue("partitionNodes", "The number of nodes placed per partition", optNodesPerPartition);
  cmd.AddValue(
      "carryingThreshold",
      "The delivery probability threshold for a node to cache data",
      optCarryingThreshold);
  cmd.AddValue(
      "forwardingThreshold",
      "The delivery probability threshold for a node to forward data",
      optForwardingThreshold);
  cmd.AddValue(
      "hops",
      "The number of hops to consider in the neighborhood of a node",
      optNeighborhoodSize);
  cmd.AddValue(
      "replicationHops",
      "The number of hops to consider in the neighborhood of a node for replicating node elections",
      optElectionNeighborhoodSize);
  cmd.AddValue(
      "wcdc",
      "Weight of degree connectivity in delivery probability calculations",
      optWcdc);
  cmd.AddValue("wcol", "Weight of colocation in delivery probability calculations", optWcol);
  cmd.AddValue(
      "profileUpdateDelay",
      "Number of seconds between profile updates",
      optProfileUpdateDelay);
  cmd.AddValue("areaWidth", "Width of the simulation area in meters", optAreaWidth);
  cmd.AddValue("areaLength", "Length of the simulation area in meters", optAreaLength);
  cmd.AddValue("gridRows", "Number of rows in the partition grid", optRows);
  cmd.AddValue("gridCols", "Number of columns in the partition grid", optCols);
  cmd.AddValue("travellerVelocity", "Velocity of traveller nodes in m/s", optTravellerVelocity);
  cmd.AddValue(
      "travellerWalkDist",
      "The distance in meters that traveller walks before changing "
      "directions",
      optTravellerWalkDistance);
  cmd.AddValue(
      "travellerWalkTime",
      "The time in seconds that should pass before a traveller changes "
      "directions",
      optTravellerWalkTime);
  cmd.AddValue(
      "travellerWalkMode",
      "Should a traveller change direction after distance walked or time "
      "passed; options are 'distance' or 'time' ",
      optTravellerWalkMode);
  cmd.AddValue(
      "pbnVelocityMin",
      "Minimum velocity of partition-bound-nodes in m/s",
      optPbnVelocityMin);
  cmd.AddValue(
      "pbnVelocityMax",
      "Maximum velocity of partition-bound-nodes in m/s",
      optPbnVelocityMax);
  cmd.AddValue(
      "pbnVelocityChangeAfter",
      "Number of seconds after which each partition-bound node should change velocity",
      optPbnVelocityChangeAfter);
  cmd.AddValue(
      "electionCooldown",
      "The number of seconds to wait before another election can be triggered",
      optElectionCooldown);
  cmd.AddValue(
      "electionPeriod",
      "The number of seconds to wait before checking the results of an election",
      optElectionPeriod);
  cmd.AddValue(
      "peerTimeout",
      "The number of seconds to wait before removing a node from the list of peers or removing it "
      "as a replication node",
      optPeerTimeout);
  cmd.AddValue(
      "requestTimeout",
      "The number of seconds to wait before marking a lookup as failed",
      optRequestTimeout);
  cmd.AddValue(
      "storageWeight",
      "The available storage space weight used for the election fitness calculation",
      optStorageWeight);
  cmd.AddValue(
      "energyWeight",
      "The available energy level weight used for the election fitness calculation",
      optEnergyWeight);
  cmd.AddValue(
      "processingWeight",
      "The available processing power weight used for the election fitness calculation",
      optProcessingWeight);

  cmd.AddValue("routing", "One of either 'DSDV' or 'AODV'", optRoutingProtocol);
  cmd.AddValue("wifiRadius", "The radius of connectivity for each node in meters", optWifiRadius);
  // cmd.AddValue("animationXml", "Output file path for NetAnim trace file",
  // animationTraceFilePath);
  cmd.Parse(argc, argv);

  /* Parse the parameters. */

  bool ok = true;
  SimulationParameters result;
  if (optCarryingThreshold < 0 || optCarryingThreshold > 1) {
    std::cerr << "Carrying threshold (" << optCarryingThreshold << ") is not a probability"
              << std::endl;
    return std::pair<SimulationParameters, bool>(result, false);
  }
  if (optForwardingThreshold < 0 || optForwardingThreshold > 1) {
    std::cerr << "Forwarding threshold (" << optForwardingThreshold << ") is not a probability"
              << std::endl;
    return std::pair<SimulationParameters, bool>(result, false);
  }
  if (optWcol < 0 || optWcol > 1) {
    std::cerr << "Colocation weight (" << optWcol << ") is not a probability" << std::endl;
    return std::pair<SimulationParameters, bool>(result, false);
  }
  if (optWcdc < 0 || optWcdc > 1) {
    std::cerr << "Degree connectivity weight (" << optWcdc << ") is not a probability" << std::endl;
    return std::pair<SimulationParameters, bool>(result, false);
  }

  if (optLowPowerThreshold < 0 || optLowPowerThreshold > 1) {
    std::cerr << "Low power threshold (" << optLowPowerThreshold << ") is not a percentage"
              << std::endl;
    return std::pair<SimulationParameters, bool>(result, false);
  }

  if (optStorageWeight < 0 || optStorageWeight > 1) {
    std::cerr << "Storage space weight (" << optStorageWeight << ") is not a probability"
              << std::endl;
    return std::pair<SimulationParameters, bool>(result, false);
  }
  if (optEnergyWeight < 0 || optEnergyWeight > 1) {
    std::cerr << "Energy level weight (" << optEnergyWeight << ") is not a probability"
              << std::endl;
    return std::pair<SimulationParameters, bool>(result, false);
  }
  if (optProcessingWeight != 0) {  // if (optProcessingWeight < 0 || optProcessingWeight > 1) {
    std::cerr << "Processing power weight (" << optProcessingWeight << ") is not a probability"
              << std::endl;
    return std::pair<SimulationParameters, bool>(result, false);
  }

  if (fabs((optStorageWeight + optEnergyWeight + optProcessingWeight) - 1) > EPSILON) {
    std::cerr << "Fitness weights can not sum to greater than one" << std::endl;
    return std::pair<SimulationParameters, bool>(result, false);
  }

  RandomWalk2dMobilityModel::Mode travellerWalkMode;
  std::tie(travellerWalkMode, ok) = getWalkMode(optTravellerWalkMode);
  if (!ok) {
    std::cerr << "Unrecognized walk mode '" + optTravellerWalkMode + "'." << std::endl;
  }
  if (!optTravellerWalkDistance) {
    optTravellerWalkDistance = std::min(optAreaWidth, optAreaLength);
  }

  RoutingType routingType = getRoutingType(optRoutingProtocol);
  if (routingType == RoutingType::UNKNOWN) {
    std::cerr << "Unrecognized routing type '" + optRoutingProtocol + "'." << std::endl;
    return std::pair<SimulationParameters, bool>(result, false);
  }

  if (optNodesPerPartition * optCols * optRows > optTotalNodes) {
    std::cerr << "Too few nodes (" << optTotalNodes << ") to populate all " << optCols * optRows
              << " partitions with " << optNodesPerPartition << " nodes." << std::endl;
    return std::pair<SimulationParameters, bool>(result, false);
  }

  if (optPercentageDataOwners < 0.0 || optPercentageDataOwners > 100.0) {
    std::cerr << "percentage of data owners (" << optPercentageDataOwners << "%) is out of range"
              << std::endl;
    return std::pair<SimulationParameters, bool>(result, false);
  }

  Ptr<ConstantRandomVariable> travellerVelocityGenerator = CreateObject<ConstantRandomVariable>();
  travellerVelocityGenerator->SetAttribute("Constant", DoubleValue(optTravellerVelocity));

  Ptr<UniformRandomVariable> pbnVelocityGenerator = CreateObject<UniformRandomVariable>();
  pbnVelocityGenerator->SetAttribute("Min", DoubleValue(optPbnVelocityMin));
  pbnVelocityGenerator->SetAttribute("Max", DoubleValue(optPbnVelocityMax));

  result.runtime = Seconds(optRuntime);
  result.area = SimulationArea(
      std::pair<double, double>(0.0, 0.0),
      std::pair<double, double>(optAreaWidth, optAreaLength));
  result.rows = optRows;
  result.cols = optCols;

  result.totalNodes = optTotalNodes;
  result.dataOwners = std::round(optTotalNodes * (optPercentageDataOwners / 100.0));

  result.travellerNodes = optTotalNodes - (optNodesPerPartition * (optRows * optCols));
  result.travellerVelocity = travellerVelocityGenerator;
  result.travellerDirectionChangePeriod = Seconds(optTravellerWalkTime);
  result.travellerDirectionChangeDistance = optTravellerWalkDistance;
  result.travellerWalkMode = travellerWalkMode;

  result.nodesPerPartition = optNodesPerPartition;
  result.pbnVelocity = pbnVelocityGenerator;
  result.pbnVelocityChangePeriod = Seconds(optPbnVelocityChangeAfter);

  result.routingProtocol = routingType;
  result.wifiRadius = optWifiRadius;
  result.carryingThreshold = optCarryingThreshold;
  result.forwardingThreshold = optForwardingThreshold;
  result.neighborhoodSize = optNeighborhoodSize;
  result.electionNeighborhoodSize = optElectionNeighborhoodSize;
  result.wcdc = optWcdc;
  result.wcol = optWcol;
  result.profileUpdateDelay = Seconds(optProfileUpdateDelay);

  result.lookupTime = Seconds(optLookupTime);
  result.updateTime = Seconds(optUpdateTime);
  result.dataSize = optDataSize;
  result.waitTime = Seconds(optWaitTime);

  result.electionCooldown = Seconds(optElectionCooldown);
  result.electionPeriod = Seconds(optElectionPeriod);
  result.peerTimeout = Seconds(optPeerTimeout);
  result.requestTimeout = Seconds(optRequestTimeout);

  result.storageWeight = optStorageWeight;
  result.energyWeight = optEnergyWeight;
  result.processingWeight = optProcessingWeight;

  result.storageSpace = optStorageSpace;
  result.bufferSpace = optBufferSpace;

  result.lowPowerThreshold = optLowPowerThreshold;

  result.staggeredStart = optStaggeredStart;

  result.netanimTraceFilePath = animationTraceFilePath;

  return std::pair<SimulationParameters, bool>(result, ok);
}
}  // namespace rhpman
