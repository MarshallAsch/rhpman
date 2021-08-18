#ifndef __TABLE_TEST_H
#define __TABLE_TEST_H

// An essential include is test.h
#include "ns3/test.h"

using namespace ns3;

// This will test the behaviour of the table to check that the change degree does not crash
class DefaultTableChangeDegree : public TestCase {
 public:
  DefaultTableChangeDegree();

 private:
  virtual void DoRun(void);
};

// This will test the behaviour of an empty table to check that the change degree does not crash
class EmptyTableChangeDegree : public TestCase {
 public:
  EmptyTableChangeDegree();

 private:
  virtual void DoRun(void);
};

// This will test the behaviour of getting the neighbors with an empty routing table string
class GetNeighboursEmpty : public TestCase {
 public:
  GetNeighboursEmpty();

 private:
  virtual void DoRun(void);
};

// This will test the behaviour of getting the neighbors with only localhost nodes
class GetNeighborsDSDVFilterLocal : public TestCase {
 public:
  GetNeighborsDSDVFilterLocal();

 private:
  virtual void DoRun(void);
};

// This will test the behaviour of getting the neighbors with 2 hops
class GetNeighborsDSDVFilter2Hops : public TestCase {
 public:
  GetNeighborsDSDVFilter2Hops();

 private:
  virtual void DoRun(void);
};

// This will test the behaviour of getting the neighbors with 0 hops
class GetNeighborsDSDVFilter0Hops : public TestCase {
 public:
  GetNeighborsDSDVFilter0Hops();

 private:
  virtual void DoRun(void);
};

// This will test the behaviour of getting the neighbors with only localhost nodes using AODV
class GetNeighborsAODVFilterLocal : public TestCase {
 public:
  GetNeighborsAODVFilterLocal();

 private:
  virtual void DoRun(void);
};

// This will test the behaviour of getting the neighbors using AODV to get only the entries that are
// in the UP state
class GetNeighborsAODVFilterUpOnly : public TestCase {
 public:
  GetNeighborsAODVFilterUpOnly();

 private:
  virtual void DoRun(void);
};

// This will test the behaviour of getting the neighbors using AODV in 3 hops
class GetNeighborsAODVFilter3Hops : public TestCase {
 public:
  GetNeighborsAODVFilter3Hops();

 private:
  virtual void DoRun(void);
};

// This will test the behaviour of getting the neighbors using AODV in 2 hops
class GetNeighborsAODVFilter2Hops : public TestCase {
 public:
  GetNeighborsAODVFilter2Hops();

 private:
  virtual void DoRun(void);
};

#endif
