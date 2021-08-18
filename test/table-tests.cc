

#include <cstddef>

#include "table-tests.h"

#include "../model/table.h"

using namespace ns3;
using namespace rhpman;

static std::string tableMix =
    "Node: 138, Time: +60s, Local time: +60s, DSDV Routing table\n"
    "\n"
    "DSDV Routing table\n"
    "Destination		Gateway		Interface		HopCount		SeqNum		LifeTime		SettlingTime\n"
    "10.1.0.133		10.1.0.133		10.1.0.139		         3	         6	+29.970s		+5.000s\n"
    "10.1.0.138		10.1.0.142		10.1.0.139		2         	4         	+29.973s		+5.000s\n"
    "10.1.0.142		10.1.0.142		10.1.0.139		1         	6         	+29.967s		+6.252s\n"
    "10.1.255.255		10.1.255.255		10.1.0.139		0         	8         	-9223371976.855s		"
    "+0.000s\n"
    "127.0.0.1		127.0.0.1		127.0.0.1		0         	0         	-9223371976.855s		+0.000s\n"
    "\n"
    "\n";

static std::string tableMixNodeLeft =
    "Node: 138, Time: +60s, Local time: +60s, DSDV Routing table\n"
    "\n"
    "DSDV Routing table\n"
    "Destination		Gateway		Interface		HopCount		SeqNum		LifeTime		SettlingTime\n"
    "10.1.0.138		10.1.0.142		10.1.0.139		2         	4         	+29.973s		+5.000s\n"
    "10.1.0.142		10.1.0.142		10.1.0.139		1         	6         	+29.967s		+6.252s\n"
    "10.1.255.255		10.1.255.255		10.1.0.139		0         	8         	-9223371976.855s		"
    "+0.000s\n"
    "127.0.0.1		127.0.0.1		127.0.0.1		0         	0         	-9223371976.855s		+0.000s\n"
    "\n"
    "\n";

static std::string tableMixNodeJoined =
    "Node: 138, Time: +60s, Local time: +60s, DSDV Routing table\n"
    "\n"
    "DSDV Routing table\n"
    "Destination		Gateway		Interface		HopCount		SeqNum		LifeTime		SettlingTime\n"
    "10.1.0.133		10.1.0.133		10.1.0.139		         3	         6	+29.970s		+5.000s\n"
    "10.1.0.138		10.1.0.142		10.1.0.139		2         	4         	+29.973s		+5.000s\n"
    "10.1.0.147		10.1.0.147		10.1.0.139		1         	2         	+29.967s		+6.252s\n"
    "10.1.0.142		10.1.0.142		10.1.0.139		1         	6         	+29.967s		+6.252s\n"
    "10.1.255.255		10.1.255.255		10.1.0.139		0         	8         	-9223371976.855s		"
    "+0.000s\n"
    "127.0.0.1		127.0.0.1		127.0.0.1		0         	0         	-9223371976.855s		+0.000s\n"
    "\n"
    "\n";

static std::string tableLong =
    "Node: 137, Time: +60s, Local time: +60s, DSDV Routing table\n"
    "\n"
    "DSDV Routing table\n"
    "Destination		Gateway		Interface		HopCount		SeqNum		LifeTime		SettlingTime\n"
    "10.1.0.1		10.1.0.31		10.1.0.138		         4	         4	+14.949s		+6.252s\n"
    "10.1.0.7		10.1.0.143		10.1.0.138		4         	2         	+29.966s		+5.000s\n"
    "10.1.0.9		10.1.0.140		10.1.0.138		2         	2         	+29.981s		+5.000s\n"
    "10.1.0.17		10.1.0.17		10.1.0.138		1         	8         	+1.654s		+5.000s\n"
    "10.1.0.19		10.1.0.31		10.1.0.138		5         	2         	+14.949s		+5.000s\n"
    "10.1.0.25		10.1.0.142		10.1.0.138		2         	2         	+44.979s		+5.000s\n"
    "10.1.0.28		10.1.0.143		10.1.0.138		2         	4         	+29.966s		+5.000s\n"
    "10.1.0.31		10.1.0.31		10.1.0.138		1         	8         	+14.939s		+5.000s\n"
    "10.1.0.137		10.1.0.143		10.1.0.138		2         	4         	+29.966s		+5.000s\n"
    "10.1.0.139		10.1.0.142		10.1.0.138		2         	4         	+44.973s		+5.000s\n"
    "10.1.0.140		10.1.0.140		10.1.0.138		1         	8         	+1.657s		+5.000s\n"
    "10.1.0.141		10.1.0.141		10.1.0.138		1         	8         	+1.659s		+5.254s\n"
    "10.1.0.142		10.1.0.142		10.1.0.138		1         	4         	+44.973s		+5.000s\n"
    "10.1.0.143		10.1.0.143		10.1.0.138		1         	6         	+29.952s		+5.000s\n"
    "10.1.0.145		10.1.0.143		10.1.0.138		3         	2         	+29.966s		+5.000s\n"
    "10.1.0.147		10.1.0.143		10.1.0.138		3         	2         	+29.966s		+5.000s\n"
    "10.1.0.149		10.1.0.31		10.1.0.138		3         	4         	+14.949s		+5.000s\n"
    "10.1.0.150		10.1.0.143		10.1.0.138		3         	2         	+29.966s		+5.000s\n"
    "10.1.0.151		10.1.0.143		10.1.0.138		4         	2         	+29.966s		+5.000s\n"
    "10.1.0.152		10.1.0.31		10.1.0.138		2         	6         	+14.949s		+5.000s\n"
    "10.1.0.157		10.1.0.31		10.1.0.138		3         	4         	+14.949s		+5.000s\n"
    "10.1.0.158		10.1.0.31		10.1.0.138		2         	4         	+14.949s		+5.000s\n"
    "10.1.0.159		10.1.0.31		10.1.0.138		4         	2         	+14.949s		+5.000s\n"
    "10.1.255.255		10.1.255.255		10.1.0.138		0         	8         	-9223371976.855s		"
    "+0.000s\n"
    "127.0.0.1		127.0.0.1		127.0.0.1		0         	0         	-9223371976.855s		+0.000s\n"
    "\n"
    "\n";

