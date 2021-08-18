

#include "rhpman-tests.h"

#include "../model/dataItem.h"
#include "../model/rhpman.h"
#include "ns3/callback.h"

using namespace ns3;
using namespace rhpman;

InitalRoleNonReplicating::InitalRoleNonReplicating()
    : TestCase("Inital role should be non replicating") {}
ColocationIfReplicating::ColocationIfReplicating()
    : TestCase("colocation value for replicating nodes") {}
ColocationIfNonReplicatingNoKnownReplicators::ColocationIfNonReplicatingNoKnownReplicators()
    : TestCase(
          "colocation value for non replicating nodes that do not know about any replicating "
          "nodes") {}
ColocationIfNonReplicatingOneKnownReplicators::ColocationIfNonReplicatingOneKnownReplicators()
    : TestCase("colocation value for non replicating nodes that know about one replicating node") {}
ColocationIfNonReplicatingMultipleKnownReplicators::
    ColocationIfNonReplicatingMultipleKnownReplicators()
    : TestCase(
          "colocation value for non replicating nodes that know about several replicating nodes") {}
InitalChangeDegree::InitalChangeDegree() : TestCase("inital change degree for a node") {}
ProfileIfReplicatingNode::ProfileIfReplicatingNode() : TestCase("replicating node profile value") {}
ProfileIfNonReplicatingNodeEmptyTable::ProfileIfNonReplicatingNodeEmptyTable()
    : TestCase("non replicating node with empty peer table profile value") {}
ProfileIfNonReplicatingNodeKnowsOtherNodes::ProfileIfNonReplicatingNodeKnowsOtherNodes()
    : TestCase("non replicating node with non empty peer table profile value") {}
ProfileIfNonReplicatingNodeKnowsOtherNodesDifferentWeight::
    ProfileIfNonReplicatingNodeKnowsOtherNodesDifferentWeight()
    : TestCase(
          "non replicating node with non empty peer table profile value weighted differently") {}
WeightedStorageSpaceEmpty::WeightedStorageSpaceEmpty()
    : TestCase("weighted storage space with no items stored") {}
WeightedStorageSpaceFull::WeightedStorageSpaceFull()
    : TestCase("weighted storage space with no free space") {}
WeightedStorageSpaceHalf::WeightedStorageSpaceHalf()
    : TestCase("weighted storage space with half free space") {}
WeightedStorageSpaceHalfSmallWeight::WeightedStorageSpaceHalfSmallWeight()
    : TestCase("weighted storage space with half free space") {}
SuccessLookupNullCallback::SuccessLookupNullCallback() : TestCase("lookup success null callback") {}
SuccessLookupNonNullCallback::SuccessLookupNonNullCallback()
    : TestCase("lookup success with callback") {}
FailedLookupNullCallback::FailedLookupNullCallback() : TestCase("lookup failed null callback") {}
FailedLookupNonNullCallback::FailedLookupNonNullCallback()
    : TestCase("lookup failed with callback") {}
GenerateIdTest::GenerateIdTest() : TestCase("generate message IDs") {}

/////////  actual test functions here

void InitalRoleNonReplicating::DoRun(void) {
  RhpmanApp rhpman;

  NS_TEST_ASSERT_MSG_EQ(
      rhpman.GetRole(),
      RhpmanApp::Role::NON_REPLICATING,
      "Inital role should be non replicating");
}

void ColocationIfReplicating::DoRun(void) {
  RhpmanApp rhpman;
  rhpman.m_role = RhpmanApp::Role::REPLICATING;

  NS_TEST_ASSERT_MSG_EQ_TOL(
      rhpman.CalculateColocation(),
      1,
      0.00001,
      "Replication Nodes should have a colocation value of 1");
}

void ColocationIfNonReplicatingNoKnownReplicators::DoRun(void) {
  RhpmanApp rhpman;
  rhpman.m_role = RhpmanApp::Role::NON_REPLICATING;
  rhpman.m_replicating_nodes.clear();

  NS_TEST_ASSERT_MSG_EQ_TOL(
      rhpman.CalculateColocation(),
      0,
      0.00001,
      "non replicating nodes should have a colocation value of 0 if there are no replication nodes "
      "in range");
}

