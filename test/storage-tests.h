

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

class StoragePercentUsedEmpty : public TestCase {
 public:
  StoragePercentUsedEmpty();

 private:
  virtual void DoRun(void);
};

class StoragePercentUsedHalf : public TestCase {
 public:
  StoragePercentUsedHalf();

 private:
  virtual void DoRun(void);
};

class StoragePercentUsedMost : public TestCase {
 public:
  StoragePercentUsedMost();

 private:
  virtual void DoRun(void);
};

class StoragePercentUsedFull : public TestCase {
 public:
  StoragePercentUsedFull();

 private:
  virtual void DoRun(void);
};

class StoragePercentFreeEmpty : public TestCase {
 public:
  StoragePercentFreeEmpty();

 private:
  virtual void DoRun(void);
};

class StoragePercentFreeHalf : public TestCase {
 public:
  StoragePercentFreeHalf();

 private:
  virtual void DoRun(void);
};

class StoragePercentFreeMost : public TestCase {
 public:
  StoragePercentFreeMost();

 private:
  virtual void DoRun(void);
};

class StoragePercentFreeFull : public TestCase {
 public:
  StoragePercentFreeFull();

 private:
  virtual void DoRun(void);
};

#endif
