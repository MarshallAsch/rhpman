#ifndef __RHPMAN_TEST_H
#define __RHPMAN_TEST_H

// An essential include is test.h
#include "ns3/test.h"

using namespace ns3;

// This will test the behaviour of the table to check that the change degree does not crash
class InitalRoleNonReplicating : public TestCase {
 public:
  InitalRoleNonReplicating();

 private:
  virtual void DoRun(void);
};

class ColocationIfReplicating : public TestCase {
 public:
  ColocationIfReplicating();

 private:
  virtual void DoRun(void);
};

class ColocationIfNonReplicatingNoKnownReplicators : public TestCase {
 public:
  ColocationIfNonReplicatingNoKnownReplicators();

 private:
  virtual void DoRun(void);
};

class ColocationIfNonReplicatingOneKnownReplicators : public TestCase {
 public:
  ColocationIfNonReplicatingOneKnownReplicators();

 private:
  virtual void DoRun(void);
};

class ColocationIfNonReplicatingMultipleKnownReplicators : public TestCase {
 public:
  ColocationIfNonReplicatingMultipleKnownReplicators();

 private:
  virtual void DoRun(void);
};

class InitalChangeDegree : public TestCase {
 public:
  InitalChangeDegree();

 private:
  virtual void DoRun(void);
};

class ProfileIfReplicatingNode : public TestCase {
 public:
  ProfileIfReplicatingNode();

 private:
  virtual void DoRun(void);
};

class ProfileIfNonReplicatingNodeEmptyTable : public TestCase {
 public:
  ProfileIfNonReplicatingNodeEmptyTable();

 private:
  virtual void DoRun(void);
};

class ProfileIfNonReplicatingNodeKnowsOtherNodes : public TestCase {
 public:
  ProfileIfNonReplicatingNodeKnowsOtherNodes();

 private:
  virtual void DoRun(void);
};

class ProfileIfNonReplicatingNodeKnowsOtherNodesDifferentWeight : public TestCase {
 public:
  ProfileIfNonReplicatingNodeKnowsOtherNodesDifferentWeight();

 private:
  virtual void DoRun(void);
};

class WeightedStorageSpaceEmpty : public TestCase {
 public:
  WeightedStorageSpaceEmpty();

 private:
  virtual void DoRun(void);
};

class WeightedStorageSpaceFull : public TestCase {
 public:
  WeightedStorageSpaceFull();

 private:
  virtual void DoRun(void);
};

class WeightedStorageSpaceHalf : public TestCase {
 public:
  WeightedStorageSpaceHalf();

 private:
  virtual void DoRun(void);
};

class WeightedStorageSpaceHalfSmallWeight : public TestCase {
 public:
  WeightedStorageSpaceHalfSmallWeight();

 private:
  virtual void DoRun(void);
};

class SuccessLookupNullCallback : public TestCase {
 public:
  SuccessLookupNullCallback();

 private:
  virtual void DoRun(void);
};

class SuccessLookupNonNullCallback : public TestCase {
 public:
  SuccessLookupNonNullCallback();

 private:
  virtual void DoRun(void);
};

class FailedLookupNullCallback : public TestCase {
 public:
  FailedLookupNullCallback();

 private:
  virtual void DoRun(void);
};

class FailedLookupNonNullCallback : public TestCase {
 public:
  FailedLookupNonNullCallback();

 private:
  virtual void DoRun(void);
};

class GenerateIdTest : public TestCase {
 public:
  GenerateIdTest();

 private:
  virtual void DoRun(void);
};

class FilterAddressSingleNoAddresses : public TestCase {
 public:
  FilterAddressSingleNoAddresses();

 private:
  virtual void DoRun(void);
};

class FilterAddressSingleNotInSet : public TestCase {
 public:
  FilterAddressSingleNotInSet();

 private:
  virtual void DoRun(void);
};

class FilterAddressSingleInSet : public TestCase {
 public:
  FilterAddressSingleInSet();

 private:
  virtual void DoRun(void);
};

class FilterAddressMultipleNoAddressesNoExclude : public TestCase {
 public:
  FilterAddressMultipleNoAddressesNoExclude();

 private:
  virtual void DoRun(void);
};

class FilterAddressMultipleNoAddressesExclude : public TestCase {
 public:
  FilterAddressMultipleNoAddressesExclude();

 private:
  virtual void DoRun(void);
};

class FilterAddressMultipleAddressesNoExclude : public TestCase {
 public:
  FilterAddressMultipleAddressesNoExclude();

 private:
  virtual void DoRun(void);
};

class FilterAddressMultipleAddressesSingleExclude : public TestCase {
 public:
  FilterAddressMultipleAddressesSingleExclude();

 private:
  virtual void DoRun(void);
};

class FilterAddressMultipleAddressesSingleExcludeNotInSet : public TestCase {
 public:
  FilterAddressMultipleAddressesSingleExcludeNotInSet();

 private:
  virtual void DoRun(void);
};

class FilterAddressMultipleAddressesSingleExcludeInSetMix : public TestCase {
 public:
  FilterAddressMultipleAddressesSingleExcludeInSetMix();

 private:
  virtual void DoRun(void);
};

class RegisterSuccessCallback : public TestCase {
 public:
  RegisterSuccessCallback();

 private:
  virtual void DoRun(void);
};

class RegisterSuccessCallbackNull : public TestCase {
 public:
  RegisterSuccessCallbackNull();

 private:
  virtual void DoRun(void);
};

class RegisterFailureCallback : public TestCase {
 public:
  RegisterFailureCallback();

 private:
  virtual void DoRun(void);
};

class RegisterFailureCallbackNull : public TestCase {
 public:
  RegisterFailureCallbackNull();

 private:
  virtual void DoRun(void);
};

class GetFreeSpaceEmpty : public TestCase {
 public:
  GetFreeSpaceEmpty();

 private:
  virtual void DoRun(void);
};

class GetFreeSpaceFull : public TestCase {
 public:
  GetFreeSpaceFull();

 private:
  virtual void DoRun(void);
};

class GetFreeSpaceHalf : public TestCase {
 public:
  GetFreeSpaceHalf();

 private:
  virtual void DoRun(void);
};

#endif
