/* -*- Mode:C++; c-file-style:"gnu"; indent-tabs-mode:nil; -*- */

// Include a header file from your module to test.
#include "ns3/rhpman.h"

// An essential include is test.h
#include "ns3/test.h"

#include "dataItem-tests.h"
#include "rhpman-tests.h"
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
}

// Do not forget to allocate an instance of this TestSuite
static RhpmanTestSuite rhpmanTestSuite;