static std::string tableLocalOnly =
    "Node: 1, Time: +0s, Local time: +0s, DSDV Routing table\n"
    "\n"
    "DSDV Routing table\n"
    "Destination		Gateway		Interface		HopCount		SeqNum		LifeTime		SettlingTime\n"
    "10.1.255.255		10.1.255.255		10.1.0.2		         0	         0	-9223372036.855s		"
    "+0.000s\n"
    "127.0.0.1		127.0.0.1		127.0.0.1		0         	0         	-9223372036.855s		+0.000s\n"
    "\n"
    "\n";

static std::string aodvLocalOnly =
    "Node: 0; Time: +0s, Local time: +0s, AODV Routing table\n"
    "\n"
    "AODV Routing table\n"
    "Destination	Gateway		Interface	Flag	Expire		Hops\n"
    "10.1.255.255	10.1.255.255	10.1.0.1	UP	+9223372036.85s	1\n"
    "127.0.0.1	127.0.0.1	127.0.0.1	UP	+9223372036.85s	1\n"
    "\n"
    "\n";

static std::string aodvUpDown =
    "Node: 128; Time: +34.008s, Local time: +34.008s, AODV Routing table\n"
    "\n"
    "AODV Routing table\n"
    "Destination	Gateway		Interface	Flag	Expire		Hops\n"
    "10.1.0.17	10.1.0.131	10.1.0.129	UP	         +3.28s	3\n"
    "10.1.0.131	10.1.0.131	10.1.0.129	UP	         +2.93s	1\n"
    "10.1.0.134	10.1.0.131	10.1.0.129	DOWN	        +14.93s	2\n"
    "10.1.0.135	10.1.0.135	10.1.0.129	DOWN	         +8.10s	1\n"
    "10.1.255.255	10.1.255.255	10.1.0.129	UP	+9223372002.85s	1\n"
    "127.0.0.1	127.0.0.1	127.0.0.1	UP	+9223372002.85s	1\n"
    "\n"
    "\n";

// Add some help text to this case to describe what it is intended to test
DefaultTableChangeDegree::DefaultTableChangeDegree()
    : TestCase("check that the change degree calculation for a default table is 0") {}
EmptyTableChangeDegree::EmptyTableChangeDegree()
    : TestCase("check that the change degree calculation for an empty table is 0") {}
OneTableChangeDegree::OneTableChangeDegree()
    : TestCase("check that the change degree calculation for a single table") {}
SameTableChangeDegree::SameTableChangeDegree()
    : TestCase("check that the change degree calculation for the same table twice table") {}
ChangeDegreeNodeLeaving::ChangeDegreeNodeLeaving()
    : TestCase("check that the change degree calculation for when a node leaves") {}
ChangeDegreeNodeJoining::ChangeDegreeNodeJoining()
    : TestCase("check that the change degree calculation for when a node joins") {}
ChangeDegreeNodeJoiningMultiple::ChangeDegreeNodeJoiningMultiple()
    : TestCase("check that the change degree calculation for when multiple nodes join") {}
ChangeDegreeNodeJoinLeaveIntermediate::ChangeDegreeNodeJoinLeaveIntermediate()
    : TestCase(
          "check that the change degree calculation for when nodes join and leave but starts and "
          "stops in the same state") {}

