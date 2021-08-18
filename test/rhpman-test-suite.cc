/* -*- Mode:C++; c-file-style:"gnu"; indent-tabs-mode:nil; -*- */

// Include a header file from your module to test.
#include "ns3/rhpman.h"

// An essential include is test.h
#include "ns3/test.h"

#include "dataItem-tests.h"
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
  AddTestCase(new GetNeighboursEmpty, TestCase::QUICK);
  AddTestCase(new GetNeighborsDSDVFilterLocal, TestCase::QUICK);
  AddTestCase(new GetNeighborsDSDVFilter2Hops, TestCase::QUICK);
  AddTestCase(new GetNeighborsDSDVFilter0Hops, TestCase::QUICK);

  AddTestCase(new GetNeighborsAODVFilterLocal, TestCase::QUICK);
  AddTestCase(new GetNeighborsAODVFilterUpOnly, TestCase::QUICK);
  AddTestCase(new GetNeighborsAODVFilter3Hops, TestCase::QUICK);
  AddTestCase(new GetNeighborsAODVFilter2Hops, TestCase::QUICK);
}

// Do not forget to allocate an instance of this TestSuite
static RhpmanTestSuite rhpmanTestSuite;
