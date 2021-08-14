

#ifndef __DATA_ITEM_TEST_H
#define __DATA_ITEM_TEST_H

// An essential include is test.h
#include "ns3/test.h"

using namespace ns3;

// This will test the behaviour of the storage object with no constructors
class DataItemDefault : public TestCase {
 public:
  DataItemDefault();

 private:
  virtual void DoRun(void);
};

class DataItemNoID : public TestCase {
 public:
  DataItemNoID();

 private:
  virtual void DoRun(void);
};

class DataItemString : public TestCase {
 public:
  DataItemString();

 private:
  virtual void DoRun(void);
};

#endif
