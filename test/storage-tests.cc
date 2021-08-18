

#include "storage-tests.h"
#include <memory>

#include "../model/dataItem.h"
#include "../model/storage.h"

using namespace ns3;
using namespace rhpman;

// Add some help text to this case to describe what it is intended to test
DefaultStorage::DefaultStorage() : TestCase("default storage object") {}
StorageCapacityOne::StorageCapacityOne() : TestCase("storage capacity of one data item") {}
StorageCapacityChange::StorageCapacityChange()
    : TestCase("changing the storage capacity after creation") {}
RemoveStoredItem::RemoveStoredItem() : TestCase("removing an item from the storage object") {}
RemoveNonExistantItem::RemoveNonExistantItem()
    : TestCase("removing an item from the storage object that is not stored") {}
ClearStorage::ClearStorage() : TestCase("clear all stored items") {}

void DefaultStorage::DoRun(void) {
  Storage s;
  auto data = std::make_shared<DataItem>(1, 50, "1234567890");

  // A wide variety of test macros are available in src/core/test.h

  NS_TEST_ASSERT_MSG_EQ(s.GetFreeSpace(), 0, "default storage constructor has free space");
  NS_TEST_ASSERT_MSG_EQ(s.StoreItem(data), false, "Can not store an item when there is no space");

  // Use this one for floating point comparisons
  NS_TEST_ASSERT_MSG_EQ(s.GetAll().size(), 0, "Default storage will have no items");
}

void StorageCapacityOne::DoRun(void) {
  Storage s(1);
  auto data = std::make_shared<DataItem>(1, 50, "1234567890");
  auto data2 = std::make_shared<DataItem>(2, 60, "0987654321");

  // A wide variety of test macros are available in src/core/test.h

  NS_TEST_ASSERT_MSG_EQ(s.GetFreeSpace(), 1, "should have one free space before item gets added");
  NS_TEST_ASSERT_MSG_EQ(s.StoreItem(data), true, "Can store an item when there is space");
  NS_TEST_ASSERT_MSG_EQ(s.GetFreeSpace(), 0, "should have no free space after it is added");
  NS_TEST_ASSERT_MSG_EQ(s.StoreItem(data2), false, "Can not store an item when there is no space");
  NS_TEST_ASSERT_MSG_EQ(s.GetFreeSpace(), 0, "should have no free space after it is added");

  NS_TEST_ASSERT_MSG_EQ(s.HasItem(1), true, "will have the first item");
  NS_TEST_ASSERT_MSG_EQ(s.HasItem(2), false, "will not have the second item");

  NS_TEST_ASSERT_MSG_EQ(s.GetItem(1), data, "will have the first item");
  NS_TEST_ASSERT_MSG_EQ(
      s.GetItem(2),
      std::shared_ptr<DataItem>(nullptr),
      "will not have the second item");

  // Use this one for floating point comparisons
  NS_TEST_ASSERT_MSG_EQ(
      s.GetAll()[0]->getID(),
      data->getID(),
      "Id should match for the first item");

  NS_TEST_ASSERT_MSG_EQ(s.GetAll().size(), 1, "Default storage will have only one item");
}

void StorageCapacityChange::DoRun(void) {
  Storage s(100000);
  s.Init(1);
  auto data = std::make_shared<DataItem>(1, 50, "1234567890");
  auto data2 = std::make_shared<DataItem>(2, 60, "0987654321");

  // A wide variety of test macros are available in src/core/test.h

  NS_TEST_ASSERT_MSG_EQ(s.GetFreeSpace(), 1, "should have one free space before item gets added");
  NS_TEST_ASSERT_MSG_EQ(s.StoreItem(data), true, "Can store an item when there is space");
  NS_TEST_ASSERT_MSG_EQ(s.GetFreeSpace(), 0, "should have no free space after it is added");
  NS_TEST_ASSERT_MSG_EQ(s.StoreItem(data2), false, "Can not store an item when there is no space");

  NS_TEST_ASSERT_MSG_EQ(s.HasItem(1), true, "will have the first item");
  NS_TEST_ASSERT_MSG_EQ(s.HasItem(2), false, "will not have the second item");

  NS_TEST_ASSERT_MSG_EQ(s.GetItem(1), data, "will have the first item");
  NS_TEST_ASSERT_MSG_EQ(
      s.GetItem(2),
      std::shared_ptr<DataItem>(nullptr),
      "will not have the second item");

  // Use this one for floating point comparisons
  NS_TEST_ASSERT_MSG_EQ(s.GetAll().size(), 1, "Default storage will have only one item");
}

