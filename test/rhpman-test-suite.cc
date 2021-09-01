/* -*- Mode:C++; c-file-style:"gnu"; indent-tabs-mode:nil; -*- */

// Include a header file from your module to test.
#include "ns3/rhpman.h"

// An essential include is test.h
#include "ns3/test.h"

#include "dataItem-tests.h"
#include "rhpman-tests.h"
#include "stats-tests.h"
#include "storage-tests.h"
#include "table-tests.h"

// Do not put your test classes in namespace ns3.  You may find it useful
// to use the using directive to access the ns3 namespace directly
using namespace ns3;

// The TestSuite class names the TestSuite, identifies what type of TestSuite,
// and enables the TestCases to be run.  Typically, only the constructor for
// this class must be defined
//
class RhpmanTestSuite : public TestSuite {
 public:
  RhpmanTestSuite();
};

RhpmanTestSuite::RhpmanTestSuite() : TestSuite("rhpman", UNIT) {
  // TestDuration for TestCase can be QUICK, EXTENSIVE or TAKES_FOREVER

  // storage tests
  AddTestCase(new DefaultStorage, TestCase::QUICK);
  AddTestCase(new StorageCapacityOne, TestCase::QUICK);
  AddTestCase(new StorageCapacityChange, TestCase::QUICK);
  AddTestCase(new RemoveStoredItem, TestCase::QUICK);
  AddTestCase(new RemoveNonExistantItem, TestCase::QUICK);
  AddTestCase(new ClearStorage, TestCase::QUICK);

  // data item tests
  AddTestCase(new DataItemDefault, TestCase::QUICK);
  AddTestCase(new DataItemNoID, TestCase::QUICK);
  AddTestCase(new DataItemString, TestCase::QUICK);

  // table tests
  AddTestCase(new DefaultTableChangeDegree, TestCase::QUICK);
  AddTestCase(new EmptyTableChangeDegree, TestCase::QUICK);
  AddTestCase(new OneTableChangeDegree, TestCase::QUICK);
  AddTestCase(new SameTableChangeDegree, TestCase::QUICK);
  AddTestCase(new ChangeDegreeNodeLeaving, TestCase::QUICK);
  AddTestCase(new ChangeDegreeNodeJoining, TestCase::QUICK);
  AddTestCase(new ChangeDegreeNodeJoiningMultiple, TestCase::QUICK);
  AddTestCase(new ChangeDegreeNodeJoinLeaveIntermediate, TestCase::QUICK);
  AddTestCase(new ChangeDegreeStartUpBehaviour, TestCase::QUICK);

  AddTestCase(new GetNeighboursEmpty, TestCase::QUICK);
  AddTestCase(new GetNeighborsDSDVFilterLocal, TestCase::QUICK);
  AddTestCase(new GetNeighborsDSDVFilter2Hops, TestCase::QUICK);
  AddTestCase(new GetNeighborsDSDVFilter0Hops, TestCase::QUICK);

  AddTestCase(new GetNeighborsAODVFilterLocal, TestCase::QUICK);
  AddTestCase(new GetNeighborsAODVFilterUpOnly, TestCase::QUICK);
  AddTestCase(new GetNeighborsAODVFilter3Hops, TestCase::QUICK);
  AddTestCase(new GetNeighborsAODVFilter2Hops, TestCase::QUICK);

  // rhpman app tests
  AddTestCase(new InitalRoleNonReplicating, TestCase::QUICK);

  // free space checks
  AddTestCase(new GetFreeSpaceEmpty, TestCase::QUICK);
  AddTestCase(new GetFreeSpaceFull, TestCase::QUICK);
  AddTestCase(new GetFreeSpaceHalf, TestCase::QUICK);

  // colocation
  AddTestCase(new ColocationIfReplicating, TestCase::QUICK);
  AddTestCase(new ColocationIfNonReplicatingNoKnownReplicators, TestCase::QUICK);
  AddTestCase(new ColocationIfNonReplicatingOneKnownReplicators, TestCase::QUICK);
  AddTestCase(new ColocationIfNonReplicatingMultipleKnownReplicators, TestCase::QUICK);

  // change degree
  AddTestCase(new InitalChangeDegree, TestCase::QUICK);

  // node profile
  AddTestCase(new ProfileIfReplicatingNode, TestCase::QUICK);
  AddTestCase(new ProfileIfNonReplicatingNodeEmptyTable, TestCase::QUICK);
  AddTestCase(new ProfileIfNonReplicatingNodeKnowsOtherNodes, TestCase::QUICK);
  AddTestCase(new ProfileIfNonReplicatingNodeKnowsOtherNodesDifferentWeight, TestCase::QUICK);

  // storage wight
  AddTestCase(new WeightedStorageSpaceEmpty, TestCase::QUICK);
  AddTestCase(new WeightedStorageSpaceFull, TestCase::QUICK);
  AddTestCase(new WeightedStorageSpaceHalf, TestCase::QUICK);
  AddTestCase(new WeightedStorageSpaceHalfSmallWeight, TestCase::QUICK);

  // callback calling
  AddTestCase(new SuccessLookupNullCallback, TestCase::QUICK);
  AddTestCase(new SuccessLookupNonNullCallback, TestCase::QUICK);
  AddTestCase(new FailedLookupNullCallback, TestCase::QUICK);
  AddTestCase(new FailedLookupNonNullCallback, TestCase::QUICK);

  // id generator
  AddTestCase(new GenerateIdTest, TestCase::QUICK);

  // address filtering
  AddTestCase(new FilterAddressSingleNoAddresses, TestCase::QUICK);
  AddTestCase(new FilterAddressSingleNotInSet, TestCase::QUICK);
  AddTestCase(new FilterAddressSingleInSet, TestCase::QUICK);
  AddTestCase(new FilterAddressMultipleNoAddressesNoExclude, TestCase::QUICK);
  AddTestCase(new FilterAddressMultipleNoAddressesExclude, TestCase::QUICK);
  AddTestCase(new FilterAddressMultipleAddressesNoExclude, TestCase::QUICK);
  AddTestCase(new FilterAddressMultipleAddressesSingleExclude, TestCase::QUICK);
  AddTestCase(new FilterAddressMultipleAddressesSingleExcludeNotInSet, TestCase::QUICK);
  AddTestCase(new FilterAddressMultipleAddressesSingleExcludeInSetMix, TestCase::QUICK);

  // callback registering
  AddTestCase(new RegisterSuccessCallback, TestCase::QUICK);
  AddTestCase(new RegisterSuccessCallbackNull, TestCase::QUICK);
  AddTestCase(new RegisterFailureCallback, TestCase::QUICK);
  AddTestCase(new RegisterFailureCallbackNull, TestCase::QUICK);

  // stats tests
  AddTestCase(new StatsTestResetCounters, TestCase::QUICK);
  AddTestCase(new TypeStringValidValues, TestCase::QUICK);
  AddTestCase(new StatsPrintDefaultPrefix, TestCase::QUICK);
  AddTestCase(new StatsPrintWithPrefix, TestCase::QUICK);

  // stats inital value checks
  AddTestCase(new InitalSaveValue, TestCase::QUICK);
  AddTestCase(new InitalLookupValue, TestCase::QUICK);
  AddTestCase(new InitalSuccessValue, TestCase::QUICK);
  AddTestCase(new InitalFailedValue, TestCase::QUICK);
  AddTestCase(new InitalLateValue, TestCase::QUICK);
  AddTestCase(new InitalTotalPendingValue, TestCase::QUICK);
  AddTestCase(new InitalTotalSentValue, TestCase::QUICK);
  AddTestCase(new InitalTotalReceivedValue, TestCase::QUICK);
  AddTestCase(new InitalTotalExpectedReceiveValue, TestCase::QUICK);
  AddTestCase(new InitalDuplicateValue, TestCase::QUICK);
  AddTestCase(new InitalStepUpValue, TestCase::QUICK);
  AddTestCase(new InitalStepDownValue, TestCase::QUICK);
  AddTestCase(new InitalCacheHitValue, TestCase::QUICK);
  AddTestCase(new InitalPowerLossValue, TestCase::QUICK);
  AddTestCase(new InitalPowerRechargedValue, TestCase::QUICK);
  AddTestCase(new InitalSentTypeValue, TestCase::QUICK);
  AddTestCase(new InitalReceivedTypeValue, TestCase::QUICK);
  AddTestCase(new InitalExpectedTypeValue, TestCase::QUICK);

  // stats increment once
  AddTestCase(new StatsIncrementSaveOnlyOnce, TestCase::QUICK);
  AddTestCase(new StatsIncrementLookupOnlyOnce, TestCase::QUICK);
  AddTestCase(new StatsIncrementSuccessOnlyOnce, TestCase::QUICK);
  AddTestCase(new StatsIncrementFailedOnlyOnce, TestCase::QUICK);
  AddTestCase(new StatsIncrementLateOnlyOnce, TestCase::QUICK);
  AddTestCase(new StatsIncrementCacheHitOnlyOnce, TestCase::QUICK);
  AddTestCase(new StatsIncrementPowerLossOnlyOnce, TestCase::QUICK);
  AddTestCase(new StatsIncrementPowerRechargedOnlyOnce, TestCase::QUICK);
  AddTestCase(new StatsIncrementDuplicateMessageOnlyOnce, TestCase::QUICK);
  AddTestCase(new StatsIncrementElectionStepUpOnlyOnce, TestCase::QUICK);
  AddTestCase(new StatsIncrementElectionStepDownOnlyOnce, TestCase::QUICK);
  AddTestCase(new StatsAddPendingOnlyOnce, TestCase::QUICK);
  AddTestCase(new StatsIncrementSentUnknownOnlyOnce, TestCase::QUICK);
  AddTestCase(new StatsIncrementSentPingOnlyOnce, TestCase::QUICK);
  AddTestCase(new StatsIncrementSentModeChangeOnlyOnce, TestCase::QUICK);
  AddTestCase(new StatsIncrementSentElectionRequestOnlyOnce, TestCase::QUICK);
  AddTestCase(new StatsIncrementSentStoreOnlyOnce, TestCase::QUICK);
  AddTestCase(new StatsIncrementSentLookupOnlyOnce, TestCase::QUICK);
  AddTestCase(new StatsIncrementSentLookupResponseOnlyOnce, TestCase::QUICK);
  AddTestCase(new StatsIncrementSentTransferOnlyOnce, TestCase::QUICK);
  AddTestCase(new StatsIncrementSentUnknownMultipleOnlyOnce, TestCase::QUICK);
  AddTestCase(new StatsIncrementSentPingMultipleOnlyOnce, TestCase::QUICK);
  AddTestCase(new StatsIncrementSentModeChangeMultipleOnlyOnce, TestCase::QUICK);
  AddTestCase(new StatsIncrementSentElectionRequestMultipleOnlyOnce, TestCase::QUICK);
  AddTestCase(new StatsIncrementSentStoreMultipleOnlyOnce, TestCase::QUICK);
  AddTestCase(new StatsIncrementSentLookupMultipleOnlyOnce, TestCase::QUICK);
  AddTestCase(new StatsIncrementSentLookupResponseMultipleOnlyOnce, TestCase::QUICK);
  AddTestCase(new StatsIncrementSentTransferMultipleOnlyOnce, TestCase::QUICK);
  AddTestCase(new StatsIncrementReceivedUnknownOnlyOnce, TestCase::QUICK);
  AddTestCase(new StatsIncrementReceivedPingOnlyOnce, TestCase::QUICK);
  AddTestCase(new StatsIncrementReceivedModeChangeOnlyOnce, TestCase::QUICK);
  AddTestCase(new StatsIncrementReceivedElectionRequestOnlyOnce, TestCase::QUICK);
  AddTestCase(new StatsIncrementReceivedStoreOnlyOnce, TestCase::QUICK);
  AddTestCase(new StatsIncrementReceivedLookupnOnlyOnce, TestCase::QUICK);
  AddTestCase(new StatsIncrementReceivedLookupResponseOnlyOnce, TestCase::QUICK);
  AddTestCase(new StatsIncrementReceivedTransferOnlyOnce, TestCase::QUICK);

  // stats increment multiple times
  AddTestCase(new StatsIncrementSaveMultipleTimes, TestCase::QUICK);
  AddTestCase(new StatsIncrementLookupMultipleTimes, TestCase::QUICK);
  AddTestCase(new StatsIncrementSuccessMultipleTimes, TestCase::QUICK);
  AddTestCase(new StatsIncrementFailedMultipleTimes, TestCase::QUICK);
  AddTestCase(new StatsIncrementLateMultipleTimes, TestCase::QUICK);
  AddTestCase(new StatsIncrementCacheHitMultipleTimes, TestCase::QUICK);
  AddTestCase(new StatsIncrementPowerLossMultipleTimes, TestCase::QUICK);
  AddTestCase(new StatsIncrementPowerRechargedMultipleTimes, TestCase::QUICK);
  AddTestCase(new StatsIncrementDuplicateMessageMultipleTimes, TestCase::QUICK);
  AddTestCase(new StatsIncrementElectionStepUpMultipleTimes, TestCase::QUICK);
  AddTestCase(new StatsIncrementElectionStepDownMultipleTimes, TestCase::QUICK);
  AddTestCase(new StatsAddPendingMultipleTimes, TestCase::QUICK);
  AddTestCase(new StatsIncrementSentUnknownMultipleTimes, TestCase::QUICK);
  AddTestCase(new StatsIncrementSentPingMultipleTimes, TestCase::QUICK);
  AddTestCase(new StatsIncrementSentModeChangeMultipleTimes, TestCase::QUICK);
  AddTestCase(new StatsIncrementSentElectionRequestMultipleTimes, TestCase::QUICK);
  AddTestCase(new StatsIncrementSentStoreMultipleTimes, TestCase::QUICK);
  AddTestCase(new StatsIncrementSentLookupMultipleTimes, TestCase::QUICK);
  AddTestCase(new StatsIncrementSentLookupResponseMultipleTimes, TestCase::QUICK);
  AddTestCase(new StatsIncrementSentTransferMultipleTimes, TestCase::QUICK);
  AddTestCase(new StatsIncrementSentUnknownMultipleMultipleTimes, TestCase::QUICK);
  AddTestCase(new StatsIncrementSentPingMultipleMultipleTimes, TestCase::QUICK);
  AddTestCase(new StatsIncrementSentModeChangeMultipleMultipleTimes, TestCase::QUICK);
  AddTestCase(new StatsIncrementSentElectionRequestMultipleMultipleTimes, TestCase::QUICK);
  AddTestCase(new StatsIncrementSentStoreMultipleMultipleTimes, TestCase::QUICK);
  AddTestCase(new StatsIncrementSentLookupMultipleMultipleTimes, TestCase::QUICK);
  AddTestCase(new StatsIncrementSentLookupResponseMultipleMultipleTimes, TestCase::QUICK);
  AddTestCase(new StatsIncrementSentTransferMultipleMultipleTimes, TestCase::QUICK);
  AddTestCase(new StatsIncrementReceivedUnknownMultipleTimes, TestCase::QUICK);
  AddTestCase(new StatsIncrementReceivedPingMultipleTimes, TestCase::QUICK);
  AddTestCase(new StatsIncrementReceivedModeChangeMultipleTimes, TestCase::QUICK);
  AddTestCase(new StatsIncrementReceivedElectionRequestMultipleTimes, TestCase::QUICK);
  AddTestCase(new StatsIncrementReceivedStoreMultipleTimes, TestCase::QUICK);
  AddTestCase(new StatsIncrementReceivedLookupnMultipleTimes, TestCase::QUICK);
  AddTestCase(new StatsIncrementReceivedLookupResponseMultipleTimes, TestCase::QUICK);
  AddTestCase(new StatsIncrementReceivedTransferMultipleTimes, TestCase::QUICK);

  // stats increment should affect the same counts from multiple instances
  AddTestCase(new StatsIncrementSaveStaticValues, TestCase::QUICK);
  AddTestCase(new StatsIncrementLookupStaticValues, TestCase::QUICK);
  AddTestCase(new StatsIncrementSuccessStaticValues, TestCase::QUICK);
  AddTestCase(new StatsIncrementFailedStaticValues, TestCase::QUICK);
  AddTestCase(new StatsIncrementLateStaticValues, TestCase::QUICK);
  AddTestCase(new StatsIncrementCacheHitStaticValues, TestCase::QUICK);
  AddTestCase(new StatsIncrementPowerLossStaticValues, TestCase::QUICK);
  AddTestCase(new StatsIncrementPowerRechargedStaticValues, TestCase::QUICK);
  AddTestCase(new StatsIncrementDuplicateMessageStaticValues, TestCase::QUICK);
  AddTestCase(new StatsIncrementElectionStepUpStaticValues, TestCase::QUICK);
  AddTestCase(new StatsIncrementElectionStepDownStaticValues, TestCase::QUICK);
  AddTestCase(new StatsAddPendingStaticValues, TestCase::QUICK);
  AddTestCase(new StatsIncrementSentUnknownStaticValues, TestCase::QUICK);
  AddTestCase(new StatsIncrementSentPingStaticValues, TestCase::QUICK);
  AddTestCase(new StatsIncrementSentModeChangeStaticValues, TestCase::QUICK);
  AddTestCase(new StatsIncrementSentElectionRequestStaticValues, TestCase::QUICK);
  AddTestCase(new StatsIncrementSentStoreStaticValues, TestCase::QUICK);
  AddTestCase(new StatsIncrementSentLookupStaticValues, TestCase::QUICK);
  AddTestCase(new StatsIncrementSentLookupResponseStaticValues, TestCase::QUICK);
  AddTestCase(new StatsIncrementSentTransferStaticValues, TestCase::QUICK);
  AddTestCase(new StatsIncrementSentUnknownMultipleStaticValues, TestCase::QUICK);
  AddTestCase(new StatsIncrementSentPingMultipleStaticValues, TestCase::QUICK);
  AddTestCase(new StatsIncrementSentModeChangeMultipleStaticValues, TestCase::QUICK);
  AddTestCase(new StatsIncrementSentElectionRequestMultipleStaticValues, TestCase::QUICK);
  AddTestCase(new StatsIncrementSentStoreMultipleStaticValues, TestCase::QUICK);
  AddTestCase(new StatsIncrementSentLookupMultipleStaticValues, TestCase::QUICK);
  AddTestCase(new StatsIncrementSentLookupResponseMultipleStaticValues, TestCase::QUICK);
  AddTestCase(new StatsIncrementSentTransferMultipleStaticValues, TestCase::QUICK);
  AddTestCase(new StatsIncrementReceivedUnknownStaticValues, TestCase::QUICK);
  AddTestCase(new StatsIncrementReceivedPingStaticValues, TestCase::QUICK);
  AddTestCase(new StatsIncrementReceivedModeChangeStaticValues, TestCase::QUICK);
  AddTestCase(new StatsIncrementReceivedElectionRequestStaticValues, TestCase::QUICK);
  AddTestCase(new StatsIncrementReceivedStoreStaticValues, TestCase::QUICK);
  AddTestCase(new StatsIncrementReceivedLookupnStaticValues, TestCase::QUICK);
  AddTestCase(new StatsIncrementReceivedLookupResponseStaticValues, TestCase::QUICK);
  AddTestCase(new StatsIncrementReceivedTransferStaticValues, TestCase::QUICK);
}

// Do not forget to allocate an instance of this TestSuite
static RhpmanTestSuite rhpmanTestSuite;
