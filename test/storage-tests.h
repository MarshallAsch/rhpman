

#ifndef __STORAGE_TEST_H
#define __STORAGE_TEST_H

// An essential include is test.h
#include "ns3/test.h"

using namespace ns3;

// This will test the behaviour of the storage object with no constructors
class DefaultStorage : public TestCase {
 public:
  DefaultStorage();

 private:
  virtual void DoRun(void);
};

class StorageCapacityOne : public TestCase {
 public:
  StorageCapacityOne();

 private:
  virtual void DoRun(void);
};

class StorageCapacityChange : public TestCase {
 public:
  StorageCapacityChange();

 private:
  virtual void DoRun(void);
};

class RemoveStoredItem : public TestCase {
 public:
  RemoveStoredItem();

 private:
  virtual void DoRun(void);
};

class RemoveNonExistantItem : public TestCase {
 public:
  RemoveNonExistantItem();

 private:
  virtual void DoRun(void);
};

class ClearStorage : public TestCase {
 public:
  ClearStorage();

 private:
  virtual void DoRun(void);
};

#endif
