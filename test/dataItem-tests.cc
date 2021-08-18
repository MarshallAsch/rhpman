

#include <cstddef>

#include "dataItem-tests.h"

#include "../model/dataItem.h"

using namespace ns3;
using namespace rhpman;

// Add some help text to this case to describe what it is intended to test
DataItemDefault::DataItemDefault() : TestCase("data item with default constructor") {}
DataItemNoID::DataItemNoID() : TestCase("data item construcor without the id field") {}
DataItemString::DataItemString() : TestCase("data item constructor with the string payload") {}

void DataItemDefault::DoRun(void) {
  DataItem data;

  NS_TEST_ASSERT_MSG_EQ(data.getID(), 0, "should have default id of 0");
  NS_TEST_ASSERT_MSG_EQ(data.getSize(), 0, "should have default size of 0");
  NS_TEST_ASSERT_MSG_EQ(data.getOwner(), 0, "should have default owner of 0");
  NS_TEST_ASSERT_MSG_EQ(data.getPayload(), 0, "should not have any data by default");
}

void DataItemNoID::DoRun(void) {
  uint32_t size = 10;
  uint32_t owner = 100;
  uint8_t* payload = new uint8_t[size];

  DataItem data(size, owner, payload);
  DataItem data2(size, owner, payload);

  NS_TEST_ASSERT_MSG_EQ(data.getID(), 1, "should have default id of 1");
  NS_TEST_ASSERT_MSG_EQ(data2.getID(), 2, "should have the next int id");

  NS_TEST_ASSERT_MSG_EQ(data.getSize(), size, "should have default size of 0");
  NS_TEST_ASSERT_MSG_EQ(data.getOwner(), owner, "should have default owner of 0");
  NS_TEST_ASSERT_MSG_NE(data.getPayload(), payload, "should not be the same object");
  NS_TEST_ASSERT_MSG_NE(data.getPayload(), 0, "should not be null");

  delete[] payload;
}

void DataItemString::DoRun(void) {
  std::string payload = "this is a test payload";
  uint32_t size = 22;
  uint32_t owner = 100;
  DataItem data(12, owner, payload);

  NS_TEST_ASSERT_MSG_EQ(data.getID(), 12, "should have default id of 1");
  NS_TEST_ASSERT_MSG_EQ(data.getSize(), size, "should have default size of 0");
  NS_TEST_ASSERT_MSG_EQ(data.getOwner(), owner, "should have default owner of 0");

  const uint8_t* res = data.getPayload();
  NS_TEST_ASSERT_MSG_NE(res, 0, "should not be null");

  NS_TEST_ASSERT_MSG_EQ(res[0], payload[0], "bytes should match");
  NS_TEST_ASSERT_MSG_EQ(res[1], payload[1], "bytes should match");
  NS_TEST_ASSERT_MSG_EQ(res[2], payload[2], "bytes should match");
  NS_TEST_ASSERT_MSG_EQ(res[3], payload[3], "bytes should match");
  NS_TEST_ASSERT_MSG_EQ(res[4], payload[4], "bytes should match");
  NS_TEST_ASSERT_MSG_EQ(res[5], payload[5], "bytes should match");
}