void RemoveStoredItem::DoRun(void) {
  Storage s(1);
  auto data = std::make_shared<DataItem>(1, 50, "1234567890");

  NS_TEST_ASSERT_MSG_EQ(s.GetFreeSpace(), 1, "should have one free space before item gets added");
  NS_TEST_ASSERT_MSG_EQ(s.StoreItem(data), true, "Can store an item when there is space");
  NS_TEST_ASSERT_MSG_EQ(s.GetFreeSpace(), 0, "should have no free space after it is added");

  NS_TEST_ASSERT_MSG_EQ(s.RemoveItem(1), true, "should be able to remove the item");
  NS_TEST_ASSERT_MSG_EQ(s.GetFreeSpace(), 1, "should now have space for anothr item");

  NS_TEST_ASSERT_MSG_EQ(
      s.GetItem(1),
      std::shared_ptr<DataItem>(nullptr),
      "will not have the second item");

  // Use this one for floating point comparisons
  NS_TEST_ASSERT_MSG_EQ(s.GetAll().size(), 0, "will have no items after it was deleted");
}

void RemoveNonExistantItem::DoRun(void) {
  Storage s(1);

  NS_TEST_ASSERT_MSG_EQ(s.RemoveItem(1), false, "cant remove item that is not stord");
  NS_TEST_ASSERT_MSG_EQ(s.GetFreeSpace(), 1, "should now have space for anothr item");

  NS_TEST_ASSERT_MSG_EQ(
      s.GetItem(1),
      std::shared_ptr<DataItem>(nullptr),
      "will not have the second item");

  // Use this one for floating point comparisons
  NS_TEST_ASSERT_MSG_EQ(s.GetAll().size(), 0, "will have no items after it was deleted");
}

void ClearStorage::DoRun(void) {
  Storage s(1);
  auto data = std::make_shared<DataItem>(1, 50, "1234567890");
  auto data2 = std::make_shared<DataItem>(2, 60, "0987654321");

  // A wide variety of test macros are available in src/core/test.h

  NS_TEST_ASSERT_MSG_EQ(s.GetFreeSpace(), 1, "should have one free space before item gets added");
  NS_TEST_ASSERT_MSG_EQ(s.StoreItem(data), true, "Can store an item when there is space");
  NS_TEST_ASSERT_MSG_EQ(s.GetFreeSpace(), 0, "should have no free space after it is added");

  s.ClearStorage();

  NS_TEST_ASSERT_MSG_EQ(
      s.GetItem(1),
      std::shared_ptr<DataItem>(nullptr),
      "will not have the first item");
  NS_TEST_ASSERT_MSG_EQ(s.GetFreeSpace(), 1, "should have one free space before item gets added");
  NS_TEST_ASSERT_MSG_EQ(s.StoreItem(data2), true, "can store after clearing storage");

  NS_TEST_ASSERT_MSG_EQ(s.HasItem(1), false, "will not have the first item");
  NS_TEST_ASSERT_MSG_EQ(s.HasItem(2), true, "will have the second item");

  NS_TEST_ASSERT_MSG_EQ(
      s.GetItem(1),
      std::shared_ptr<DataItem>(nullptr),
      "will not have the first item");
  NS_TEST_ASSERT_MSG_EQ(s.GetItem(2), data2, "will have the second item");

  // Use this one for floating point comparisons
  NS_TEST_ASSERT_MSG_EQ(s.GetAll().size(), 1, "Default storage will have only one item");
}