GetNeighboursEmpty::GetNeighboursEmpty()
    : TestCase(
          "check that getting the neighbors from the routing table string works with an empty "
          "string") {}
GetNeighborsDSDVFilterLocal::GetNeighborsDSDVFilterLocal()
    : TestCase("getting the neighbors should remove all localhost addresses from the list") {}
GetNeighborsDSDVFilter2Hops::GetNeighborsDSDVFilter2Hops()
    : TestCase(
          "getting the neighbors should remove all localhost addresses from the list and more than "
          "2 hops") {}
GetNeighborsDSDVFilter0Hops::GetNeighborsDSDVFilter0Hops()
    : TestCase(
          "getting the neighbors should remove all localhost addresses from the list and more than "
          "0 hops") {}

GetNeighborsAODVFilterLocal::GetNeighborsAODVFilterLocal()
    : TestCase("getting the neighbors should remove all localhost addresses from an AODV table") {}
GetNeighborsAODVFilterUpOnly::GetNeighborsAODVFilterUpOnly()
    : TestCase("AODV only include UP table entries") {}
GetNeighborsAODVFilter3Hops::GetNeighborsAODVFilter3Hops()
    : TestCase("AODV only include nodes within 3 hops") {}
GetNeighborsAODVFilter2Hops::GetNeighborsAODVFilter2Hops()
    : TestCase("AODV only include nodes within 2 hops") {}

void DefaultTableChangeDegree::DoRun(void) {
  Table table;

  NS_TEST_ASSERT_MSG_EQ(
      table.ComputeChangeDegree(),
      0,
      "should be 0 and not a divide by 0 exception");
}

void EmptyTableChangeDegree::DoRun(void) {
  Table table(10, 10);
  NS_TEST_ASSERT_MSG_EQ(
      table.ComputeChangeDegree(),
      0,
      "should be 0 and not a divide by 0 exception");
}

void OneTableChangeDegree::DoRun(void) {
  Table table(2, 10);
  table.UpdateTable(tableMix);

  NS_TEST_ASSERT_MSG_EQ(table.ComputeChangeDegree(), 1, "3 - 0 / 3 == 1");

  Table table2(10, 10);
  table2.UpdateTable(aodvUpDown);

  NS_TEST_ASSERT_MSG_EQ(table2.ComputeChangeDegree(), 1, "2 - 0 / 2 == 1");
}

void SameTableChangeDegree::DoRun(void) {
  Table table(2, 10);
  table.UpdateTable(tableMix);
  table.UpdateTable(tableMix);

  NS_TEST_ASSERT_MSG_EQ(table.ComputeChangeDegree(), 0, "3 - 3 / 3 == 0");

  Table table2(2, 10);
  table2.UpdateTable(aodvUpDown);
  table2.UpdateTable(aodvUpDown);

  NS_TEST_ASSERT_MSG_EQ(table2.ComputeChangeDegree(), 0, "2 - 2 / 2 == 0");
}

void ChangeDegreeNodeLeaving::DoRun(void) {
  Table table(2, 10);
  table.UpdateTable(tableMix);
  table.UpdateTable(tableMixNodeLeft);

  NS_TEST_ASSERT_MSG_EQ_TOL(table.ComputeChangeDegree(), 0.333333, 0.0001, "3 - 2 / 3 == 0");
}

void ChangeDegreeNodeJoining::DoRun(void) {
  Table table(2, 10);
  table.UpdateTable(tableMix);
  table.UpdateTable(tableMixNodeJoined);

  NS_TEST_ASSERT_MSG_EQ_TOL(table.ComputeChangeDegree(), 0.25, 0.0001, "4 - 3 / 4 == 0");
}

void ChangeDegreeNodeJoiningMultiple::DoRun(void) {
  Table table(2, 10);
  table.UpdateTable(tableMixNodeLeft);
  table.UpdateTable(tableMixNodeJoined);

  NS_TEST_ASSERT_MSG_EQ_TOL(table.ComputeChangeDegree(), 0.5, 0.0001, "4 - 2 / 4 == 0");
}

void ChangeDegreeNodeJoinLeaveIntermediate::DoRun(void) {
  Table table(4, 10);
  table.UpdateTable(tableMix);
  table.UpdateTable(tableMixNodeLeft);
  table.UpdateTable(tableMixNodeJoined);
  table.UpdateTable(tableMix);

  NS_TEST_ASSERT_MSG_EQ_TOL(table.ComputeChangeDegree(), 0, 0.0001, "3 - 3 / 3 == 0");
}

void GetNeighboursEmpty::DoRun(void) {
  NS_TEST_ASSERT_MSG_EQ(
      Table::GetNeighbors("", 2).size(),
      0,
      "size of table should be 0 for empty string");
}

