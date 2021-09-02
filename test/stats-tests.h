#ifndef __RHPMAN_STATS_TEST_H
#define __RHPMAN_STATS_TEST_H

// An essential include is test.h
#include "ns3/test.h"

using namespace ns3;

class StatsTestResetCounters : public TestCase {
 public:
  StatsTestResetCounters();

 private:
  virtual void DoRun(void);
};

class StatsPrintDefaultPrefix : public TestCase {
 public:
  StatsPrintDefaultPrefix();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsPrintWithPrefix : public TestCase {
 public:
  StatsPrintWithPrefix();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};

class TypeStringValidValues : public TestCase {
 public:
  TypeStringValidValues();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};

class InitalSaveValue : public TestCase {
 public:
  InitalSaveValue();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};

class InitalLookupValue : public TestCase {
 public:
  InitalLookupValue();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};

class InitalSuccessValue : public TestCase {
 public:
  InitalSuccessValue();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};

class InitalFailedValue : public TestCase {
 public:
  InitalFailedValue();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};

class InitalLateValue : public TestCase {
 public:
  InitalLateValue();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};

class InitalTotalPendingValue : public TestCase {
 public:
  InitalTotalPendingValue();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};

class InitalTotalSentValue : public TestCase {
 public:
  InitalTotalSentValue();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};

class InitalTotalReceivedValue : public TestCase {
 public:
  InitalTotalReceivedValue();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};

class InitalTotalExpectedReceiveValue : public TestCase {
 public:
  InitalTotalExpectedReceiveValue();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};

class InitalDuplicateValue : public TestCase {
 public:
  InitalDuplicateValue();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};

class InitalStepUpValue : public TestCase {
 public:
  InitalStepUpValue();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};

class InitalStepDownValue : public TestCase {
 public:
  InitalStepDownValue();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};

class InitalCacheHitValue : public TestCase {
 public:
  InitalCacheHitValue();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};

class InitalPowerLossValue : public TestCase {
 public:
  InitalPowerLossValue();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};

class InitalPowerRechargedValue : public TestCase {
 public:
  InitalPowerRechargedValue();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};

class InitalSentTypeValue : public TestCase {
 public:
  InitalSentTypeValue();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};

class InitalReceivedTypeValue : public TestCase {
 public:
  InitalReceivedTypeValue();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};

class InitalExpectedTypeValue : public TestCase {
 public:
  InitalExpectedTypeValue();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};

class StatsIncrementSaveOnlyOnce : public TestCase {
 public:
  StatsIncrementSaveOnlyOnce();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementLookupOnlyOnce : public TestCase {
 public:
  StatsIncrementLookupOnlyOnce();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementSuccessOnlyOnce : public TestCase {
 public:
  StatsIncrementSuccessOnlyOnce();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementFailedOnlyOnce : public TestCase {
 public:
  StatsIncrementFailedOnlyOnce();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementLateOnlyOnce : public TestCase {
 public:
  StatsIncrementLateOnlyOnce();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementCacheHitOnlyOnce : public TestCase {
 public:
  StatsIncrementCacheHitOnlyOnce();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementPowerLossOnlyOnce : public TestCase {
 public:
  StatsIncrementPowerLossOnlyOnce();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementPowerRechargedOnlyOnce : public TestCase {
 public:
  StatsIncrementPowerRechargedOnlyOnce();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementDuplicateMessageOnlyOnce : public TestCase {
 public:
  StatsIncrementDuplicateMessageOnlyOnce();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementElectionStepUpOnlyOnce : public TestCase {
 public:
  StatsIncrementElectionStepUpOnlyOnce();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementElectionStepDownOnlyOnce : public TestCase {
 public:
  StatsIncrementElectionStepDownOnlyOnce();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsAddPendingOnlyOnce : public TestCase {
 public:
  StatsAddPendingOnlyOnce();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementSentUnknownOnlyOnce : public TestCase {
 public:
  StatsIncrementSentUnknownOnlyOnce();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementSentPingOnlyOnce : public TestCase {
 public:
  StatsIncrementSentPingOnlyOnce();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementSentModeChangeOnlyOnce : public TestCase {
 public:
  StatsIncrementSentModeChangeOnlyOnce();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementSentElectionRequestOnlyOnce : public TestCase {
 public:
  StatsIncrementSentElectionRequestOnlyOnce();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementSentStoreOnlyOnce : public TestCase {
 public:
  StatsIncrementSentStoreOnlyOnce();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementSentLookupOnlyOnce : public TestCase {
 public:
  StatsIncrementSentLookupOnlyOnce();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementSentLookupResponseOnlyOnce : public TestCase {
 public:
  StatsIncrementSentLookupResponseOnlyOnce();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementSentTransferOnlyOnce : public TestCase {
 public:
  StatsIncrementSentTransferOnlyOnce();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementSentUnknownMultipleOnlyOnce : public TestCase {
 public:
  StatsIncrementSentUnknownMultipleOnlyOnce();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementSentPingMultipleOnlyOnce : public TestCase {
 public:
  StatsIncrementSentPingMultipleOnlyOnce();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementSentModeChangeMultipleOnlyOnce : public TestCase {
 public:
  StatsIncrementSentModeChangeMultipleOnlyOnce();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementSentElectionRequestMultipleOnlyOnce : public TestCase {
 public:
  StatsIncrementSentElectionRequestMultipleOnlyOnce();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementSentStoreMultipleOnlyOnce : public TestCase {
 public:
  StatsIncrementSentStoreMultipleOnlyOnce();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementSentLookupMultipleOnlyOnce : public TestCase {
 public:
  StatsIncrementSentLookupMultipleOnlyOnce();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementSentLookupResponseMultipleOnlyOnce : public TestCase {
 public:
  StatsIncrementSentLookupResponseMultipleOnlyOnce();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementSentTransferMultipleOnlyOnce : public TestCase {
 public:
  StatsIncrementSentTransferMultipleOnlyOnce();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementReceivedUnknownOnlyOnce : public TestCase {
 public:
  StatsIncrementReceivedUnknownOnlyOnce();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementReceivedPingOnlyOnce : public TestCase {
 public:
  StatsIncrementReceivedPingOnlyOnce();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementReceivedModeChangeOnlyOnce : public TestCase {
 public:
  StatsIncrementReceivedModeChangeOnlyOnce();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementReceivedElectionRequestOnlyOnce : public TestCase {
 public:
  StatsIncrementReceivedElectionRequestOnlyOnce();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementReceivedStoreOnlyOnce : public TestCase {
 public:
  StatsIncrementReceivedStoreOnlyOnce();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementReceivedLookupnOnlyOnce : public TestCase {
 public:
  StatsIncrementReceivedLookupnOnlyOnce();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementReceivedLookupResponseOnlyOnce : public TestCase {
 public:
  StatsIncrementReceivedLookupResponseOnlyOnce();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementReceivedTransferOnlyOnce : public TestCase {
 public:
  StatsIncrementReceivedTransferOnlyOnce();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};

class StatsIncrementSaveMultipleTimes : public TestCase {
 public:
  StatsIncrementSaveMultipleTimes();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementLookupMultipleTimes : public TestCase {
 public:
  StatsIncrementLookupMultipleTimes();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementSuccessMultipleTimes : public TestCase {
 public:
  StatsIncrementSuccessMultipleTimes();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementFailedMultipleTimes : public TestCase {
 public:
  StatsIncrementFailedMultipleTimes();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementLateMultipleTimes : public TestCase {
 public:
  StatsIncrementLateMultipleTimes();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementCacheHitMultipleTimes : public TestCase {
 public:
  StatsIncrementCacheHitMultipleTimes();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementPowerLossMultipleTimes : public TestCase {
 public:
  StatsIncrementPowerLossMultipleTimes();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementPowerRechargedMultipleTimes : public TestCase {
 public:
  StatsIncrementPowerRechargedMultipleTimes();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementDuplicateMessageMultipleTimes : public TestCase {
 public:
  StatsIncrementDuplicateMessageMultipleTimes();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementElectionStepUpMultipleTimes : public TestCase {
 public:
  StatsIncrementElectionStepUpMultipleTimes();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementElectionStepDownMultipleTimes : public TestCase {
 public:
  StatsIncrementElectionStepDownMultipleTimes();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsAddPendingMultipleTimes : public TestCase {
 public:
  StatsAddPendingMultipleTimes();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementSentUnknownMultipleTimes : public TestCase {
 public:
  StatsIncrementSentUnknownMultipleTimes();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementSentPingMultipleTimes : public TestCase {
 public:
  StatsIncrementSentPingMultipleTimes();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementSentModeChangeMultipleTimes : public TestCase {
 public:
  StatsIncrementSentModeChangeMultipleTimes();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementSentElectionRequestMultipleTimes : public TestCase {
 public:
  StatsIncrementSentElectionRequestMultipleTimes();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementSentStoreMultipleTimes : public TestCase {
 public:
  StatsIncrementSentStoreMultipleTimes();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementSentLookupMultipleTimes : public TestCase {
 public:
  StatsIncrementSentLookupMultipleTimes();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementSentLookupResponseMultipleTimes : public TestCase {
 public:
  StatsIncrementSentLookupResponseMultipleTimes();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementSentTransferMultipleTimes : public TestCase {
 public:
  StatsIncrementSentTransferMultipleTimes();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementSentUnknownMultipleMultipleTimes : public TestCase {
 public:
  StatsIncrementSentUnknownMultipleMultipleTimes();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementSentPingMultipleMultipleTimes : public TestCase {
 public:
  StatsIncrementSentPingMultipleMultipleTimes();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementSentModeChangeMultipleMultipleTimes : public TestCase {
 public:
  StatsIncrementSentModeChangeMultipleMultipleTimes();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementSentElectionRequestMultipleMultipleTimes : public TestCase {
 public:
  StatsIncrementSentElectionRequestMultipleMultipleTimes();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementSentStoreMultipleMultipleTimes : public TestCase {
 public:
  StatsIncrementSentStoreMultipleMultipleTimes();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementSentLookupMultipleMultipleTimes : public TestCase {
 public:
  StatsIncrementSentLookupMultipleMultipleTimes();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementSentLookupResponseMultipleMultipleTimes : public TestCase {
 public:
  StatsIncrementSentLookupResponseMultipleMultipleTimes();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementSentTransferMultipleMultipleTimes : public TestCase {
 public:
  StatsIncrementSentTransferMultipleMultipleTimes();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementReceivedUnknownMultipleTimes : public TestCase {
 public:
  StatsIncrementReceivedUnknownMultipleTimes();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementReceivedPingMultipleTimes : public TestCase {
 public:
  StatsIncrementReceivedPingMultipleTimes();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementReceivedModeChangeMultipleTimes : public TestCase {
 public:
  StatsIncrementReceivedModeChangeMultipleTimes();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementReceivedElectionRequestMultipleTimes : public TestCase {
 public:
  StatsIncrementReceivedElectionRequestMultipleTimes();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementReceivedStoreMultipleTimes : public TestCase {
 public:
  StatsIncrementReceivedStoreMultipleTimes();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementReceivedLookupnMultipleTimes : public TestCase {
 public:
  StatsIncrementReceivedLookupnMultipleTimes();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementReceivedLookupResponseMultipleTimes : public TestCase {
 public:
  StatsIncrementReceivedLookupResponseMultipleTimes();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementReceivedTransferMultipleTimes : public TestCase {
 public:
  StatsIncrementReceivedTransferMultipleTimes();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementSaveStaticValues : public TestCase {
 public:
  StatsIncrementSaveStaticValues();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementLookupStaticValues : public TestCase {
 public:
  StatsIncrementLookupStaticValues();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementSuccessStaticValues : public TestCase {
 public:
  StatsIncrementSuccessStaticValues();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementFailedStaticValues : public TestCase {
 public:
  StatsIncrementFailedStaticValues();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementLateStaticValues : public TestCase {
 public:
  StatsIncrementLateStaticValues();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementCacheHitStaticValues : public TestCase {
 public:
  StatsIncrementCacheHitStaticValues();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementPowerLossStaticValues : public TestCase {
 public:
  StatsIncrementPowerLossStaticValues();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementPowerRechargedStaticValues : public TestCase {
 public:
  StatsIncrementPowerRechargedStaticValues();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementDuplicateMessageStaticValues : public TestCase {
 public:
  StatsIncrementDuplicateMessageStaticValues();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementElectionStepUpStaticValues : public TestCase {
 public:
  StatsIncrementElectionStepUpStaticValues();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementElectionStepDownStaticValues : public TestCase {
 public:
  StatsIncrementElectionStepDownStaticValues();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsAddPendingStaticValues : public TestCase {
 public:
  StatsAddPendingStaticValues();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementSentUnknownStaticValues : public TestCase {
 public:
  StatsIncrementSentUnknownStaticValues();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementSentPingStaticValues : public TestCase {
 public:
  StatsIncrementSentPingStaticValues();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementSentModeChangeStaticValues : public TestCase {
 public:
  StatsIncrementSentModeChangeStaticValues();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementSentElectionRequestStaticValues : public TestCase {
 public:
  StatsIncrementSentElectionRequestStaticValues();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementSentStoreStaticValues : public TestCase {
 public:
  StatsIncrementSentStoreStaticValues();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementSentLookupStaticValues : public TestCase {
 public:
  StatsIncrementSentLookupStaticValues();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementSentLookupResponseStaticValues : public TestCase {
 public:
  StatsIncrementSentLookupResponseStaticValues();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementSentTransferStaticValues : public TestCase {
 public:
  StatsIncrementSentTransferStaticValues();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementSentUnknownMultipleStaticValues : public TestCase {
 public:
  StatsIncrementSentUnknownMultipleStaticValues();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementSentPingMultipleStaticValues : public TestCase {
 public:
  StatsIncrementSentPingMultipleStaticValues();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementSentModeChangeMultipleStaticValues : public TestCase {
 public:
  StatsIncrementSentModeChangeMultipleStaticValues();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementSentElectionRequestMultipleStaticValues : public TestCase {
 public:
  StatsIncrementSentElectionRequestMultipleStaticValues();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementSentStoreMultipleStaticValues : public TestCase {
 public:
  StatsIncrementSentStoreMultipleStaticValues();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementSentLookupMultipleStaticValues : public TestCase {
 public:
  StatsIncrementSentLookupMultipleStaticValues();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementSentLookupResponseMultipleStaticValues : public TestCase {
 public:
  StatsIncrementSentLookupResponseMultipleStaticValues();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementSentTransferMultipleStaticValues : public TestCase {
 public:
  StatsIncrementSentTransferMultipleStaticValues();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementReceivedUnknownStaticValues : public TestCase {
 public:
  StatsIncrementReceivedUnknownStaticValues();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementReceivedPingStaticValues : public TestCase {
 public:
  StatsIncrementReceivedPingStaticValues();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementReceivedModeChangeStaticValues : public TestCase {
 public:
  StatsIncrementReceivedModeChangeStaticValues();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementReceivedElectionRequestStaticValues : public TestCase {
 public:
  StatsIncrementReceivedElectionRequestStaticValues();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementReceivedStoreStaticValues : public TestCase {
 public:
  StatsIncrementReceivedStoreStaticValues();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementReceivedLookupnStaticValues : public TestCase {
 public:
  StatsIncrementReceivedLookupnStaticValues();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementReceivedLookupResponseStaticValues : public TestCase {
 public:
  StatsIncrementReceivedLookupResponseStaticValues();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};
class StatsIncrementReceivedTransferStaticValues : public TestCase {
 public:
  StatsIncrementReceivedTransferStaticValues();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};

class StatsQueryDelayDefault : public TestCase {
 public:
  StatsQueryDelayDefault();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};

class StatsQueryDelayOne : public TestCase {
 public:
  StatsQueryDelayOne();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};

class StatsQueryDelayHigher : public TestCase {
 public:
  StatsQueryDelayHigher();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};

class StatsQueryDelayLower : public TestCase {
 public:
  StatsQueryDelayLower();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};

class StatsQueryDelayMultiple : public TestCase {
 public:
  StatsQueryDelayMultiple();

 private:
  virtual void DoRun(void);
  virtual void DoSetup(void);
};

#endif
