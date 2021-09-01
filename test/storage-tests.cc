

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
StoragePercentUsedEmpty::StoragePercentUsedEmpty() : TestCase("Storage space percent used Empty") {}
StoragePercentUsedHalf::StoragePercentUsedHalf() : TestCase("Storage space percent used Half") {}
StoragePercentUsedMost::StoragePercentUsedMost() : TestCase("Storage space percent used Most") {}
StoragePercentUsedFull::StoragePercentUsedFull() : TestCase("Storage space percent used Full") {}
StoragePercentFreeEmpty::StoragePercentFreeEmpty() : TestCase("Storage space percent free Empty") {}
StoragePercentFreeHalf::StoragePercentFreeHalf() : TestCase("Storage space percent free Half") {}
StoragePercentFreeMost::StoragePercentFreeMost() : TestCase("Storage space percent free Most") {}
StoragePercentFreeFull::StoragePercentFreeFull() : TestCase("Storage space percent free Full") {}

void DefaultStorage::DoRun(void) {
  Storage s;
  auto data = std::make_shared<DataItem>(1, 50, "1234567890");

  // A wide variety of test macros are available in src/core/test.h

  NS_TEST_ASSERT_MSG_EQ(s.Count(), 0, "should have no stored items");
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
  NS_TEST_ASSERT_MSG_EQ(s.Count(), 0, "should have no stored items");
  NS_TEST_ASSERT_MSG_EQ(s.StoreItem(data), true, "Can store an item when there is space");
  NS_TEST_ASSERT_MSG_EQ(s.GetFreeSpace(), 0, "should have no free space after it is added");
  NS_TEST_ASSERT_MSG_EQ(s.Count(), 1, "should have one stored items");

  NS_TEST_ASSERT_MSG_EQ(s.StoreItem(data2), false, "Can not store an item when there is no space");

  NS_TEST_ASSERT_MSG_EQ(s.HasItem(1), true, "will have the first item");
  NS_TEST_ASSERT_MSG_EQ(s.HasItem(2), false, "will not have the second item");

  NS_TEST_ASSERT_MSG_EQ(s.GetItem(1), data, "will have the first item");
  NS_TEST_ASSERT_MSG_EQ(
      s.GetItem(2),
      std::shared_ptr<DataItem>(nullptr),
      "will not have the second item");

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
  NS_TEST_ASSERT_MSG_EQ(s.Count(), 0, "should have no stored items");

  NS_TEST_ASSERT_MSG_EQ(
      s.GetItem(1),
      std::shared_ptr<DataItem>(nullptr),
      "will not have the second item");

  NS_TEST_ASSERT_MSG_EQ(s.GetAll().size(), 0, "will have no items after it was deleted");
}

void RemoveNonExistantItem::DoRun(void) {
  Storage s(1);

  NS_TEST_ASSERT_MSG_EQ(s.RemoveItem(1), false, "cant remove item that is not stord");
  NS_TEST_ASSERT_MSG_EQ(s.GetFreeSpace(), 1, "should now have space for anothr item");
  NS_TEST_ASSERT_MSG_EQ(s.Count(), 0, "should have no stored items");

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

void StoragePercentUsedEmpty::DoRun(void) {
  Storage s(4);
  NS_TEST_ASSERT_MSG_EQ_TOL(
      s.PercentUsed(),
      0.00,
      0.00001,
      "storage percent used should be 0% when empty");
}
void StoragePercentUsedHalf::DoRun(void) {
  Storage s(4);

  auto data1 = std::make_shared<DataItem>(1, 40, "1234567890");
  auto data2 = std::make_shared<DataItem>(2, 50, "0987654321");

  s.StoreItem(data1);
  s.StoreItem(data2);

  NS_TEST_ASSERT_MSG_EQ_TOL(
      s.PercentUsed(),
      0.50,
      0.00001,
      "storage percent used should be 50% when half full");
}
void StoragePercentUsedMost::DoRun(void) {
  Storage s(4);

  auto data1 = std::make_shared<DataItem>(1, 40, "1234567890");
  auto data2 = std::make_shared<DataItem>(2, 50, "0987654321");
  auto data3 = std::make_shared<DataItem>(3, 60, "1029384756");

  s.StoreItem(data1);
  s.StoreItem(data2);
  s.StoreItem(data3);

  NS_TEST_ASSERT_MSG_EQ_TOL(
      s.PercentUsed(),
      0.75,
      0.00001,
      "storage percent used should be 75% when 3/4 full");
}
void StoragePercentUsedFull::DoRun(void) {
  Storage s(4);

  auto data1 = std::make_shared<DataItem>(1, 40, "1234567890");
  auto data2 = std::make_shared<DataItem>(2, 50, "0987654321");
  auto data3 = std::make_shared<DataItem>(3, 60, "1029384756");
  auto data4 = std::make_shared<DataItem>(4, 70, "0192837465");

  s.StoreItem(data1);
  s.StoreItem(data2);
  s.StoreItem(data3);
  s.StoreItem(data4);

  NS_TEST_ASSERT_MSG_EQ_TOL(
      s.PercentUsed(),
      1.00,
      0.00001,
      "storage percent used should be 100% when full");
}
void StoragePercentFreeEmpty::DoRun(void) {
  Storage s(4);

  NS_TEST_ASSERT_MSG_EQ_TOL(
      s.PercentFree(),
      1.00,
      0.00001,
      "storage percent free should be 100% when empty");
}
void StoragePercentFreeHalf::DoRun(void) {
  Storage s(4);

  auto data1 = std::make_shared<DataItem>(1, 40, "1234567890");
  auto data2 = std::make_shared<DataItem>(2, 50, "0987654321");

  s.StoreItem(data1);
  s.StoreItem(data2);

  NS_TEST_ASSERT_MSG_EQ_TOL(
      s.PercentFree(),
      0.50,
      0.00001,
      "storage percent free should be 50% when half full");
}
void StoragePercentFreeMost::DoRun(void) {
  Storage s(4);

  auto data1 = std::make_shared<DataItem>(1, 40, "1234567890");
  auto data2 = std::make_shared<DataItem>(2, 50, "0987654321");
  auto data3 = std::make_shared<DataItem>(3, 60, "1029384756");

  s.StoreItem(data1);
  s.StoreItem(data2);
  s.StoreItem(data3);

  NS_TEST_ASSERT_MSG_EQ_TOL(
      s.PercentFree(),
      0.25,
      0.00001,
      "storage percent free should be 25% when 3/4 full");
}
void StoragePercentFreeFull::DoRun(void) {
  Storage s(4);

  auto data1 = std::make_shared<DataItem>(1, 40, "1234567890");
  auto data2 = std::make_shared<DataItem>(2, 50, "0987654321");
  auto data3 = std::make_shared<DataItem>(3, 60, "1029384756");
  auto data4 = std::make_shared<DataItem>(4, 70, "0192837465");

  s.StoreItem(data1);
  s.StoreItem(data2);
  s.StoreItem(data3);
  s.StoreItem(data4);

  NS_TEST_ASSERT_MSG_EQ_TOL(
      s.PercentFree(),
      0.00,
      0.00001,
      "storage percent free should be 0% when storage is full");
}