void GetNeighborsDSDVFilterLocal::DoRun(void) {
  std::set<uint32_t> table1 = Table::GetNeighbors(tableLocalOnly, 10);
  NS_TEST_ASSERT_MSG_EQ(table1.size(), 0, "localhostEntries should be removed");

  std::set<uint32_t> table2 = Table::GetNeighbors(tableMix, 10);
  NS_TEST_ASSERT_MSG_EQ(table2.size(), 3, "localhostEntries should be removed");

  // 10.1.0.133 // 167837829
  // 10.1.0.138 // 167837834
  // 10.1.0.142 // 167837838

  NS_TEST_ASSERT_MSG_EQ(table2.count(167837829), 1, "non local address should be present");

  NS_TEST_ASSERT_MSG_EQ(table2.count(167837834), 1, "non local address should be present");

  NS_TEST_ASSERT_MSG_EQ(table2.count(167837838), 1, "non local address should be present");
}

void GetNeighborsDSDVFilter2Hops::DoRun(void) {
  std::set<uint32_t> table1 = Table::GetNeighbors(tableMix, 2);
  NS_TEST_ASSERT_MSG_EQ(table1.size(), 2, "localhostEntries should be removed");

  // 10.1.0.133 // 167837829
  // 10.1.0.138 // 167837834
  // 10.1.0.142 // 167837838
  NS_TEST_ASSERT_MSG_EQ(table1.count(167837829), 0, "3 hops should be removed");

  NS_TEST_ASSERT_MSG_EQ(table1.count(167837834), 1, "non local address should be present");

  NS_TEST_ASSERT_MSG_EQ(table1.count(167837838), 1, "non local address should be present");
}

void GetNeighborsDSDVFilter0Hops::DoRun(void) {
  std::set<uint32_t> table1 = Table::GetNeighbors(tableMix, 0);
  NS_TEST_ASSERT_MSG_EQ(table1.size(), 0, "no nodes within 0 hops, local only");

  std::set<uint32_t> table2 = Table::GetNeighbors(tableLong, 0);
  NS_TEST_ASSERT_MSG_EQ(table2.size(), 0, "no nodes within 0 hops, local only");

  std::set<uint32_t> table3 = Table::GetNeighbors(tableMix, 0);
  NS_TEST_ASSERT_MSG_EQ(table3.size(), 0, "no nodes within 0 hops, local only");
}

void GetNeighborsAODVFilterLocal::DoRun(void) {
  std::set<uint32_t> table1 = Table::GetNeighbors(aodvLocalOnly, 10);
  NS_TEST_ASSERT_MSG_EQ(table1.size(), 0, "AODV localhostEntries should be removed");
}

void GetNeighborsAODVFilterUpOnly::DoRun(void) {
  std::set<uint32_t> table1 = Table::GetNeighbors(aodvUpDown, 10);
  NS_TEST_ASSERT_MSG_EQ(table1.size(), 2, "AODV should only include UP entries");
}

void GetNeighborsAODVFilter3Hops::DoRun(void) {
  std::set<uint32_t> table1 = Table::GetNeighbors(aodvUpDown, 3);
  NS_TEST_ASSERT_MSG_EQ(table1.size(), 2, "AODV should only include UP entries");

  // up 3 10.1.0.17     // 167837713
  // up 1 10.1.0.131    // 167837827
  // down 2 10.1.0.134  // 167837830
  // down 1 10.1.0.135  // 167837831
  NS_TEST_ASSERT_MSG_EQ(table1.count(167837713), 1, "AODV should only include UP entries");
  NS_TEST_ASSERT_MSG_EQ(table1.count(167837827), 1, "AODV should only include UP entries");
  NS_TEST_ASSERT_MSG_EQ(table1.count(167837830), 0, "AODV should only include UP entries");
  NS_TEST_ASSERT_MSG_EQ(table1.count(167837831), 0, "AODV should only include UP entries");
}

void GetNeighborsAODVFilter2Hops::DoRun(void) {
  std::set<uint32_t> table1 = Table::GetNeighbors(aodvUpDown, 2);
  NS_TEST_ASSERT_MSG_EQ(table1.size(), 1, "AODV should only include UP entries");

  // up 3 10.1.0.17     // 167837713
  // up 1 10.1.0.131    // 167837827
  // down 2 10.1.0.134  // 167837830
  // down 1 10.1.0.135  // 167837831
  NS_TEST_ASSERT_MSG_EQ(table1.count(167837713), 0, "AODV should only include UP entries");
  NS_TEST_ASSERT_MSG_EQ(table1.count(167837827), 1, "AODV should only include UP entries");
  NS_TEST_ASSERT_MSG_EQ(table1.count(167837830), 0, "AODV should only include UP entries");
  NS_TEST_ASSERT_MSG_EQ(table1.count(167837831), 0, "AODV should only include UP entries");
}