void ColocationIfNonReplicatingOneKnownReplicators::DoRun(void) {
  RhpmanApp rhpman;
  rhpman.m_role = RhpmanApp::Role::NON_REPLICATING;
  rhpman.m_replicating_nodes.insert(100);

  NS_TEST_ASSERT_MSG_EQ_TOL(
      rhpman.CalculateColocation(),
      1,
      0.00001,
      "non replicating nodes should have a colocation value of 1 if there are replication nodes in "
      "range");
}

void ColocationIfNonReplicatingMultipleKnownReplicators::DoRun(void) {
  RhpmanApp rhpman;
  rhpman.m_role = RhpmanApp::Role::NON_REPLICATING;
  rhpman.m_replicating_nodes.insert(100);
  rhpman.m_replicating_nodes.insert(50);
  rhpman.m_replicating_nodes.insert(300);

  NS_TEST_ASSERT_MSG_EQ_TOL(
      rhpman.CalculateColocation(),
      1,
      0.00001,
      "non replicating nodes should have a colocation value of 1 if there are replication nodes in "
      "range");
}

void InitalChangeDegree::DoRun(void) {
  RhpmanApp rhpman;

  NS_TEST_ASSERT_MSG_EQ_TOL(
      rhpman.CalculateChangeDegree(),
      0,
      0.00001,
      "inital change degree should be 0");
}

void ProfileIfReplicatingNode::DoRun(void) {
  RhpmanApp rhpman;
  rhpman.m_role = RhpmanApp::Role::REPLICATING;

  NS_TEST_ASSERT_MSG_EQ_TOL(
      rhpman.CalculateProfile(),
      1,
      0.00001,
      "replicating nodes will always have a profile value of 1");
}

void ProfileIfNonReplicatingNodeEmptyTable::DoRun(void) {
  RhpmanApp rhpman;
  rhpman.m_role = RhpmanApp::Role::NON_REPLICATING;

  NS_TEST_ASSERT_MSG_EQ_TOL(
      rhpman.CalculateProfile(),
      0,
      0.00001,
      "non replicating nodes will have a profile value of 0 if it has nothing in the table");
}

void ProfileIfNonReplicatingNodeKnowsOtherNodes::DoRun(void) {
  RhpmanApp rhpman;
  rhpman.m_role = RhpmanApp::Role::NON_REPLICATING;
  rhpman.m_replicating_nodes.insert(100);

  NS_TEST_ASSERT_MSG_EQ_TOL(
      rhpman.CalculateProfile(),
      0.5,
      0.00001,
      "non replicating nodes will have a weighted profile");
}

void ProfileIfNonReplicatingNodeKnowsOtherNodesDifferentWeight::DoRun(void) {
  RhpmanApp rhpman;
  rhpman.m_role = RhpmanApp::Role::NON_REPLICATING;
  rhpman.m_replicating_nodes.insert(100);

  rhpman.m_wcol = 1;
  rhpman.m_wcdc = 0;

  NS_TEST_ASSERT_MSG_EQ_TOL(
      rhpman.CalculateProfile(),
      1,
      0.00001,
      "non replicating nodes will have a weighted profile");

  RhpmanApp rhpman2;
  rhpman2.m_role = RhpmanApp::Role::NON_REPLICATING;
  rhpman2.m_replicating_nodes.insert(100);

  rhpman2.m_wcol = 0;
  rhpman2.m_wcdc = 1;

  NS_TEST_ASSERT_MSG_EQ_TOL(
      rhpman2.CalculateProfile(),
      0,
      0.00001,
      "non replicating nodes will have a weighted profile");
}

void WeightedStorageSpaceEmpty::DoRun(void) {
  RhpmanApp rhpman;
  rhpman.m_ws = 1;
  rhpman.m_storageSpace = 10;
  rhpman.m_storage.Init(10);

  NS_TEST_ASSERT_MSG_EQ_TOL(
      rhpman.GetWeightedStorageSpace(),
      1,
      0.00001,
      "Node with nothing stored will have a value of 100%");
}

void WeightedStorageSpaceFull::DoRun(void) {
  RhpmanApp rhpman;
  rhpman.m_ws = 1;
  rhpman.m_storageSpace = 2;
  rhpman.m_storage.Init(2);

  rhpman.m_storage.StoreItem(std::make_shared<DataItem>(1, 50, "1234567890"));
  rhpman.m_storage.StoreItem(std::make_shared<DataItem>(2, 60, "0987654321"));

  NS_TEST_ASSERT_MSG_EQ_TOL(
      rhpman.GetWeightedStorageSpace(),
      0,
      0.00001,
      "Node with nothing stored will have a value of 0%");
}

void WeightedStorageSpaceHalf::DoRun(void) {
  RhpmanApp rhpman;
  rhpman.m_ws = 1;
  rhpman.m_storageSpace = 2;
  rhpman.m_storage.Init(2);

  rhpman.m_storage.StoreItem(std::make_shared<DataItem>(1, 50, "1234567890"));

  NS_TEST_ASSERT_MSG_EQ_TOL(
      rhpman.GetWeightedStorageSpace(),
      0.5,
      0.00001,
      "Node with nothing stored will have a value of 50%");
}

void WeightedStorageSpaceHalfSmallWeight::DoRun(void) {
  RhpmanApp rhpman;
  rhpman.m_ws = 0.5;
  rhpman.m_storageSpace = 2;
  rhpman.m_storage.Init(2);

  rhpman.m_storage.StoreItem(std::make_shared<DataItem>(1, 50, "1234567890"));

  NS_TEST_ASSERT_MSG_EQ_TOL(
      rhpman.GetWeightedStorageSpace(),
      0.25,
      0.00001,
      "Node with nothing stored will have a value of 25%");
}

void SuccessLookupNullCallback::DoRun(void) {
  RhpmanApp rhpman;
  rhpman.m_success = MakeNullCallback<void, std::shared_ptr<DataItem> >();

  rhpman.SuccessfulLookup(std::make_shared<DataItem>(1, 50, "1234567890"));

  NS_TEST_ASSERT_MSG_EQ(true, true, "nothing crashed");
}

bool successRan = false;
std::shared_ptr<DataItem> successItem;
void successCB(std::shared_ptr<DataItem> data) {
  // NS_TEST_ASSERT_MSG_EQ(data, successItem, "callback item matches");
  successRan = true;
}
void SuccessLookupNonNullCallback::DoRun(void) {
  RhpmanApp rhpman;

  successItem = std::make_shared<DataItem>(1, 50, "1234567890");

  rhpman.m_success = MakeCallback(&successCB);
  rhpman.SuccessfulLookup(successItem);

  NS_TEST_ASSERT_MSG_EQ(successRan, true, "success callback was not actually called");
}

void FailedLookupNullCallback::DoRun(void) {
  RhpmanApp rhpman;
  rhpman.m_failed = MakeNullCallback<void, uint64_t>();

  rhpman.FailedLookup(10000);

  NS_TEST_ASSERT_MSG_EQ(true, true, "nothing crashed");
}

bool failedRan = false;
void failedCB(uint64_t dataID) {
  //   NS_TEST_ASSERT_MSG_EQ(dataID, 100, "callback item matches");
  failedRan = true;
}

void FailedLookupNonNullCallback::DoRun(void) {
  RhpmanApp rhpman;

  rhpman.m_failed = MakeCallback(&failedCB);
  rhpman.FailedLookup(100);

  NS_TEST_ASSERT_MSG_EQ(failedRan, true, "failure callback was not actually called");
}

void GenerateIdTest::DoRun(void) {
  for (uint64_t i = 1; i < 100; i++) {
    NS_TEST_ASSERT_MSG_EQ(
        RhpmanApp::GenerateMessageID(),
        i,
        "generateID should be mono atomicityy increasing");
  }
}
