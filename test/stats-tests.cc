

#include <cstddef>

#include "stats-tests.h"

#define private public
#include "../model/rhpman-stats.h"

using namespace ns3;
using namespace rhpman;

StatsTestResetCounters::StatsTestResetCounters()
    : TestCase("Make sure that reset actually resets all the counters to 0") {}

StatsPrintDefaultPrefix::StatsPrintDefaultPrefix()
    : TestCase("Print the stats without specifying a prefix to use") {}
StatsPrintWithPrefix::StatsPrintWithPrefix()
    : TestCase("print the stats with a specified message prefix") {}

TypeStringValidValues::TypeStringValidValues()
    : TestCase("Check type enums can be converted to a string") {}

InitalSaveValue::InitalSaveValue() : TestCase("Check that the inital number of saves is 0") {}
InitalLookupValue::InitalLookupValue() : TestCase("Check that the inital number of lookups is 0") {}
InitalSuccessValue::InitalSuccessValue()
    : TestCase("Check that the inital number of successes is 0") {}
InitalFailedValue::InitalFailedValue()
    : TestCase("Check that the inital number of failed lookups is 0") {}
InitalLateValue::InitalLateValue()
    : TestCase("Check that the inital number of late lookups is 0") {}
InitalTotalPendingValue::InitalTotalPendingValue()
    : TestCase("Check that the inital number of pending lookups is 0") {}
InitalTotalSentValue::InitalTotalSentValue()
    : TestCase("Check that the inital number of sent messages is 0") {}
InitalTotalReceivedValue::InitalTotalReceivedValue()
    : TestCase("Check that the inital number of received messages is 0") {}
InitalTotalExpectedReceiveValue::InitalTotalExpectedReceiveValue()
    : TestCase("Check that the inital number of expected received messages is 0") {}
InitalDuplicateValue::InitalDuplicateValue()
    : TestCase("Check that the inital number of duplicate messages is 0") {}
InitalStepUpValue::InitalStepUpValue()
    : TestCase("Check that the inital number of election stepups is 0") {}
InitalStepDownValue::InitalStepDownValue()
    : TestCase("Check that the inital number of election stepdowns is 0") {}
InitalCacheHitValue::InitalCacheHitValue()
    : TestCase("Check that the inital number of cache hits is 0") {}
InitalPowerLossValue::InitalPowerLossValue()
    : TestCase("Check that the inital number of node power loss events is 0") {}
InitalPowerRechargedValue::InitalPowerRechargedValue()
    : TestCase("Check that the inital number of node power regained events is 0") {}
InitalSentTypeValue::InitalSentTypeValue()
    : TestCase("Check that the inital number of sent messages of a certain type is 0") {}
InitalReceivedTypeValue::InitalReceivedTypeValue()
    : TestCase("Check that the inital number of received messages of a certain type is 0") {}
InitalExpectedTypeValue::InitalExpectedTypeValue()
    : TestCase(
          "Check that the inital number of expected received messages of a certain type is 0") {}

StatsIncrementSaveOnlyOnce::StatsIncrementSaveOnlyOnce()
    : TestCase("Check that incrementing the save stats counter once has the correct value") {}
StatsIncrementLookupOnlyOnce::StatsIncrementLookupOnlyOnce()
    : TestCase("Check that incrementing the lookup stats counter once has the correct value") {}
StatsIncrementSuccessOnlyOnce::StatsIncrementSuccessOnlyOnce()
    : TestCase(
          "Check that incrementing the success lookup stats counter once has the correct value") {}
StatsIncrementFailedOnlyOnce::StatsIncrementFailedOnlyOnce()
    : TestCase(
          "Check that incrementing the failed lookup stats counter once has the correct value") {}
StatsIncrementLateOnlyOnce::StatsIncrementLateOnlyOnce()
    : TestCase("Check that incrementing the late lookup stats counter once has the correct value") {
}
StatsIncrementCacheHitOnlyOnce::StatsIncrementCacheHitOnlyOnce()
    : TestCase("Check that incrementing the cache hit stats counter once has the correct value") {}
StatsIncrementPowerLossOnlyOnce::StatsIncrementPowerLossOnlyOnce()
    : TestCase("Check that incrementing the power loss stats counter once has the correct value") {}
StatsIncrementPowerRechargedOnlyOnce::StatsIncrementPowerRechargedOnlyOnce()
    : TestCase("Check that incrementing the recharged stats counter once has the correct value") {}
StatsIncrementDuplicateMessageOnlyOnce::StatsIncrementDuplicateMessageOnlyOnce()
    : TestCase(
          "Check that incrementing the duplicate message stats counter once has the correct "
          "value") {}
StatsIncrementElectionStepUpOnlyOnce::StatsIncrementElectionStepUpOnlyOnce()
    : TestCase(
          "Check that incrementing the election node step up stats counter once has the correct "
          "value") {}
StatsIncrementElectionStepDownOnlyOnce::StatsIncrementElectionStepDownOnlyOnce()
    : TestCase(
          "Check that incrementing the election node step down stats counter once has the correct "
          "value") {}
StatsAddPendingOnlyOnce::StatsAddPendingOnlyOnce()
    : TestCase(
          "Check that incrementing the pending lookups stats counter once has the correct value") {}
StatsIncrementSentUnknownOnlyOnce::StatsIncrementSentUnknownOnlyOnce()
    : TestCase(
          "Check that incrementing the sent unknown message type stats counter once has the "
          "correct value") {}
StatsIncrementSentPingOnlyOnce::StatsIncrementSentPingOnlyOnce()
    : TestCase(
          "Check that incrementing the sent ping message type stats counter once has the correct "
          "value") {}
StatsIncrementSentModeChangeOnlyOnce::StatsIncrementSentModeChangeOnlyOnce()
    : TestCase(
          "Check that incrementing the sent mode change message type stats counter once has the "
          "correct value") {}
StatsIncrementSentElectionRequestOnlyOnce::StatsIncrementSentElectionRequestOnlyOnce()
    : TestCase(
          "Check that incrementing the sent election request message type stats counter once has "
          "the correct value") {}
StatsIncrementSentStoreOnlyOnce::StatsIncrementSentStoreOnlyOnce()
    : TestCase(
          "Check that incrementing the sent store message type stats counter once has the correct "
          "value") {}
StatsIncrementSentLookupOnlyOnce::StatsIncrementSentLookupOnlyOnce()
    : TestCase(
          "Check that incrementing the sent lookup message type stats counter once has the correct "
          "value") {}
StatsIncrementSentLookupResponseOnlyOnce::StatsIncrementSentLookupResponseOnlyOnce()
    : TestCase(
          "Check that incrementing the sent response message type stats counter once has the "
          "correct value") {}
StatsIncrementSentTransferOnlyOnce::StatsIncrementSentTransferOnlyOnce()
    : TestCase("Check that incrementing the transfer stats counter once has the correct value") {}
StatsIncrementSentUnknownMultipleOnlyOnce::StatsIncrementSentUnknownMultipleOnlyOnce()
    : TestCase(
          "Check that incrementing the unknown stats counter by more than one, once has the "
          "correct value") {}
StatsIncrementSentPingMultipleOnlyOnce::StatsIncrementSentPingMultipleOnlyOnce()
    : TestCase(
          "Check that incrementing the ping stats counter by more than one, once has the correct "
          "value") {}
StatsIncrementSentModeChangeMultipleOnlyOnce::StatsIncrementSentModeChangeMultipleOnlyOnce()
    : TestCase(
          "Check that incrementing the mode change stats counter by more than one, once has the "
          "correct value") {}
StatsIncrementSentElectionRequestMultipleOnlyOnce::
    StatsIncrementSentElectionRequestMultipleOnlyOnce()
    : TestCase(
          "Check that incrementing the election request stats counter by more than one, once has "
          "the correct value") {}
StatsIncrementSentStoreMultipleOnlyOnce::StatsIncrementSentStoreMultipleOnlyOnce()
    : TestCase(
          "Check that incrementing the store stats counter by more than one, once has the correct "
          "value") {}
StatsIncrementSentLookupMultipleOnlyOnce::StatsIncrementSentLookupMultipleOnlyOnce()
    : TestCase(
          "Check that incrementing the lookup stats counter by more than one, once has the correct "
          "value") {}
StatsIncrementSentLookupResponseMultipleOnlyOnce::StatsIncrementSentLookupResponseMultipleOnlyOnce()
    : TestCase(
          "Check that incrementing the response stats counter by more than one, once has the "
          "correct value") {}
StatsIncrementSentTransferMultipleOnlyOnce::StatsIncrementSentTransferMultipleOnlyOnce()
    : TestCase(
          "Check that incrementing the transfer stats counter by more than one, once has the "
          "correct value") {}
StatsIncrementReceivedUnknownOnlyOnce::StatsIncrementReceivedUnknownOnlyOnce()
    : TestCase(
          "Check that incrementing the received unkown stats counter once has the correct value") {}
StatsIncrementReceivedPingOnlyOnce::StatsIncrementReceivedPingOnlyOnce()
    : TestCase(
          "Check that incrementing the received ping stats counter once has the correct value") {}
StatsIncrementReceivedModeChangeOnlyOnce::StatsIncrementReceivedModeChangeOnlyOnce()
    : TestCase(
          "Check that incrementing the received mode changed stats counter once has the correct "
          "value") {}
StatsIncrementReceivedElectionRequestOnlyOnce::StatsIncrementReceivedElectionRequestOnlyOnce()
    : TestCase(
          "Check that incrementing the received election requst stats counter once has the correct "
          "value") {}
StatsIncrementReceivedStoreOnlyOnce::StatsIncrementReceivedStoreOnlyOnce()
    : TestCase(
          "Check that incrementing the received store stats counter once has the correct value") {}
StatsIncrementReceivedLookupnOnlyOnce::StatsIncrementReceivedLookupnOnlyOnce()
    : TestCase(
          "Check that incrementing the received lookup stats counter once has the correct value") {}
StatsIncrementReceivedLookupResponseOnlyOnce::StatsIncrementReceivedLookupResponseOnlyOnce()
    : TestCase(
          "Check that incrementing the received lookup response stats counter once has the correct "
          "value") {}
StatsIncrementReceivedTransferOnlyOnce::StatsIncrementReceivedTransferOnlyOnce()
    : TestCase(
          "Check that incrementing the received transfer stats counter once has the correct "
          "value") {}

StatsIncrementSaveMultipleTimes::StatsIncrementSaveMultipleTimes()
    : TestCase(
          "Check that incrementing the save stats counter multiple times has the correct value") {}
StatsIncrementLookupMultipleTimes::StatsIncrementLookupMultipleTimes()
    : TestCase(
          "Check that incrementing the lookup stats counter multiple times has the correct value") {
}
StatsIncrementSuccessMultipleTimes::StatsIncrementSuccessMultipleTimes()
    : TestCase(
          "Check that incrementing the success lookup stats counter multiple times has the correct "
          "value") {}
StatsIncrementFailedMultipleTimes::StatsIncrementFailedMultipleTimes()
    : TestCase(
          "Check that incrementing the failed lookup stats counter multiple times has the correct "
          "value") {}
StatsIncrementLateMultipleTimes::StatsIncrementLateMultipleTimes()
    : TestCase(
          "Check that incrementing the late lookup stats counter multiple times has the correct "
          "value") {}
StatsIncrementCacheHitMultipleTimes::StatsIncrementCacheHitMultipleTimes()
    : TestCase(
          "Check that incrementing the cache hit stats counter multiple times has the correct "
          "value") {}
StatsIncrementPowerLossMultipleTimes::StatsIncrementPowerLossMultipleTimes()
    : TestCase(
          "Check that incrementing the power loss stats counter multiple times has the correct "
          "value") {}
StatsIncrementPowerRechargedMultipleTimes::StatsIncrementPowerRechargedMultipleTimes()
    : TestCase(
          "Check that incrementing the recharged stats counter multiple times has the correct "
          "value") {}
StatsIncrementDuplicateMessageMultipleTimes::StatsIncrementDuplicateMessageMultipleTimes()
    : TestCase(
          "Check that incrementing the duplicate message stats counter multiple times has the "
          "correct value") {}
StatsIncrementElectionStepUpMultipleTimes::StatsIncrementElectionStepUpMultipleTimes()
    : TestCase(
          "Check that incrementing the election node step up stats counter multiple times has the "
          "correct value") {}
StatsIncrementElectionStepDownMultipleTimes::StatsIncrementElectionStepDownMultipleTimes()
    : TestCase(
          "Check that incrementing the election node step down stats counter multiple times has "
          "the correct value") {}
StatsAddPendingMultipleTimes::StatsAddPendingMultipleTimes()
    : TestCase(
          "Check that incrementing the pending lookups stats counter multiple times has the "
          "correct value") {}
StatsIncrementSentUnknownMultipleTimes::StatsIncrementSentUnknownMultipleTimes()
    : TestCase(
          "Check that incrementing the sent unknown message type stats counter multiple times has "
          "the correct value") {}
StatsIncrementSentPingMultipleTimes::StatsIncrementSentPingMultipleTimes()
    : TestCase(
          "Check that incrementing the sent ping message type stats counter multiple times has the "
          "correct value") {}
StatsIncrementSentModeChangeMultipleTimes::StatsIncrementSentModeChangeMultipleTimes()
    : TestCase(
          "Check that incrementing the sent mode change message type stats counter multiple times "
          "has the correct value") {}
StatsIncrementSentElectionRequestMultipleTimes::StatsIncrementSentElectionRequestMultipleTimes()
    : TestCase(
          "Check that incrementing the sent election request message type stats counter multiple "
          "times has the correct value") {}
StatsIncrementSentStoreMultipleTimes::StatsIncrementSentStoreMultipleTimes()
    : TestCase(
          "Check that incrementing the sent store message type stats counter multiple times has "
          "the correct value") {}
StatsIncrementSentLookupMultipleTimes::StatsIncrementSentLookupMultipleTimes()
    : TestCase(
          "Check that incrementing the sent lookup message type stats counter multiple times has "
          "the correct value") {}
StatsIncrementSentLookupResponseMultipleTimes::StatsIncrementSentLookupResponseMultipleTimes()
    : TestCase(
          "Check that incrementing the sent response message type stats counter multiple times has "
          "the correct value") {}
StatsIncrementSentTransferMultipleTimes::StatsIncrementSentTransferMultipleTimes()
    : TestCase(
          "Check that incrementing the transfer stats counter multiple times has the correct "
          "value") {}
StatsIncrementSentUnknownMultipleMultipleTimes::StatsIncrementSentUnknownMultipleMultipleTimes()
    : TestCase(
          "Check that incrementing the unknown stats counter by more than one, multiple times has "
          "the correct value") {}
StatsIncrementSentPingMultipleMultipleTimes::StatsIncrementSentPingMultipleMultipleTimes()
    : TestCase(
          "Check that incrementing the ping stats counter by more than one, multiple times has the "
          "correct value") {}
StatsIncrementSentModeChangeMultipleMultipleTimes::
    StatsIncrementSentModeChangeMultipleMultipleTimes()
    : TestCase(
          "Check that incrementing the mode change stats counter by more than one, multiple times "
          "has the correct value") {}
StatsIncrementSentElectionRequestMultipleMultipleTimes::
    StatsIncrementSentElectionRequestMultipleMultipleTimes()
    : TestCase(
          "Check that incrementing the election request stats counter by more than one, multiple "
          "times has the correct value") {}
StatsIncrementSentStoreMultipleMultipleTimes::StatsIncrementSentStoreMultipleMultipleTimes()
    : TestCase(
          "Check that incrementing the store stats counter by more than one, multiple times has "
          "the correct value") {}
StatsIncrementSentLookupMultipleMultipleTimes::StatsIncrementSentLookupMultipleMultipleTimes()
    : TestCase(
          "Check that incrementing the lookup stats counter by more than one, multiple times has "
          "the correct value") {}
StatsIncrementSentLookupResponseMultipleMultipleTimes::
    StatsIncrementSentLookupResponseMultipleMultipleTimes()
    : TestCase(
          "Check that incrementing the response stats counter by more than one, multiple times has "
          "the correct value") {}
StatsIncrementSentTransferMultipleMultipleTimes::StatsIncrementSentTransferMultipleMultipleTimes()
    : TestCase(
          "Check that incrementing the transfer stats counter by more than one, multiple times has "
          "the correct value") {}
StatsIncrementReceivedUnknownMultipleTimes::StatsIncrementReceivedUnknownMultipleTimes()
    : TestCase(
          "Check that incrementing the received unkown stats counter multiple times has the "
          "correct value") {}
StatsIncrementReceivedPingMultipleTimes::StatsIncrementReceivedPingMultipleTimes()
    : TestCase(
          "Check that incrementing the received ping stats counter multiple times has the correct "
          "value") {}
StatsIncrementReceivedModeChangeMultipleTimes::StatsIncrementReceivedModeChangeMultipleTimes()
    : TestCase(
          "Check that incrementing the received mode changed stats counter multiple times has the "
          "correct value") {}
StatsIncrementReceivedElectionRequestMultipleTimes::
    StatsIncrementReceivedElectionRequestMultipleTimes()
    : TestCase(
          "Check that incrementing the received election requst stats counter multiple times has "
          "the correct value") {}
StatsIncrementReceivedStoreMultipleTimes::StatsIncrementReceivedStoreMultipleTimes()
    : TestCase(
          "Check that incrementing the received store stats counter multiple times has the correct "
          "value") {}
StatsIncrementReceivedLookupnMultipleTimes::StatsIncrementReceivedLookupnMultipleTimes()
    : TestCase(
          "Check that incrementing the received lookup stats counter multiple times has the "
          "correct value") {}
StatsIncrementReceivedLookupResponseMultipleTimes::
    StatsIncrementReceivedLookupResponseMultipleTimes()
    : TestCase(
          "Check that incrementing the received lookup response stats counter multiple times has "
          "the correct value") {}
StatsIncrementReceivedTransferMultipleTimes::StatsIncrementReceivedTransferMultipleTimes()
    : TestCase(
          "Check that incrementing the received transfer stats counter multiple times has the "
          "correct value") {}

StatsIncrementSaveStaticValues::StatsIncrementSaveStaticValues()
    : TestCase(
          "Check that incrementing the save stats counter in multiple instances has the correct "
          "value") {}
StatsIncrementLookupStaticValues::StatsIncrementLookupStaticValues()
    : TestCase(
          "Check that incrementing the lookup stats counter in multiple instances has the correct "
          "value") {}
StatsIncrementSuccessStaticValues::StatsIncrementSuccessStaticValues()
    : TestCase(
          "Check that incrementing the success lookup stats counter in multiple instances has the "
          "correct value") {}
StatsIncrementFailedStaticValues::StatsIncrementFailedStaticValues()
    : TestCase(
          "Check that incrementing the failed lookup stats counter in multiple instances has the "
          "correct value") {}
StatsIncrementLateStaticValues::StatsIncrementLateStaticValues()
    : TestCase(
          "Check that incrementing the late lookup stats counter in multiple instances has the "
          "correct value") {}
StatsIncrementCacheHitStaticValues::StatsIncrementCacheHitStaticValues()
    : TestCase(
          "Check that incrementing the cache hit stats counter in multiple instances has the "
          "correct value") {}
StatsIncrementPowerLossStaticValues::StatsIncrementPowerLossStaticValues()
    : TestCase(
          "Check that incrementing the power loss stats counter in multiple instances has the "
          "correct value") {}
StatsIncrementPowerRechargedStaticValues::StatsIncrementPowerRechargedStaticValues()
    : TestCase(
          "Check that incrementing the recharged stats counter in multiple instances has the "
          "correct value") {}
StatsIncrementDuplicateMessageStaticValues::StatsIncrementDuplicateMessageStaticValues()
    : TestCase(
          "Check that incrementing the duplicate message stats counter in multiple instances has "
          "the correct value") {}
StatsIncrementElectionStepUpStaticValues::StatsIncrementElectionStepUpStaticValues()
    : TestCase(
          "Check that incrementing the election node step up stats counter in multiple instances "
          "has the correct value") {}
StatsIncrementElectionStepDownStaticValues::StatsIncrementElectionStepDownStaticValues()
    : TestCase(
          "Check that incrementing the election node step down stats counter in multiple instances "
          "has the correct value") {}
StatsAddPendingStaticValues::StatsAddPendingStaticValues()
    : TestCase(
          "Check that incrementing the pending lookups stats counter in multiple instances has the "
          "correct value") {}
StatsIncrementSentUnknownStaticValues::StatsIncrementSentUnknownStaticValues()
    : TestCase(
          "Check that incrementing the sent unknown message type stats counter in multiple "
          "instances has the correct value") {}
StatsIncrementSentPingStaticValues::StatsIncrementSentPingStaticValues()
    : TestCase(
          "Check that incrementing the sent ping message type stats counter in multiple instances "
          "has the correct value") {}
StatsIncrementSentModeChangeStaticValues::StatsIncrementSentModeChangeStaticValues()
    : TestCase(
          "Check that incrementing the sent mode change message type stats counter in multiple "
          "instances has the correct value") {}
StatsIncrementSentElectionRequestStaticValues::StatsIncrementSentElectionRequestStaticValues()
    : TestCase(
          "Check that incrementing the sent election request message type stats counter in "
          "multiple instances has the correct value") {}
StatsIncrementSentStoreStaticValues::StatsIncrementSentStoreStaticValues()
    : TestCase(
          "Check that incrementing the sent store message type stats counter in multiple instances "
          "has the correct value") {}
StatsIncrementSentLookupStaticValues::StatsIncrementSentLookupStaticValues()
    : TestCase(
          "Check that incrementing the sent lookup message type stats counter in multiple "
          "instances has the correct value") {}
StatsIncrementSentLookupResponseStaticValues::StatsIncrementSentLookupResponseStaticValues()
    : TestCase(
          "Check that incrementing the sent response message type stats counter in multiple "
          "instances has the correct value") {}
StatsIncrementSentTransferStaticValues::StatsIncrementSentTransferStaticValues()
    : TestCase(
          "Check that incrementing the transfer stats counter in multiple instances has the "
          "correct value") {}
StatsIncrementSentUnknownMultipleStaticValues::StatsIncrementSentUnknownMultipleStaticValues()
    : TestCase(
          "Check that incrementing the unknown stats counter by more than one, in multiple "
          "instances has the correct value") {}
StatsIncrementSentPingMultipleStaticValues::StatsIncrementSentPingMultipleStaticValues()
    : TestCase(
          "Check that incrementing the ping stats counter by more than one, in multiple instances "
          "has the correct value") {}
StatsIncrementSentModeChangeMultipleStaticValues::StatsIncrementSentModeChangeMultipleStaticValues()
    : TestCase(
          "Check that incrementing the mode change stats counter by more than one, in multiple "
          "instances has the correct value") {}
StatsIncrementSentElectionRequestMultipleStaticValues::
    StatsIncrementSentElectionRequestMultipleStaticValues()
    : TestCase(
          "Check that incrementing the election request stats counter by more than one, in "
          "multiple instances has the correct value") {}
StatsIncrementSentStoreMultipleStaticValues::StatsIncrementSentStoreMultipleStaticValues()
    : TestCase(
          "Check that incrementing the store stats counter by more than one, in multiple instances "
          "has the correct value") {}
StatsIncrementSentLookupMultipleStaticValues::StatsIncrementSentLookupMultipleStaticValues()
    : TestCase(
          "Check that incrementing the lookup stats counter by more than one, in multiple "
          "instances has the correct value") {}
StatsIncrementSentLookupResponseMultipleStaticValues::
    StatsIncrementSentLookupResponseMultipleStaticValues()
    : TestCase(
          "Check that incrementing the response stats counter by more than one, in multiple "
          "instances has the correct value") {}
StatsIncrementSentTransferMultipleStaticValues::StatsIncrementSentTransferMultipleStaticValues()
    : TestCase(
          "Check that incrementing the transfer stats counter by more than one, in multiple "
          "instances has the correct value") {}
StatsIncrementReceivedUnknownStaticValues::StatsIncrementReceivedUnknownStaticValues()
    : TestCase(
          "Check that incrementing the received unkown stats counter in multiple instances has the "
          "correct value") {}
StatsIncrementReceivedPingStaticValues::StatsIncrementReceivedPingStaticValues()
    : TestCase(
          "Check that incrementing the received ping stats counter in multiple instances has the "
          "correct value") {}
StatsIncrementReceivedModeChangeStaticValues::StatsIncrementReceivedModeChangeStaticValues()
    : TestCase(
          "Check that incrementing the received mode changed stats counter in multiple instances "
          "has the correct value") {}
StatsIncrementReceivedElectionRequestStaticValues::
    StatsIncrementReceivedElectionRequestStaticValues()
    : TestCase(
          "Check that incrementing the received election requst stats counter in multiple "
          "instances has the correct value") {}
StatsIncrementReceivedStoreStaticValues::StatsIncrementReceivedStoreStaticValues()
    : TestCase(
          "Check that incrementing the received store stats counter in multiple instances has the "
          "correct value") {}
StatsIncrementReceivedLookupnStaticValues::StatsIncrementReceivedLookupnStaticValues()
    : TestCase(
          "Check that incrementing the received lookup stats counter in multiple instances has the "
          "correct value") {}
StatsIncrementReceivedLookupResponseStaticValues::StatsIncrementReceivedLookupResponseStaticValues()
    : TestCase(
          "Check that incrementing the received lookup response stats counter in multiple "
          "instances has the correct value") {}
StatsIncrementReceivedTransferStaticValues::StatsIncrementReceivedTransferStaticValues()
    : TestCase(
          "Check that incrementing the received transfer stats counter in multiple instances has "
          "the correct value") {}

static const std::string defaultStatsString =
    "TotalSaves\t0\n"
    "TotalLookups\t0\n"
    "TotalSuccess\t0\n"
    "TotalFailed\t0\n"
    "TotalLate\t0\n"
    "TotalCacheHits\t0\n"
    "TotalPending\t0\n"
    "TotalStepUp\t0\n"
    "TotalStepDowns\t0\n"
    "TotalPowerloss\t0\n"
    "TotalPowerRecharge\t0\n"
    "TotalSent\t0\n"
    "TotalExpectedRecipients\t0\n"
    "TotalReceived\t0\n"
    "TotalDuplicates\t0\n"
    "TotalSentUNKOWN\t0\n"
    "TotalSentPING\t0\n"
    "TotalSentMODE_CHANGE\t0\n"
    "TotalSentELECTION_REQUEST\t0\n"
    "TotalSentSTORE\t0\n"
    "TotalSentLOOKUP\t0\n"
    "TotalSentLOOKUP_RESPONSE\t0\n"
    "TotalSentTRANSFER\t0\n"
    "TotalExpectedReceivesUNKOWN\t0\n"
    "TotalExpectedReceivesPING\t0\n"
    "TotalExpectedReceivesMODE_CHANGE\t0\n"
    "TotalExpectedReceivesELECTION_REQUEST\t0\n"
    "TotalExpectedReceivesSTORE\t0\n"
    "TotalExpectedReceivesLOOKUP\t0\n"
    "TotalExpectedReceivesLOOKUP_RESPONSE\t0\n"
    "TotalExpectedReceivesTRANSFER\t0\n"
    "TotalReceivedUNKOWN\t0\n"
    "TotalReceivedPING\t0\n"
    "TotalReceivedMODE_CHANGE\t0\n"
    "TotalReceivedELECTION_REQUEST\t0\n"
    "TotalReceivedSTORE\t0\n"
    "TotalReceivedLOOKUP\t0\n"
    "TotalReceivedLOOKUP_RESPONSE\t0\n"
    "TotalReceivedTRANSFER\t0\n";

static const std::string prefixedStatsString =
    "FinalTotalSaves\t0\n"
    "FinalTotalLookups\t0\n"
    "FinalTotalSuccess\t0\n"
    "FinalTotalFailed\t0\n"
    "FinalTotalLate\t0\n"
    "FinalTotalCacheHits\t0\n"
    "FinalTotalPending\t0\n"
    "FinalTotalStepUp\t0\n"
    "FinalTotalStepDowns\t0\n"
    "FinalTotalPowerloss\t0\n"
    "FinalTotalPowerRecharge\t0\n"
    "FinalTotalSent\t0\n"
    "FinalTotalExpectedRecipients\t0\n"
    "FinalTotalReceived\t0\n"
    "FinalTotalDuplicates\t0\n"
    "FinalTotalSentUNKOWN\t0\n"
    "FinalTotalSentPING\t0\n"
    "FinalTotalSentMODE_CHANGE\t0\n"
    "FinalTotalSentELECTION_REQUEST\t0\n"
    "FinalTotalSentSTORE\t0\n"
    "FinalTotalSentLOOKUP\t0\n"
    "FinalTotalSentLOOKUP_RESPONSE\t0\n"
    "FinalTotalSentTRANSFER\t0\n"
    "FinalTotalExpectedReceivesUNKOWN\t0\n"
    "FinalTotalExpectedReceivesPING\t0\n"
    "FinalTotalExpectedReceivesMODE_CHANGE\t0\n"
    "FinalTotalExpectedReceivesELECTION_REQUEST\t0\n"
    "FinalTotalExpectedReceivesSTORE\t0\n"
    "FinalTotalExpectedReceivesLOOKUP\t0\n"
    "FinalTotalExpectedReceivesLOOKUP_RESPONSE\t0\n"
    "FinalTotalExpectedReceivesTRANSFER\t0\n"
    "FinalTotalReceivedUNKOWN\t0\n"
    "FinalTotalReceivedPING\t0\n"
    "FinalTotalReceivedMODE_CHANGE\t0\n"
    "FinalTotalReceivedELECTION_REQUEST\t0\n"
    "FinalTotalReceivedSTORE\t0\n"
    "FinalTotalReceivedLOOKUP\t0\n"
    "FinalTotalReceivedLOOKUP_RESPONSE\t0\n"
    "FinalTotalReceivedTRANSFER\t0\n";

void TypeStringValidValues::DoRun(void) {
  Stats stats;
  NS_TEST_ASSERT_MSG_EQ(
      stats.TypeString(Stats::Type::UNKOWN),
      "UNKOWN",
      "expected enum value UNKOWN to match the string");
  NS_TEST_ASSERT_MSG_EQ(
      stats.TypeString(Stats::Type::PING),
      "PING",
      "expected enum value PING to match the string");
  NS_TEST_ASSERT_MSG_EQ(
      stats.TypeString(Stats::Type::MODE_CHANGE),
      "MODE_CHANGE",
      "expected enum value MODE_CHANGE to match the string");
  NS_TEST_ASSERT_MSG_EQ(
      stats.TypeString(Stats::Type::ELECTION_REQUEST),
      "ELECTION_REQUEST",
      "expected enum value ELECTION_REQUEST to match the string");
  NS_TEST_ASSERT_MSG_EQ(
      stats.TypeString(Stats::Type::STORE),
      "STORE",
      "expected enum value STORE to match the string");
  NS_TEST_ASSERT_MSG_EQ(
      stats.TypeString(Stats::Type::LOOKUP),
      "LOOKUP",
      "expected enum value LOOKUP to match the string");
  NS_TEST_ASSERT_MSG_EQ(
      stats.TypeString(Stats::Type::LOOKUP_RESPONSE),
      "LOOKUP_RESPONSE",
      "expected enum value LOOKUP_RESPONSE to match the string");
  NS_TEST_ASSERT_MSG_EQ(
      stats.TypeString(Stats::Type::TRANSFER),
      "TRANSFER",
      "expected enum value TRANSFER to match the string");
}

void StatsPrintDefaultPrefix::DoRun(void) {
  Stats stats;

  std::stringstream buffer;
  std::streambuf* old = std::cout.rdbuf(buffer.rdbuf());

  stats.Print();

  std::string text = buffer.str();  // text will now contain "Bla\n"
  std::cout.rdbuf(old);

  NS_TEST_ASSERT_MSG_EQ(text, defaultStatsString, "stats text should match");
}

void StatsPrintWithPrefix::DoRun(void) {
  Stats stats;

  std::stringstream buffer;
  std::streambuf* old = std::cout.rdbuf(buffer.rdbuf());

  stats.Print("Final");

  std::string text = buffer.str();  // text will now contain "Bla\n"
  std::cout.rdbuf(old);

  NS_TEST_ASSERT_MSG_EQ(text, prefixedStatsString, "stats text should match with the prefix");
}

void InitalSaveValue::DoRun(void) {
  Stats stats;
  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected inital Save value to be 0");
}
void InitalLookupValue::DoRun(void) {
  Stats stats;
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected inital Lookup value to be 0");
}
void InitalSuccessValue::DoRun(void) {
  Stats stats;
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected inital Success value to be 0");
}
void InitalFailedValue::DoRun(void) {
  Stats stats;
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected inital Failed value to be 0");
}
void InitalLateValue::DoRun(void) {
  Stats stats;
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected inital Late value to be 0");
}
void InitalTotalPendingValue::DoRun(void) {
  Stats stats;
  NS_TEST_ASSERT_MSG_EQ(stats.getPending(), 0, "expected inital TotalPending value to be 0");
}
void InitalTotalSentValue::DoRun(void) {
  Stats stats;
  NS_TEST_ASSERT_MSG_EQ(stats.getTotalSent(), 0, "expected inital TotalSent value to be 0");
}
void InitalTotalReceivedValue::DoRun(void) {
  Stats stats;
  NS_TEST_ASSERT_MSG_EQ(stats.getTotalReceived(), 0, "expected inital TotalReceived value to be 0");
}
void InitalTotalExpectedReceiveValue::DoRun(void) {
  Stats stats;
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      0,
      "expected inital TotalExpectedReceive value to be 0");
}
void InitalDuplicateValue::DoRun(void) {
  Stats stats;
  NS_TEST_ASSERT_MSG_EQ(stats.getDuplicate(), 0, "expected inital Duplicate value to be 0");
}
void InitalStepUpValue::DoRun(void) {
  Stats stats;
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected inital StepUp value to be 0");
}
void InitalStepDownValue::DoRun(void) {
  Stats stats;
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected inital StepDown value to be 0");
}
void InitalCacheHitValue::DoRun(void) {
  Stats stats;
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected inital CacheHit value to be 0");
}
void InitalPowerLossValue::DoRun(void) {
  Stats stats;
  NS_TEST_ASSERT_MSG_EQ(stats.getPowerloss(), 0, "expected inital PowerLoss value to be 0");
}
void InitalPowerRechargedValue::DoRun(void) {
  Stats stats;
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected inital PowerRecharged value to be 0");
}

void InitalSentTypeValue::DoRun(void) {
  Stats stats;
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected inital SentType UNKOWN value to be 0");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected inital SentType PING value to be 0");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected inital SentType MODE_CHANGE value to be 0");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected inital SentType ELECTION_REQUEST value to be 0");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected inital SentType STORE value to be 0");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected inital SentType LOOKUP value to be 0");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected inital SentType LOOKUP_RESPONSE value to be 0");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected inital SentType TRANSFER value to be 0");
}
void InitalReceivedTypeValue::DoRun(void) {
  Stats stats;
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected inital ReceivedType UNKOWN value to be 0");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected inital ReceivedType PING value to be 0");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected inital ReceivedType MODE_CHANGE value to be 0");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected inital ReceivedType ELECTION_REQUEST value to be 0");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected inital ReceivedType STORE value to be 0");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected inital ReceivedType LOOKUP value to be 0");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected inital ReceivedType LOOKUP_RESPONSE value to be 0");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected inital ReceivedType TRANSFER value to be 0");
}
void InitalExpectedTypeValue::DoRun(void) {
  Stats stats;
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected inital ExpectedType UNKOWN value to be 0");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected inital ExpectedType PING value to be 0");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected inital ExpectedType MODE_CHANGE value to be 0");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected inital ExpectedType ELECTION_REQUEST value to be 0");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected inital ExpectedType STORE value to be 0");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected inital ExpectedType LOOKUP value to be 0");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected inital ExpectedType LOOKUP_RESPONSE value to be 0");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected inital ExpectedType TRANSFER value to be 0");
}

void StatsTestResetCounters::DoRun(void) {
  Stats stats;

  stats.incSave();
  stats.incLookup();
  stats.incSuccess();
  stats.incFailed();
  stats.incLate();
  stats.incCache();
  stats.incPowerloss();
  stats.incPowerRecharge();
  stats.incDuplicate();
  stats.incStepUp();
  stats.incStepDown();
  stats.addPending(10);
  stats.addSent(Stats::Type::UNKOWN);
  stats.addSent(Stats::Type::PING);
  stats.addSent(Stats::Type::MODE_CHANGE);
  stats.addSent(Stats::Type::ELECTION_REQUEST);
  stats.addSent(Stats::Type::STORE);
  stats.addSent(Stats::Type::LOOKUP);
  stats.addSent(Stats::Type::LOOKUP_RESPONSE);
  stats.addSent(Stats::Type::TRANSFER);
  stats.incReceived(Stats::Type::UNKOWN);
  stats.incReceived(Stats::Type::PING);
  stats.incReceived(Stats::Type::MODE_CHANGE);
  stats.incReceived(Stats::Type::ELECTION_REQUEST);
  stats.incReceived(Stats::Type::STORE);
  stats.incReceived(Stats::Type::LOOKUP);
  stats.incReceived(Stats::Type::LOOKUP_RESPONSE);
  stats.incReceived(Stats::Type::TRANSFER);

  NS_TEST_ASSERT_MSG_NE(stats.getSave(), 0, "expected Save value not to be 0 before reset");
  NS_TEST_ASSERT_MSG_NE(stats.getLookup(), 0, "expected Lookup value not to be 0 before reset");
  NS_TEST_ASSERT_MSG_NE(stats.getSuccess(), 0, "expected Success value not to be 0 before reset");
  NS_TEST_ASSERT_MSG_NE(stats.getFailed(), 0, "expected Failed value not to be 0 before reset");
  NS_TEST_ASSERT_MSG_NE(stats.getLate(), 0, "expected Late value not to be 0 before reset");
  NS_TEST_ASSERT_MSG_NE(
      stats.getPending(),
      0,
      "expected TotalPending value not to be 0 before reset");
  NS_TEST_ASSERT_MSG_NE(
      stats.getTotalSent(),
      0,
      "expected TotalSent value not to be 0 before reset");
  NS_TEST_ASSERT_MSG_NE(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value not to be 0 before reset");
  NS_TEST_ASSERT_MSG_NE(
      stats.getTotalExpectedReceive(),
      0,
      "expected TotalExpectedReceive value not to be 0 before reset");
  NS_TEST_ASSERT_MSG_NE(
      stats.getDuplicate(),
      0,
      "expected Duplicate value not to be 0 before reset");
  NS_TEST_ASSERT_MSG_NE(stats.getStepUp(), 0, "expected StepUp value not to be 0 before reset");
  NS_TEST_ASSERT_MSG_NE(stats.getStepDown(), 0, "expected StepDown value not to be 0 before reset");
  NS_TEST_ASSERT_MSG_NE(stats.getCache(), 0, "expected CacheHit value not to be 0 before reset");
  NS_TEST_ASSERT_MSG_NE(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value not to be 0 before reset");
  NS_TEST_ASSERT_MSG_NE(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value not to be 0 before reset");
  NS_TEST_ASSERT_MSG_NE(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value not to be 0 before reset");
  NS_TEST_ASSERT_MSG_NE(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value not to be 0 before reset");
  NS_TEST_ASSERT_MSG_NE(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value not to be 0 before reset");
  NS_TEST_ASSERT_MSG_NE(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value not to be 0 before reset");
  NS_TEST_ASSERT_MSG_NE(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value not to be 0 before reset");
  NS_TEST_ASSERT_MSG_NE(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value not to be 0 before reset");
  NS_TEST_ASSERT_MSG_NE(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value not to be 0 before reset");
  NS_TEST_ASSERT_MSG_NE(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value not to be 0 before reset");
  NS_TEST_ASSERT_MSG_NE(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value not to be 0 before reset");
  NS_TEST_ASSERT_MSG_NE(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value not to be 0 before reset");
  NS_TEST_ASSERT_MSG_NE(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value not to be 0 before reset");
  NS_TEST_ASSERT_MSG_NE(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value not to be 0 before reset");
  NS_TEST_ASSERT_MSG_NE(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value not to be 0 before reset");
  NS_TEST_ASSERT_MSG_NE(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value not to be 0 before reset");
  NS_TEST_ASSERT_MSG_NE(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value not to be 0 before reset");
  NS_TEST_ASSERT_MSG_NE(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value not to be 0 before reset");
  NS_TEST_ASSERT_MSG_NE(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value not to be 0 before reset");
  NS_TEST_ASSERT_MSG_NE(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value not to be 0 before reset");
  NS_TEST_ASSERT_MSG_NE(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value not to be 0 before reset");
  NS_TEST_ASSERT_MSG_NE(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value not to be 0 before reset");
  NS_TEST_ASSERT_MSG_NE(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value not to be 0 before reset");
  NS_TEST_ASSERT_MSG_NE(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value not to be 0 before reset");
  NS_TEST_ASSERT_MSG_NE(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value not to be 0 before reset");
  NS_TEST_ASSERT_MSG_NE(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value not to be 0 before reset");

  stats.Reset();

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after reset");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after reset");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after reset");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after reset");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after reset");
  NS_TEST_ASSERT_MSG_EQ(stats.getPending(), 0, "expected TotalPending value to be 0 after reset");
  NS_TEST_ASSERT_MSG_EQ(stats.getTotalSent(), 0, "expected TotalSent value to be 0 after reset");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after reset");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      0,
      "expected TotalExpectedReceive value to be 0 after reset");
  NS_TEST_ASSERT_MSG_EQ(stats.getDuplicate(), 0, "expected Duplicate value to be 0 after reset");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after reset");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after reset");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after reset");
  NS_TEST_ASSERT_MSG_EQ(stats.getPowerloss(), 0, "expected PowerLoss value to be 0 after reset");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after reset");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after reset");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after reset");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after reset");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after reset");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after reset");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after reset");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after reset");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after reset");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after reset");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after reset");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after reset");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after reset");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after reset");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after reset");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after reset");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after reset");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after reset");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after reset");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after reset");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after reset");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after reset");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after reset");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after reset");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after reset");
}

/// single increment tests

void StatsIncrementSaveOnlyOnce::DoRun(void) {
  Stats stats;

  stats.incSave();

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 1, "expected Save value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      0,
      "expected TotalSent value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      0,
      "expected TotalExpectedReceive value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsIncrementLookupOnlyOnce::DoRun(void) {
  Stats stats;

  stats.incLookup();

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 1, "expected Lookup value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      0,
      "expected TotalSent value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      0,
      "expected TotalExpectedReceive value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsIncrementSuccessOnlyOnce::DoRun(void) {
  Stats stats;

  stats.incSuccess();

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 1, "expected Success value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      0,
      "expected TotalSent value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      0,
      "expected TotalExpectedReceive value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsIncrementFailedOnlyOnce::DoRun(void) {
  Stats stats;

  stats.incFailed();

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 1, "expected Failed value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      0,
      "expected TotalSent value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      0,
      "expected TotalExpectedReceive value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsIncrementLateOnlyOnce::DoRun(void) {
  Stats stats;

  stats.incLate();

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 1, "expected Late value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      0,
      "expected TotalSent value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      0,
      "expected TotalExpectedReceive value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsIncrementCacheHitOnlyOnce::DoRun(void) {
  Stats stats;

  stats.incCache();

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      0,
      "expected TotalSent value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      0,
      "expected TotalExpectedReceive value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 1, "expected CacheHit value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsIncrementPowerLossOnlyOnce::DoRun(void) {
  Stats stats;

  stats.incPowerloss();

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      0,
      "expected TotalSent value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      0,
      "expected TotalExpectedReceive value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      1,
      "expected PowerLoss value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsIncrementPowerRechargedOnlyOnce::DoRun(void) {
  Stats stats;

  stats.incPowerRecharge();

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      0,
      "expected TotalSent value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      0,
      "expected TotalExpectedReceive value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      1,
      "expected PowerRecharged value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsIncrementDuplicateMessageOnlyOnce::DoRun(void) {
  Stats stats;

  stats.incDuplicate();

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      0,
      "expected TotalSent value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      1,
      "expected TotalReceived value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      0,
      "expected TotalExpectedReceive value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      1,
      "expected Duplicate value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsIncrementElectionStepUpOnlyOnce::DoRun(void) {
  Stats stats;

  stats.incStepUp();

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      0,
      "expected TotalSent value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      0,
      "expected TotalExpectedReceive value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 1, "expected StepUp value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsIncrementElectionStepDownOnlyOnce::DoRun(void) {
  Stats stats;

  stats.incStepDown();

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      0,
      "expected TotalSent value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      0,
      "expected TotalExpectedReceive value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 1, "expected StepDown value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsAddPendingOnlyOnce::DoRun(void) {
  Stats stats;

  stats.addPending(10);

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      10,
      "expected TotalPending value to be 10 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      0,
      "expected TotalSent value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      0,
      "expected TotalExpectedReceive value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsIncrementSentUnknownOnlyOnce::DoRun(void) {
  Stats stats;

  stats.addSent(Stats::Type::UNKOWN);

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      1,
      "expected TotalSent value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      1,
      "expected TotalExpectedReceive value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      1,
      "expected SentType UNKOWN value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      1,
      "expected ExpectedType UNKOWN value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsIncrementSentPingOnlyOnce::DoRun(void) {
  Stats stats;

  stats.addSent(Stats::Type::PING);

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      1,
      "expected TotalSent value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      1,
      "expected TotalExpectedReceive value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      1,
      "expected SentType PING value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      1,
      "expected ExpectedType PING value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsIncrementSentModeChangeOnlyOnce::DoRun(void) {
  Stats stats;

  stats.addSent(Stats::Type::MODE_CHANGE);

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      1,
      "expected TotalSent value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      1,
      "expected TotalExpectedReceive value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      1,
      "expected SentType MODE_CHANGE value to be 01after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      1,
      "expected ExpectedType MODE_CHANGE value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsIncrementSentElectionRequestOnlyOnce::DoRun(void) {
  Stats stats;

  stats.addSent(Stats::Type::ELECTION_REQUEST);

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      1,
      "expected TotalSent value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      1,
      "expected TotalExpectedReceive value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      1,
      "expected SentType ELECTION_REQUEST value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      1,
      "expected ExpectedType ELECTION_REQUEST value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsIncrementSentStoreOnlyOnce::DoRun(void) {
  Stats stats;

  stats.addSent(Stats::Type::STORE);

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      1,
      "expected TotalSent value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      1,
      "expected TotalExpectedReceive value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      1,
      "expected SentType STORE value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      1,
      "expected ExpectedType STORE value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsIncrementSentLookupOnlyOnce::DoRun(void) {
  Stats stats;

  stats.addSent(Stats::Type::LOOKUP);

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      1,
      "expected TotalSent value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      1,
      "expected TotalExpectedReceive value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      1,
      "expected SentType LOOKUP value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      1,
      "expected ExpectedType LOOKUP value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsIncrementSentLookupResponseOnlyOnce::DoRun(void) {
  Stats stats;

  stats.addSent(Stats::Type::LOOKUP_RESPONSE);

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      1,
      "expected TotalSent value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      1,
      "expected TotalExpectedReceive value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      1,
      "expected SentType LOOKUP_RESPONSE value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      1,
      "expected ExpectedType LOOKUP_RESPONSE value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsIncrementSentTransferOnlyOnce::DoRun(void) {
  Stats stats;

  stats.addSent(Stats::Type::TRANSFER);

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      1,
      "expected TotalSent value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      1,
      "expected TotalExpectedReceive value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      1,
      "expected SentType TRANSFER value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      1,
      "expected ExpectedType TRANSFER value to be 1 after increment");
}

void StatsIncrementSentUnknownMultipleOnlyOnce::DoRun(void) {
  Stats stats;

  stats.addSent(Stats::Type::UNKOWN, 22);

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      1,
      "expected TotalSent value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      22,
      "expected TotalExpectedReceive value to be 22 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      1,
      "expected SentType UNKOWN value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      22,
      "expected ExpectedType UNKOWN value to be 22 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsIncrementSentPingMultipleOnlyOnce::DoRun(void) {
  Stats stats;

  stats.addSent(Stats::Type::PING, 22);

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      1,
      "expected TotalSent value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      22,
      "expected TotalExpectedReceive value to be 22 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      1,
      "expected SentType PING value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      22,
      "expected ExpectedType PING value to be 22 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsIncrementSentModeChangeMultipleOnlyOnce::DoRun(void) {
  Stats stats;

  stats.addSent(Stats::Type::MODE_CHANGE, 22);

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      1,
      "expected TotalSent value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      22,
      "expected TotalExpectedReceive value to be 22 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      1,
      "expected SentType MODE_CHANGE value to be 01after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      22,
      "expected ExpectedType MODE_CHANGE value to be 22 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsIncrementSentElectionRequestMultipleOnlyOnce::DoRun(void) {
  Stats stats;

  stats.addSent(Stats::Type::ELECTION_REQUEST, 22);

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      1,
      "expected TotalSent value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      22,
      "expected TotalExpectedReceive value to be 22 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      1,
      "expected SentType ELECTION_REQUEST value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      22,
      "expected ExpectedType ELECTION_REQUEST value to be 22 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsIncrementSentStoreMultipleOnlyOnce::DoRun(void) {
  Stats stats;

  stats.addSent(Stats::Type::STORE, 22);

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      1,
      "expected TotalSent value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      22,
      "expected TotalExpectedReceive value to be 22 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      1,
      "expected SentType STORE value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      22,
      "expected ExpectedType STORE value to be 22 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsIncrementSentLookupMultipleOnlyOnce::DoRun(void) {
  Stats stats;

  stats.addSent(Stats::Type::LOOKUP, 22);

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      1,
      "expected TotalSent value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      22,
      "expected TotalExpectedReceive value to be 22 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      1,
      "expected SentType LOOKUP value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      22,
      "expected ExpectedType LOOKUP value to be 22 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsIncrementSentLookupResponseMultipleOnlyOnce::DoRun(void) {
  Stats stats;

  stats.addSent(Stats::Type::LOOKUP_RESPONSE, 22);

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      1,
      "expected TotalSent value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      22,
      "expected TotalExpectedReceive value to be 22 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      1,
      "expected SentType LOOKUP_RESPONSE value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      22,
      "expected ExpectedType LOOKUP_RESPONSE value to be 22 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsIncrementSentTransferMultipleOnlyOnce::DoRun(void) {
  Stats stats;

  stats.addSent(Stats::Type::TRANSFER, 22);

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      1,
      "expected TotalSent value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      22,
      "expected TotalExpectedReceive value to be 22 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      1,
      "expected SentType TRANSFER value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      22,
      "expected ExpectedType TRANSFER value to be 22 after increment");
}

void StatsIncrementReceivedUnknownOnlyOnce::DoRun(void) {
  Stats stats;

  stats.incReceived(Stats::Type::UNKOWN);

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      0,
      "expected TotalSent value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      1,
      "expected TotalReceived value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      0,
      "expected TotalExpectedReceive value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      1,
      "expected ReceivedType UNKOWN value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsIncrementReceivedPingOnlyOnce::DoRun(void) {
  Stats stats;

  stats.incReceived(Stats::Type::PING);

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      0,
      "expected TotalSent value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      1,
      "expected TotalReceived value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      0,
      "expected TotalExpectedReceive value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      1,
      "expected ReceivedType PING value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsIncrementReceivedModeChangeOnlyOnce::DoRun(void) {
  Stats stats;

  stats.incReceived(Stats::Type::MODE_CHANGE);

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      0,
      "expected TotalSent value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      1,
      "expected TotalReceived value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      0,
      "expected TotalExpectedReceive value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      1,
      "expected ReceivedType MODE_CHANGE value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsIncrementReceivedElectionRequestOnlyOnce::DoRun(void) {
  Stats stats;

  stats.incReceived(Stats::Type::ELECTION_REQUEST);

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      0,
      "expected TotalSent value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      1,
      "expected TotalReceived value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      0,
      "expected TotalExpectedReceive value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      1,
      "expected ReceivedType ELECTION_REQUEST value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsIncrementReceivedStoreOnlyOnce::DoRun(void) {
  Stats stats;

  stats.incReceived(Stats::Type::STORE);

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      0,
      "expected TotalSent value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      1,
      "expected TotalReceived value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      0,
      "expected TotalExpectedReceive value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      1,
      "expected ReceivedType STORE value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsIncrementReceivedLookupnOnlyOnce::DoRun(void) {
  Stats stats;

  stats.incReceived(Stats::Type::LOOKUP);

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      0,
      "expected TotalSent value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      1,
      "expected TotalReceived value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      0,
      "expected TotalExpectedReceive value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      1,
      "expected ReceivedType LOOKUP value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsIncrementReceivedLookupResponseOnlyOnce::DoRun(void) {
  Stats stats;

  stats.incReceived(Stats::Type::LOOKUP_RESPONSE);

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      0,
      "expected TotalSent value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      1,
      "expected TotalReceived value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      0,
      "expected TotalExpectedReceive value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      1,
      "expected ReceivedType LOOKUP_RESPONSE value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsIncrementReceivedTransferOnlyOnce::DoRun(void) {
  Stats stats;

  stats.incReceived(Stats::Type::TRANSFER);

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      0,
      "expected TotalSent value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      1,
      "expected TotalReceived value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      0,
      "expected TotalExpectedReceive value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      1,
      "expected ReceivedType TRANSFER value to be 1 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

/// multiple increment tests

void StatsIncrementSaveMultipleTimes::DoRun(void) {
  Stats stats;

  stats.incSave();
  stats.incSave();
  stats.incSave();

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 3, "expected Save value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      0,
      "expected TotalSent value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      0,
      "expected TotalExpectedReceive value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsIncrementLookupMultipleTimes::DoRun(void) {
  Stats stats;

  stats.incLookup();
  stats.incLookup();
  stats.incLookup();

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 3, "expected Lookup value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      0,
      "expected TotalSent value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      0,
      "expected TotalExpectedReceive value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsIncrementSuccessMultipleTimes::DoRun(void) {
  Stats stats;

  stats.incSuccess();
  stats.incSuccess();
  stats.incSuccess();

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 3, "expected Success value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      0,
      "expected TotalSent value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      0,
      "expected TotalExpectedReceive value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsIncrementFailedMultipleTimes::DoRun(void) {
  Stats stats;

  stats.incFailed();
  stats.incFailed();
  stats.incFailed();

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 3, "expected Failed value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      0,
      "expected TotalSent value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      0,
      "expected TotalExpectedReceive value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsIncrementLateMultipleTimes::DoRun(void) {
  Stats stats;

  stats.incLate();
  stats.incLate();
  stats.incLate();

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 3, "expected Late value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      0,
      "expected TotalSent value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      0,
      "expected TotalExpectedReceive value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsIncrementCacheHitMultipleTimes::DoRun(void) {
  Stats stats;

  stats.incCache();
  stats.incCache();
  stats.incCache();

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      0,
      "expected TotalSent value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      0,
      "expected TotalExpectedReceive value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 3, "expected CacheHit value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsIncrementPowerLossMultipleTimes::DoRun(void) {
  Stats stats;

  stats.incPowerloss();
  stats.incPowerloss();
  stats.incPowerloss();

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      0,
      "expected TotalSent value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      0,
      "expected TotalExpectedReceive value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      3,
      "expected PowerLoss value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsIncrementPowerRechargedMultipleTimes::DoRun(void) {
  Stats stats;

  stats.incPowerRecharge();
  stats.incPowerRecharge();
  stats.incPowerRecharge();

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      0,
      "expected TotalSent value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      0,
      "expected TotalExpectedReceive value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      3,
      "expected PowerRecharged value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsIncrementDuplicateMessageMultipleTimes::DoRun(void) {
  Stats stats;

  stats.incDuplicate();
  stats.incDuplicate();
  stats.incDuplicate();

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      0,
      "expected TotalSent value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      3,
      "expected TotalReceived value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      0,
      "expected TotalExpectedReceive value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      3,
      "expected Duplicate value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsIncrementElectionStepUpMultipleTimes::DoRun(void) {
  Stats stats;

  stats.incStepUp();
  stats.incStepUp();
  stats.incStepUp();

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      0,
      "expected TotalSent value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      0,
      "expected TotalExpectedReceive value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 3, "expected StepUp value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsIncrementElectionStepDownMultipleTimes::DoRun(void) {
  Stats stats;

  stats.incStepDown();
  stats.incStepDown();
  stats.incStepDown();

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      0,
      "expected TotalSent value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      0,
      "expected TotalExpectedReceive value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 3, "expected StepDown value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsAddPendingMultipleTimes::DoRun(void) {
  Stats stats;

  stats.addPending(30);
  stats.addPending(30);
  stats.addPending(30);

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      90,
      "expected TotalPending value to be 90 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      0,
      "expected TotalSent value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      0,
      "expected TotalExpectedReceive value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsIncrementSentUnknownMultipleTimes::DoRun(void) {
  Stats stats;

  stats.addSent(Stats::Type::UNKOWN);
  stats.addSent(Stats::Type::UNKOWN);
  stats.addSent(Stats::Type::UNKOWN);

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      3,
      "expected TotalSent value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      3,
      "expected TotalExpectedReceive value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      3,
      "expected SentType UNKOWN value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      3,
      "expected ExpectedType UNKOWN value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsIncrementSentPingMultipleTimes::DoRun(void) {
  Stats stats;

  stats.addSent(Stats::Type::PING);
  stats.addSent(Stats::Type::PING);
  stats.addSent(Stats::Type::PING);

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      3,
      "expected TotalSent value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      3,
      "expected TotalExpectedReceive value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      3,
      "expected SentType PING value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      3,
      "expected ExpectedType PING value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsIncrementSentModeChangeMultipleTimes::DoRun(void) {
  Stats stats;

  stats.addSent(Stats::Type::MODE_CHANGE);
  stats.addSent(Stats::Type::MODE_CHANGE);
  stats.addSent(Stats::Type::MODE_CHANGE);

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      3,
      "expected TotalSent value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      3,
      "expected TotalExpectedReceive value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      3,
      "expected SentType MODE_CHANGE value to be 03after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      3,
      "expected ExpectedType MODE_CHANGE value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsIncrementSentElectionRequestMultipleTimes::DoRun(void) {
  Stats stats;

  stats.addSent(Stats::Type::ELECTION_REQUEST);
  stats.addSent(Stats::Type::ELECTION_REQUEST);
  stats.addSent(Stats::Type::ELECTION_REQUEST);

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      3,
      "expected TotalSent value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      3,
      "expected TotalExpectedReceive value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      3,
      "expected SentType ELECTION_REQUEST value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      3,
      "expected ExpectedType ELECTION_REQUEST value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsIncrementSentStoreMultipleTimes::DoRun(void) {
  Stats stats;

  stats.addSent(Stats::Type::STORE);
  stats.addSent(Stats::Type::STORE);
  stats.addSent(Stats::Type::STORE);

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      3,
      "expected TotalSent value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      3,
      "expected TotalExpectedReceive value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      3,
      "expected SentType STORE value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      3,
      "expected ExpectedType STORE value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsIncrementSentLookupMultipleTimes::DoRun(void) {
  Stats stats;

  stats.addSent(Stats::Type::LOOKUP);
  stats.addSent(Stats::Type::LOOKUP);
  stats.addSent(Stats::Type::LOOKUP);

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      3,
      "expected TotalSent value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      3,
      "expected TotalExpectedReceive value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      3,
      "expected SentType LOOKUP value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      3,
      "expected ExpectedType LOOKUP value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsIncrementSentLookupResponseMultipleTimes::DoRun(void) {
  Stats stats;

  stats.addSent(Stats::Type::LOOKUP_RESPONSE);
  stats.addSent(Stats::Type::LOOKUP_RESPONSE);
  stats.addSent(Stats::Type::LOOKUP_RESPONSE);

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      3,
      "expected TotalSent value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      3,
      "expected TotalExpectedReceive value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      3,
      "expected SentType LOOKUP_RESPONSE value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      3,
      "expected ExpectedType LOOKUP_RESPONSE value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsIncrementSentTransferMultipleTimes::DoRun(void) {
  Stats stats;

  stats.addSent(Stats::Type::TRANSFER);
  stats.addSent(Stats::Type::TRANSFER);
  stats.addSent(Stats::Type::TRANSFER);

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      3,
      "expected TotalSent value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      3,
      "expected TotalExpectedReceive value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      3,
      "expected SentType TRANSFER value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      3,
      "expected ExpectedType TRANSFER value to be 3 after increment");
}

void StatsIncrementSentUnknownMultipleMultipleTimes::DoRun(void) {
  Stats stats;

  stats.addSent(Stats::Type::UNKOWN, 22);
  stats.addSent(Stats::Type::UNKOWN, 22);
  stats.addSent(Stats::Type::UNKOWN, 22);

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      3,
      "expected TotalSent value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      66,
      "expected TotalExpectedReceive value to be 66 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      3,
      "expected SentType UNKOWN value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      66,
      "expected ExpectedType UNKOWN value to be 66 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsIncrementSentPingMultipleMultipleTimes::DoRun(void) {
  Stats stats;

  stats.addSent(Stats::Type::PING, 22);
  stats.addSent(Stats::Type::PING, 22);
  stats.addSent(Stats::Type::PING, 22);

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      3,
      "expected TotalSent value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      66,
      "expected TotalExpectedReceive value to be 66 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      3,
      "expected SentType PING value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      66,
      "expected ExpectedType PING value to be 66 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsIncrementSentModeChangeMultipleMultipleTimes::DoRun(void) {
  Stats stats;

  stats.addSent(Stats::Type::MODE_CHANGE, 22);
  stats.addSent(Stats::Type::MODE_CHANGE, 22);
  stats.addSent(Stats::Type::MODE_CHANGE, 22);

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      3,
      "expected TotalSent value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      66,
      "expected TotalExpectedReceive value to be 66 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      3,
      "expected SentType MODE_CHANGE value to be 03after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      66,
      "expected ExpectedType MODE_CHANGE value to be 66 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsIncrementSentElectionRequestMultipleMultipleTimes::DoRun(void) {
  Stats stats;

  stats.addSent(Stats::Type::ELECTION_REQUEST, 22);
  stats.addSent(Stats::Type::ELECTION_REQUEST, 22);
  stats.addSent(Stats::Type::ELECTION_REQUEST, 22);

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      3,
      "expected TotalSent value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      66,
      "expected TotalExpectedReceive value to be 66 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      3,
      "expected SentType ELECTION_REQUEST value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      66,
      "expected ExpectedType ELECTION_REQUEST value to be 66 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsIncrementSentStoreMultipleMultipleTimes::DoRun(void) {
  Stats stats;

  stats.addSent(Stats::Type::STORE, 22);
  stats.addSent(Stats::Type::STORE, 22);
  stats.addSent(Stats::Type::STORE, 22);

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      3,
      "expected TotalSent value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      66,
      "expected TotalExpectedReceive value to be 66 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      3,
      "expected SentType STORE value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      66,
      "expected ExpectedType STORE value to be 66 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsIncrementSentLookupMultipleMultipleTimes::DoRun(void) {
  Stats stats;

  stats.addSent(Stats::Type::LOOKUP, 22);
  stats.addSent(Stats::Type::LOOKUP, 22);
  stats.addSent(Stats::Type::LOOKUP, 22);

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      3,
      "expected TotalSent value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      66,
      "expected TotalExpectedReceive value to be 66 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      3,
      "expected SentType LOOKUP value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      66,
      "expected ExpectedType LOOKUP value to be 66 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsIncrementSentLookupResponseMultipleMultipleTimes::DoRun(void) {
  Stats stats;

  stats.addSent(Stats::Type::LOOKUP_RESPONSE, 22);
  stats.addSent(Stats::Type::LOOKUP_RESPONSE, 22);
  stats.addSent(Stats::Type::LOOKUP_RESPONSE, 22);

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      3,
      "expected TotalSent value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      66,
      "expected TotalExpectedReceive value to be 66 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      3,
      "expected SentType LOOKUP_RESPONSE value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      66,
      "expected ExpectedType LOOKUP_RESPONSE value to be 66 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsIncrementSentTransferMultipleMultipleTimes::DoRun(void) {
  Stats stats;

  stats.addSent(Stats::Type::TRANSFER, 22);
  stats.addSent(Stats::Type::TRANSFER, 22);
  stats.addSent(Stats::Type::TRANSFER, 22);

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      3,
      "expected TotalSent value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      66,
      "expected TotalExpectedReceive value to be 66 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      3,
      "expected SentType TRANSFER value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      66,
      "expected ExpectedType TRANSFER value to be 66 after increment");
}

void StatsIncrementReceivedUnknownMultipleTimes::DoRun(void) {
  Stats stats;

  stats.incReceived(Stats::Type::UNKOWN);
  stats.incReceived(Stats::Type::UNKOWN);
  stats.incReceived(Stats::Type::UNKOWN);

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      0,
      "expected TotalSent value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      3,
      "expected TotalReceived value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      0,
      "expected TotalExpectedReceive value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      3,
      "expected ReceivedType UNKOWN value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsIncrementReceivedPingMultipleTimes::DoRun(void) {
  Stats stats;

  stats.incReceived(Stats::Type::PING);
  stats.incReceived(Stats::Type::PING);
  stats.incReceived(Stats::Type::PING);

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      0,
      "expected TotalSent value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      3,
      "expected TotalReceived value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      0,
      "expected TotalExpectedReceive value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      3,
      "expected ReceivedType PING value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsIncrementReceivedModeChangeMultipleTimes::DoRun(void) {
  Stats stats;

  stats.incReceived(Stats::Type::MODE_CHANGE);
  stats.incReceived(Stats::Type::MODE_CHANGE);
  stats.incReceived(Stats::Type::MODE_CHANGE);

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      0,
      "expected TotalSent value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      3,
      "expected TotalReceived value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      0,
      "expected TotalExpectedReceive value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      3,
      "expected ReceivedType MODE_CHANGE value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsIncrementReceivedElectionRequestMultipleTimes::DoRun(void) {
  Stats stats;

  stats.incReceived(Stats::Type::ELECTION_REQUEST);
  stats.incReceived(Stats::Type::ELECTION_REQUEST);
  stats.incReceived(Stats::Type::ELECTION_REQUEST);

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      0,
      "expected TotalSent value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      3,
      "expected TotalReceived value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      0,
      "expected TotalExpectedReceive value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      3,
      "expected ReceivedType ELECTION_REQUEST value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsIncrementReceivedStoreMultipleTimes::DoRun(void) {
  Stats stats;

  stats.incReceived(Stats::Type::STORE);
  stats.incReceived(Stats::Type::STORE);
  stats.incReceived(Stats::Type::STORE);

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      0,
      "expected TotalSent value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      3,
      "expected TotalReceived value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      0,
      "expected TotalExpectedReceive value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      3,
      "expected ReceivedType STORE value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsIncrementReceivedLookupnMultipleTimes::DoRun(void) {
  Stats stats;

  stats.incReceived(Stats::Type::LOOKUP);
  stats.incReceived(Stats::Type::LOOKUP);
  stats.incReceived(Stats::Type::LOOKUP);

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      0,
      "expected TotalSent value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      3,
      "expected TotalReceived value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      0,
      "expected TotalExpectedReceive value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      3,
      "expected ReceivedType LOOKUP value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsIncrementReceivedLookupResponseMultipleTimes::DoRun(void) {
  Stats stats;

  stats.incReceived(Stats::Type::LOOKUP_RESPONSE);
  stats.incReceived(Stats::Type::LOOKUP_RESPONSE);
  stats.incReceived(Stats::Type::LOOKUP_RESPONSE);

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      0,
      "expected TotalSent value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      3,
      "expected TotalReceived value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      0,
      "expected TotalExpectedReceive value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      3,
      "expected ReceivedType LOOKUP_RESPONSE value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsIncrementReceivedTransferMultipleTimes::DoRun(void) {
  Stats stats;

  stats.incReceived(Stats::Type::TRANSFER);
  stats.incReceived(Stats::Type::TRANSFER);
  stats.incReceived(Stats::Type::TRANSFER);

  NS_TEST_ASSERT_MSG_EQ(stats.getSave(), 0, "expected Save value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLookup(), 0, "expected Lookup value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getSuccess(), 0, "expected Success value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getFailed(), 0, "expected Failed value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getLate(), 0, "expected Late value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      0,
      "expected TotalSent value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      3,
      "expected TotalReceived value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      0,
      "expected TotalExpectedReceive value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepUp(), 0, "expected StepUp value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getStepDown(), 0, "expected StepDown value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(stats.getCache(), 0, "expected CacheHit value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      3,
      "expected ReceivedType TRANSFER value to be 3 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after increment");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after increment");
}

void StatsIncrementSaveStaticValues::DoRun(void) {
  Stats stats;
  Stats stats1;
  Stats stats2;
  Stats stats3;

  stats1.incSave();
  stats2.incSave();
  stats3.incSave();

  NS_TEST_ASSERT_MSG_EQ(
      stats.getSave(),
      3,
      "expected Save value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLookup(),
      0,
      "expected Lookup value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSuccess(),
      0,
      "expected Success value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getFailed(),
      0,
      "expected Failed value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLate(),
      0,
      "expected Late value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      0,
      "expected TotalSent value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      0,
      "expected TotalExpectedReceive value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepUp(),
      0,
      "expected StepUp value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepDown(),
      0,
      "expected StepDown value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getCache(),
      0,
      "expected CacheHit value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after seperate objects get incremented");
}

void StatsIncrementLookupStaticValues::DoRun(void) {
  Stats stats;
  Stats stats1;
  Stats stats2;
  Stats stats3;

  stats1.incLookup();
  stats2.incLookup();
  stats3.incLookup();

  NS_TEST_ASSERT_MSG_EQ(
      stats.getSave(),
      0,
      "expected Save value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLookup(),
      3,
      "expected Lookup value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSuccess(),
      0,
      "expected Success value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getFailed(),
      0,
      "expected Failed value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLate(),
      0,
      "expected Late value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      0,
      "expected TotalSent value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      0,
      "expected TotalExpectedReceive value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepUp(),
      0,
      "expected StepUp value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepDown(),
      0,
      "expected StepDown value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getCache(),
      0,
      "expected CacheHit value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after seperate objects get incremented");
}

void StatsIncrementSuccessStaticValues::DoRun(void) {
  Stats stats;
  Stats stats1;
  Stats stats2;
  Stats stats3;

  stats1.incSuccess();
  stats2.incSuccess();
  stats3.incSuccess();

  NS_TEST_ASSERT_MSG_EQ(
      stats.getSave(),
      0,
      "expected Save value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLookup(),
      0,
      "expected Lookup value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSuccess(),
      3,
      "expected Success value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getFailed(),
      0,
      "expected Failed value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLate(),
      0,
      "expected Late value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      0,
      "expected TotalSent value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      0,
      "expected TotalExpectedReceive value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepUp(),
      0,
      "expected StepUp value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepDown(),
      0,
      "expected StepDown value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getCache(),
      0,
      "expected CacheHit value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after seperate objects get incremented");
}

void StatsIncrementFailedStaticValues::DoRun(void) {
  Stats stats;
  Stats stats1;
  Stats stats2;
  Stats stats3;

  stats1.incFailed();
  stats2.incFailed();
  stats3.incFailed();

  NS_TEST_ASSERT_MSG_EQ(
      stats.getSave(),
      0,
      "expected Save value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLookup(),
      0,
      "expected Lookup value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSuccess(),
      0,
      "expected Success value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getFailed(),
      3,
      "expected Failed value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLate(),
      0,
      "expected Late value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      0,
      "expected TotalSent value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      0,
      "expected TotalExpectedReceive value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepUp(),
      0,
      "expected StepUp value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepDown(),
      0,
      "expected StepDown value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getCache(),
      0,
      "expected CacheHit value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after seperate objects get incremented");
}

void StatsIncrementLateStaticValues::DoRun(void) {
  Stats stats;
  Stats stats1;
  Stats stats2;
  Stats stats3;

  stats1.incLate();
  stats2.incLate();
  stats3.incLate();

  NS_TEST_ASSERT_MSG_EQ(
      stats.getSave(),
      0,
      "expected Save value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLookup(),
      0,
      "expected Lookup value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSuccess(),
      0,
      "expected Success value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getFailed(),
      0,
      "expected Failed value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLate(),
      3,
      "expected Late value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      0,
      "expected TotalSent value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      0,
      "expected TotalExpectedReceive value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepUp(),
      0,
      "expected StepUp value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepDown(),
      0,
      "expected StepDown value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getCache(),
      0,
      "expected CacheHit value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after seperate objects get incremented");
}

void StatsIncrementCacheHitStaticValues::DoRun(void) {
  Stats stats;
  Stats stats1;
  Stats stats2;
  Stats stats3;

  stats1.incCache();
  stats2.incCache();
  stats3.incCache();

  NS_TEST_ASSERT_MSG_EQ(
      stats.getSave(),
      0,
      "expected Save value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLookup(),
      0,
      "expected Lookup value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSuccess(),
      0,
      "expected Success value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getFailed(),
      0,
      "expected Failed value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLate(),
      0,
      "expected Late value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      0,
      "expected TotalSent value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      0,
      "expected TotalExpectedReceive value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepUp(),
      0,
      "expected StepUp value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepDown(),
      0,
      "expected StepDown value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getCache(),
      3,
      "expected CacheHit value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after seperate objects get incremented");
}

void StatsIncrementPowerLossStaticValues::DoRun(void) {
  Stats stats;
  Stats stats1;
  Stats stats2;
  Stats stats3;

  stats1.incPowerloss();
  stats2.incPowerloss();
  stats3.incPowerloss();

  NS_TEST_ASSERT_MSG_EQ(
      stats.getSave(),
      0,
      "expected Save value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLookup(),
      0,
      "expected Lookup value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSuccess(),
      0,
      "expected Success value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getFailed(),
      0,
      "expected Failed value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLate(),
      0,
      "expected Late value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      0,
      "expected TotalSent value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      0,
      "expected TotalExpectedReceive value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepUp(),
      0,
      "expected StepUp value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepDown(),
      0,
      "expected StepDown value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getCache(),
      0,
      "expected CacheHit value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      3,
      "expected PowerLoss value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after seperate objects get incremented");
}

void StatsIncrementPowerRechargedStaticValues::DoRun(void) {
  Stats stats;
  Stats stats1;
  Stats stats2;
  Stats stats3;

  stats1.incPowerRecharge();
  stats2.incPowerRecharge();
  stats3.incPowerRecharge();

  NS_TEST_ASSERT_MSG_EQ(
      stats.getSave(),
      0,
      "expected Save value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLookup(),
      0,
      "expected Lookup value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSuccess(),
      0,
      "expected Success value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getFailed(),
      0,
      "expected Failed value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLate(),
      0,
      "expected Late value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      0,
      "expected TotalSent value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      0,
      "expected TotalExpectedReceive value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepUp(),
      0,
      "expected StepUp value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepDown(),
      0,
      "expected StepDown value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getCache(),
      0,
      "expected CacheHit value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      3,
      "expected PowerRecharged value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after seperate objects get incremented");
}

void StatsIncrementDuplicateMessageStaticValues::DoRun(void) {
  Stats stats;
  Stats stats1;
  Stats stats2;
  Stats stats3;

  stats1.incDuplicate();
  stats2.incDuplicate();
  stats3.incDuplicate();

  NS_TEST_ASSERT_MSG_EQ(
      stats.getSave(),
      0,
      "expected Save value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLookup(),
      0,
      "expected Lookup value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSuccess(),
      0,
      "expected Success value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getFailed(),
      0,
      "expected Failed value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLate(),
      0,
      "expected Late value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      0,
      "expected TotalSent value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      3,
      "expected TotalReceived value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      0,
      "expected TotalExpectedReceive value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      3,
      "expected Duplicate value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepUp(),
      0,
      "expected StepUp value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepDown(),
      0,
      "expected StepDown value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getCache(),
      0,
      "expected CacheHit value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after seperate objects get incremented");
}

void StatsIncrementElectionStepUpStaticValues::DoRun(void) {
  Stats stats;
  Stats stats1;
  Stats stats2;
  Stats stats3;

  stats1.incStepUp();
  stats2.incStepUp();
  stats3.incStepUp();

  NS_TEST_ASSERT_MSG_EQ(
      stats.getSave(),
      0,
      "expected Save value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLookup(),
      0,
      "expected Lookup value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSuccess(),
      0,
      "expected Success value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getFailed(),
      0,
      "expected Failed value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLate(),
      0,
      "expected Late value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      0,
      "expected TotalSent value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      0,
      "expected TotalExpectedReceive value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepUp(),
      3,
      "expected StepUp value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepDown(),
      0,
      "expected StepDown value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getCache(),
      0,
      "expected CacheHit value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after seperate objects get incremented");
}

void StatsIncrementElectionStepDownStaticValues::DoRun(void) {
  Stats stats;
  Stats stats1;
  Stats stats2;
  Stats stats3;

  stats1.incStepDown();
  stats2.incStepDown();
  stats3.incStepDown();

  NS_TEST_ASSERT_MSG_EQ(
      stats.getSave(),
      0,
      "expected Save value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLookup(),
      0,
      "expected Lookup value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSuccess(),
      0,
      "expected Success value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getFailed(),
      0,
      "expected Failed value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLate(),
      0,
      "expected Late value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      0,
      "expected TotalSent value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      0,
      "expected TotalExpectedReceive value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepUp(),
      0,
      "expected StepUp value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepDown(),
      3,
      "expected StepDown value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getCache(),
      0,
      "expected CacheHit value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after seperate objects get incremented");
}

void StatsAddPendingStaticValues::DoRun(void) {
  Stats stats;
  Stats stats1;
  Stats stats2;
  Stats stats3;

  stats1.addPending(30);
  stats2.addPending(30);
  stats3.addPending(30);

  NS_TEST_ASSERT_MSG_EQ(
      stats.getSave(),
      0,
      "expected Save value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLookup(),
      0,
      "expected Lookup value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSuccess(),
      0,
      "expected Success value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getFailed(),
      0,
      "expected Failed value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLate(),
      0,
      "expected Late value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      90,
      "expected TotalPending value to be 90 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      0,
      "expected TotalSent value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      0,
      "expected TotalExpectedReceive value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepUp(),
      0,
      "expected StepUp value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepDown(),
      0,
      "expected StepDown value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getCache(),
      0,
      "expected CacheHit value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after seperate objects get incremented");
}

void StatsIncrementSentUnknownStaticValues::DoRun(void) {
  Stats stats;
  Stats stats1;
  Stats stats2;
  Stats stats3;

  stats1.addSent(Stats::Type::UNKOWN);
  stats2.addSent(Stats::Type::UNKOWN);
  stats3.addSent(Stats::Type::UNKOWN);

  NS_TEST_ASSERT_MSG_EQ(
      stats.getSave(),
      0,
      "expected Save value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLookup(),
      0,
      "expected Lookup value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSuccess(),
      0,
      "expected Success value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getFailed(),
      0,
      "expected Failed value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLate(),
      0,
      "expected Late value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      3,
      "expected TotalSent value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      3,
      "expected TotalExpectedReceive value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepUp(),
      0,
      "expected StepUp value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepDown(),
      0,
      "expected StepDown value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getCache(),
      0,
      "expected CacheHit value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      3,
      "expected SentType UNKOWN value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      3,
      "expected ExpectedType UNKOWN value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after seperate objects get incremented");
}

void StatsIncrementSentPingStaticValues::DoRun(void) {
  Stats stats;
  Stats stats1;
  Stats stats2;
  Stats stats3;

  stats1.addSent(Stats::Type::PING);
  stats2.addSent(Stats::Type::PING);
  stats3.addSent(Stats::Type::PING);

  NS_TEST_ASSERT_MSG_EQ(
      stats.getSave(),
      0,
      "expected Save value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLookup(),
      0,
      "expected Lookup value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSuccess(),
      0,
      "expected Success value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getFailed(),
      0,
      "expected Failed value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLate(),
      0,
      "expected Late value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      3,
      "expected TotalSent value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      3,
      "expected TotalExpectedReceive value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepUp(),
      0,
      "expected StepUp value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepDown(),
      0,
      "expected StepDown value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getCache(),
      0,
      "expected CacheHit value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      3,
      "expected SentType PING value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      3,
      "expected ExpectedType PING value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after seperate objects get incremented");
}

void StatsIncrementSentModeChangeStaticValues::DoRun(void) {
  Stats stats;
  Stats stats1;
  Stats stats2;
  Stats stats3;

  stats1.addSent(Stats::Type::MODE_CHANGE);
  stats2.addSent(Stats::Type::MODE_CHANGE);
  stats3.addSent(Stats::Type::MODE_CHANGE);

  NS_TEST_ASSERT_MSG_EQ(
      stats.getSave(),
      0,
      "expected Save value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLookup(),
      0,
      "expected Lookup value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSuccess(),
      0,
      "expected Success value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getFailed(),
      0,
      "expected Failed value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLate(),
      0,
      "expected Late value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      3,
      "expected TotalSent value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      3,
      "expected TotalExpectedReceive value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepUp(),
      0,
      "expected StepUp value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepDown(),
      0,
      "expected StepDown value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getCache(),
      0,
      "expected CacheHit value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      3,
      "expected SentType MODE_CHANGE value to be 03after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      3,
      "expected ExpectedType MODE_CHANGE value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after seperate objects get incremented");
}

void StatsIncrementSentElectionRequestStaticValues::DoRun(void) {
  Stats stats;
  Stats stats1;
  Stats stats2;
  Stats stats3;

  stats1.addSent(Stats::Type::ELECTION_REQUEST);
  stats2.addSent(Stats::Type::ELECTION_REQUEST);
  stats3.addSent(Stats::Type::ELECTION_REQUEST);

  NS_TEST_ASSERT_MSG_EQ(
      stats.getSave(),
      0,
      "expected Save value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLookup(),
      0,
      "expected Lookup value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSuccess(),
      0,
      "expected Success value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getFailed(),
      0,
      "expected Failed value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLate(),
      0,
      "expected Late value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      3,
      "expected TotalSent value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      3,
      "expected TotalExpectedReceive value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepUp(),
      0,
      "expected StepUp value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepDown(),
      0,
      "expected StepDown value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getCache(),
      0,
      "expected CacheHit value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      3,
      "expected SentType ELECTION_REQUEST value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      3,
      "expected ExpectedType ELECTION_REQUEST value to be 3 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after seperate objects get incremented");
}

void StatsIncrementSentStoreStaticValues::DoRun(void) {
  Stats stats;
  Stats stats1;
  Stats stats2;
  Stats stats3;

  stats1.addSent(Stats::Type::STORE);
  stats2.addSent(Stats::Type::STORE);
  stats3.addSent(Stats::Type::STORE);

  NS_TEST_ASSERT_MSG_EQ(
      stats.getSave(),
      0,
      "expected Save value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLookup(),
      0,
      "expected Lookup value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSuccess(),
      0,
      "expected Success value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getFailed(),
      0,
      "expected Failed value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLate(),
      0,
      "expected Late value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      3,
      "expected TotalSent value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      3,
      "expected TotalExpectedReceive value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepUp(),
      0,
      "expected StepUp value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepDown(),
      0,
      "expected StepDown value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getCache(),
      0,
      "expected CacheHit value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      3,
      "expected SentType STORE value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      3,
      "expected ExpectedType STORE value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after seperate objects get incremented");
}

void StatsIncrementSentLookupStaticValues::DoRun(void) {
  Stats stats;
  Stats stats1;
  Stats stats2;
  Stats stats3;

  stats1.addSent(Stats::Type::LOOKUP);
  stats2.addSent(Stats::Type::LOOKUP);
  stats3.addSent(Stats::Type::LOOKUP);

  NS_TEST_ASSERT_MSG_EQ(
      stats.getSave(),
      0,
      "expected Save value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLookup(),
      0,
      "expected Lookup value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSuccess(),
      0,
      "expected Success value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getFailed(),
      0,
      "expected Failed value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLate(),
      0,
      "expected Late value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      3,
      "expected TotalSent value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      3,
      "expected TotalExpectedReceive value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepUp(),
      0,
      "expected StepUp value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepDown(),
      0,
      "expected StepDown value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getCache(),
      0,
      "expected CacheHit value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      3,
      "expected SentType LOOKUP value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      3,
      "expected ExpectedType LOOKUP value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after seperate objects get incremented");
}

void StatsIncrementSentLookupResponseStaticValues::DoRun(void) {
  Stats stats;
  Stats stats1;
  Stats stats2;
  Stats stats3;

  stats1.addSent(Stats::Type::LOOKUP_RESPONSE);
  stats2.addSent(Stats::Type::LOOKUP_RESPONSE);
  stats3.addSent(Stats::Type::LOOKUP_RESPONSE);

  NS_TEST_ASSERT_MSG_EQ(
      stats.getSave(),
      0,
      "expected Save value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLookup(),
      0,
      "expected Lookup value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSuccess(),
      0,
      "expected Success value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getFailed(),
      0,
      "expected Failed value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLate(),
      0,
      "expected Late value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      3,
      "expected TotalSent value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      3,
      "expected TotalExpectedReceive value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepUp(),
      0,
      "expected StepUp value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepDown(),
      0,
      "expected StepDown value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getCache(),
      0,
      "expected CacheHit value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      3,
      "expected SentType LOOKUP_RESPONSE value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      3,
      "expected ExpectedType LOOKUP_RESPONSE value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after seperate objects get incremented");
}

void StatsIncrementSentTransferStaticValues::DoRun(void) {
  Stats stats;
  Stats stats1;
  Stats stats2;
  Stats stats3;

  stats1.addSent(Stats::Type::TRANSFER);
  stats2.addSent(Stats::Type::TRANSFER);
  stats3.addSent(Stats::Type::TRANSFER);

  NS_TEST_ASSERT_MSG_EQ(
      stats.getSave(),
      0,
      "expected Save value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLookup(),
      0,
      "expected Lookup value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSuccess(),
      0,
      "expected Success value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getFailed(),
      0,
      "expected Failed value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLate(),
      0,
      "expected Late value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      3,
      "expected TotalSent value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      3,
      "expected TotalExpectedReceive value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepUp(),
      0,
      "expected StepUp value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepDown(),
      0,
      "expected StepDown value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getCache(),
      0,
      "expected CacheHit value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      3,
      "expected SentType TRANSFER value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      3,
      "expected ExpectedType TRANSFER value to be 3 after seperate objects get incremented");
}

void StatsIncrementSentUnknownMultipleStaticValues::DoRun(void) {
  Stats stats;
  Stats stats1;
  Stats stats2;
  Stats stats3;

  stats1.addSent(Stats::Type::UNKOWN, 22);
  stats2.addSent(Stats::Type::UNKOWN, 22);
  stats3.addSent(Stats::Type::UNKOWN, 22);

  NS_TEST_ASSERT_MSG_EQ(
      stats.getSave(),
      0,
      "expected Save value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLookup(),
      0,
      "expected Lookup value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSuccess(),
      0,
      "expected Success value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getFailed(),
      0,
      "expected Failed value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLate(),
      0,
      "expected Late value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      3,
      "expected TotalSent value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      66,
      "expected TotalExpectedReceive value to be 66 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepUp(),
      0,
      "expected StepUp value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepDown(),
      0,
      "expected StepDown value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getCache(),
      0,
      "expected CacheHit value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      3,
      "expected SentType UNKOWN value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      66,
      "expected ExpectedType UNKOWN value to be 66 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after seperate objects get incremented");
}

void StatsIncrementSentPingMultipleStaticValues::DoRun(void) {
  Stats stats;
  Stats stats1;
  Stats stats2;
  Stats stats3;

  stats1.addSent(Stats::Type::PING, 22);
  stats2.addSent(Stats::Type::PING, 22);
  stats3.addSent(Stats::Type::PING, 22);

  NS_TEST_ASSERT_MSG_EQ(
      stats.getSave(),
      0,
      "expected Save value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLookup(),
      0,
      "expected Lookup value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSuccess(),
      0,
      "expected Success value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getFailed(),
      0,
      "expected Failed value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLate(),
      0,
      "expected Late value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      3,
      "expected TotalSent value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      66,
      "expected TotalExpectedReceive value to be 66 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepUp(),
      0,
      "expected StepUp value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepDown(),
      0,
      "expected StepDown value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getCache(),
      0,
      "expected CacheHit value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      3,
      "expected SentType PING value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      66,
      "expected ExpectedType PING value to be 66 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after seperate objects get incremented");
}

void StatsIncrementSentModeChangeMultipleStaticValues::DoRun(void) {
  Stats stats;
  Stats stats1;
  Stats stats2;
  Stats stats3;

  stats1.addSent(Stats::Type::MODE_CHANGE, 22);
  stats2.addSent(Stats::Type::MODE_CHANGE, 22);
  stats3.addSent(Stats::Type::MODE_CHANGE, 22);

  NS_TEST_ASSERT_MSG_EQ(
      stats.getSave(),
      0,
      "expected Save value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLookup(),
      0,
      "expected Lookup value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSuccess(),
      0,
      "expected Success value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getFailed(),
      0,
      "expected Failed value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLate(),
      0,
      "expected Late value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      3,
      "expected TotalSent value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      66,
      "expected TotalExpectedReceive value to be 66 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepUp(),
      0,
      "expected StepUp value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepDown(),
      0,
      "expected StepDown value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getCache(),
      0,
      "expected CacheHit value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      3,
      "expected SentType MODE_CHANGE value to be 03after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      66,
      "expected ExpectedType MODE_CHANGE value to be 66 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after seperate objects get incremented");
}

void StatsIncrementSentElectionRequestMultipleStaticValues::DoRun(void) {
  Stats stats;
  Stats stats1;
  Stats stats2;
  Stats stats3;

  stats1.addSent(Stats::Type::ELECTION_REQUEST, 22);
  stats2.addSent(Stats::Type::ELECTION_REQUEST, 22);
  stats3.addSent(Stats::Type::ELECTION_REQUEST, 22);

  NS_TEST_ASSERT_MSG_EQ(
      stats.getSave(),
      0,
      "expected Save value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLookup(),
      0,
      "expected Lookup value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSuccess(),
      0,
      "expected Success value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getFailed(),
      0,
      "expected Failed value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLate(),
      0,
      "expected Late value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      3,
      "expected TotalSent value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      66,
      "expected TotalExpectedReceive value to be 66 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepUp(),
      0,
      "expected StepUp value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepDown(),
      0,
      "expected StepDown value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getCache(),
      0,
      "expected CacheHit value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      3,
      "expected SentType ELECTION_REQUEST value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      66,
      "expected ExpectedType ELECTION_REQUEST value to be 66 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after seperate objects get incremented");
}

void StatsIncrementSentStoreMultipleStaticValues::DoRun(void) {
  Stats stats;
  Stats stats1;
  Stats stats2;
  Stats stats3;

  stats1.addSent(Stats::Type::STORE, 22);
  stats2.addSent(Stats::Type::STORE, 22);
  stats3.addSent(Stats::Type::STORE, 22);

  NS_TEST_ASSERT_MSG_EQ(
      stats.getSave(),
      0,
      "expected Save value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLookup(),
      0,
      "expected Lookup value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSuccess(),
      0,
      "expected Success value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getFailed(),
      0,
      "expected Failed value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLate(),
      0,
      "expected Late value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      3,
      "expected TotalSent value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      66,
      "expected TotalExpectedReceive value to be 66 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepUp(),
      0,
      "expected StepUp value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepDown(),
      0,
      "expected StepDown value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getCache(),
      0,
      "expected CacheHit value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      3,
      "expected SentType STORE value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      66,
      "expected ExpectedType STORE value to be 66 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after seperate objects get incremented");
}

void StatsIncrementSentLookupMultipleStaticValues::DoRun(void) {
  Stats stats;
  Stats stats1;
  Stats stats2;
  Stats stats3;

  stats1.addSent(Stats::Type::LOOKUP, 22);
  stats2.addSent(Stats::Type::LOOKUP, 22);
  stats3.addSent(Stats::Type::LOOKUP, 22);

  NS_TEST_ASSERT_MSG_EQ(
      stats.getSave(),
      0,
      "expected Save value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLookup(),
      0,
      "expected Lookup value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSuccess(),
      0,
      "expected Success value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getFailed(),
      0,
      "expected Failed value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLate(),
      0,
      "expected Late value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      3,
      "expected TotalSent value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      66,
      "expected TotalExpectedReceive value to be 66 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepUp(),
      0,
      "expected StepUp value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepDown(),
      0,
      "expected StepDown value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getCache(),
      0,
      "expected CacheHit value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      3,
      "expected SentType LOOKUP value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      66,
      "expected ExpectedType LOOKUP value to be 66 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after seperate objects get incremented");
}

void StatsIncrementSentLookupResponseMultipleStaticValues::DoRun(void) {
  Stats stats;
  Stats stats1;
  Stats stats2;
  Stats stats3;

  stats1.addSent(Stats::Type::LOOKUP_RESPONSE, 22);
  stats2.addSent(Stats::Type::LOOKUP_RESPONSE, 22);
  stats3.addSent(Stats::Type::LOOKUP_RESPONSE, 22);

  NS_TEST_ASSERT_MSG_EQ(
      stats.getSave(),
      0,
      "expected Save value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLookup(),
      0,
      "expected Lookup value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSuccess(),
      0,
      "expected Success value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getFailed(),
      0,
      "expected Failed value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLate(),
      0,
      "expected Late value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      3,
      "expected TotalSent value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      66,
      "expected TotalExpectedReceive value to be 66 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepUp(),
      0,
      "expected StepUp value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepDown(),
      0,
      "expected StepDown value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getCache(),
      0,
      "expected CacheHit value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      3,
      "expected SentType LOOKUP_RESPONSE value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      66,
      "expected ExpectedType LOOKUP_RESPONSE value to be 66 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after seperate objects get incremented");
}

void StatsIncrementSentTransferMultipleStaticValues::DoRun(void) {
  Stats stats;
  Stats stats1;
  Stats stats2;
  Stats stats3;

  stats1.addSent(Stats::Type::TRANSFER, 22);
  stats2.addSent(Stats::Type::TRANSFER, 22);
  stats3.addSent(Stats::Type::TRANSFER, 22);

  NS_TEST_ASSERT_MSG_EQ(
      stats.getSave(),
      0,
      "expected Save value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLookup(),
      0,
      "expected Lookup value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSuccess(),
      0,
      "expected Success value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getFailed(),
      0,
      "expected Failed value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLate(),
      0,
      "expected Late value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      3,
      "expected TotalSent value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      0,
      "expected TotalReceived value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      66,
      "expected TotalExpectedReceive value to be 66 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepUp(),
      0,
      "expected StepUp value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepDown(),
      0,
      "expected StepDown value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getCache(),
      0,
      "expected CacheHit value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      3,
      "expected SentType TRANSFER value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      66,
      "expected ExpectedType TRANSFER value to be 66 after seperate objects get incremented");
}

void StatsIncrementReceivedUnknownStaticValues::DoRun(void) {
  Stats stats;
  Stats stats1;
  Stats stats2;
  Stats stats3;

  stats1.incReceived(Stats::Type::UNKOWN);
  stats2.incReceived(Stats::Type::UNKOWN);
  stats3.incReceived(Stats::Type::UNKOWN);

  NS_TEST_ASSERT_MSG_EQ(
      stats.getSave(),
      0,
      "expected Save value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLookup(),
      0,
      "expected Lookup value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSuccess(),
      0,
      "expected Success value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getFailed(),
      0,
      "expected Failed value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLate(),
      0,
      "expected Late value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      0,
      "expected TotalSent value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      3,
      "expected TotalReceived value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      0,
      "expected TotalExpectedReceive value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepUp(),
      0,
      "expected StepUp value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepDown(),
      0,
      "expected StepDown value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getCache(),
      0,
      "expected CacheHit value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      3,
      "expected ReceivedType UNKOWN value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after seperate objects get incremented");
}

void StatsIncrementReceivedPingStaticValues::DoRun(void) {
  Stats stats;
  Stats stats1;
  Stats stats2;
  Stats stats3;

  stats1.incReceived(Stats::Type::PING);
  stats2.incReceived(Stats::Type::PING);
  stats3.incReceived(Stats::Type::PING);

  NS_TEST_ASSERT_MSG_EQ(
      stats.getSave(),
      0,
      "expected Save value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLookup(),
      0,
      "expected Lookup value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSuccess(),
      0,
      "expected Success value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getFailed(),
      0,
      "expected Failed value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLate(),
      0,
      "expected Late value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      0,
      "expected TotalSent value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      3,
      "expected TotalReceived value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      0,
      "expected TotalExpectedReceive value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepUp(),
      0,
      "expected StepUp value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepDown(),
      0,
      "expected StepDown value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getCache(),
      0,
      "expected CacheHit value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      3,
      "expected ReceivedType PING value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after seperate objects get incremented");
}

void StatsIncrementReceivedModeChangeStaticValues::DoRun(void) {
  Stats stats;
  Stats stats1;
  Stats stats2;
  Stats stats3;

  stats1.incReceived(Stats::Type::MODE_CHANGE);
  stats2.incReceived(Stats::Type::MODE_CHANGE);
  stats3.incReceived(Stats::Type::MODE_CHANGE);

  NS_TEST_ASSERT_MSG_EQ(
      stats.getSave(),
      0,
      "expected Save value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLookup(),
      0,
      "expected Lookup value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSuccess(),
      0,
      "expected Success value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getFailed(),
      0,
      "expected Failed value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLate(),
      0,
      "expected Late value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      0,
      "expected TotalSent value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      3,
      "expected TotalReceived value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      0,
      "expected TotalExpectedReceive value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepUp(),
      0,
      "expected StepUp value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepDown(),
      0,
      "expected StepDown value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getCache(),
      0,
      "expected CacheHit value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      3,
      "expected ReceivedType MODE_CHANGE value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after seperate objects get incremented");
}

void StatsIncrementReceivedElectionRequestStaticValues::DoRun(void) {
  Stats stats;
  Stats stats1;
  Stats stats2;
  Stats stats3;

  stats1.incReceived(Stats::Type::ELECTION_REQUEST);
  stats2.incReceived(Stats::Type::ELECTION_REQUEST);
  stats3.incReceived(Stats::Type::ELECTION_REQUEST);

  NS_TEST_ASSERT_MSG_EQ(
      stats.getSave(),
      0,
      "expected Save value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLookup(),
      0,
      "expected Lookup value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSuccess(),
      0,
      "expected Success value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getFailed(),
      0,
      "expected Failed value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLate(),
      0,
      "expected Late value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      0,
      "expected TotalSent value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      3,
      "expected TotalReceived value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      0,
      "expected TotalExpectedReceive value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepUp(),
      0,
      "expected StepUp value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepDown(),
      0,
      "expected StepDown value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getCache(),
      0,
      "expected CacheHit value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      3,
      "expected ReceivedType ELECTION_REQUEST value to be 3 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after seperate objects get incremented");
}

void StatsIncrementReceivedStoreStaticValues::DoRun(void) {
  Stats stats;
  Stats stats1;
  Stats stats2;
  Stats stats3;

  stats1.incReceived(Stats::Type::STORE);
  stats2.incReceived(Stats::Type::STORE);
  stats3.incReceived(Stats::Type::STORE);

  NS_TEST_ASSERT_MSG_EQ(
      stats.getSave(),
      0,
      "expected Save value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLookup(),
      0,
      "expected Lookup value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSuccess(),
      0,
      "expected Success value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getFailed(),
      0,
      "expected Failed value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLate(),
      0,
      "expected Late value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      0,
      "expected TotalSent value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      3,
      "expected TotalReceived value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      0,
      "expected TotalExpectedReceive value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepUp(),
      0,
      "expected StepUp value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepDown(),
      0,
      "expected StepDown value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getCache(),
      0,
      "expected CacheHit value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      3,
      "expected ReceivedType STORE value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after seperate objects get incremented");
}

void StatsIncrementReceivedLookupnStaticValues::DoRun(void) {
  Stats stats;
  Stats stats1;
  Stats stats2;
  Stats stats3;

  stats1.incReceived(Stats::Type::LOOKUP);
  stats2.incReceived(Stats::Type::LOOKUP);
  stats3.incReceived(Stats::Type::LOOKUP);

  NS_TEST_ASSERT_MSG_EQ(
      stats.getSave(),
      0,
      "expected Save value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLookup(),
      0,
      "expected Lookup value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSuccess(),
      0,
      "expected Success value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getFailed(),
      0,
      "expected Failed value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLate(),
      0,
      "expected Late value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      0,
      "expected TotalSent value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      3,
      "expected TotalReceived value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      0,
      "expected TotalExpectedReceive value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepUp(),
      0,
      "expected StepUp value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepDown(),
      0,
      "expected StepDown value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getCache(),
      0,
      "expected CacheHit value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      3,
      "expected ReceivedType LOOKUP value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after seperate objects get incremented");
}

void StatsIncrementReceivedLookupResponseStaticValues::DoRun(void) {
  Stats stats;
  Stats stats1;
  Stats stats2;
  Stats stats3;

  stats1.incReceived(Stats::Type::LOOKUP_RESPONSE);
  stats2.incReceived(Stats::Type::LOOKUP_RESPONSE);
  stats3.incReceived(Stats::Type::LOOKUP_RESPONSE);

  NS_TEST_ASSERT_MSG_EQ(
      stats.getSave(),
      0,
      "expected Save value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLookup(),
      0,
      "expected Lookup value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSuccess(),
      0,
      "expected Success value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getFailed(),
      0,
      "expected Failed value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLate(),
      0,
      "expected Late value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      0,
      "expected TotalSent value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      3,
      "expected TotalReceived value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      0,
      "expected TotalExpectedReceive value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepUp(),
      0,
      "expected StepUp value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepDown(),
      0,
      "expected StepDown value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getCache(),
      0,
      "expected CacheHit value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      3,
      "expected ReceivedType LOOKUP_RESPONSE value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      0,
      "expected ReceivedType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after seperate objects get incremented");
}

void StatsIncrementReceivedTransferStaticValues::DoRun(void) {
  Stats stats;
  Stats stats1;
  Stats stats2;
  Stats stats3;

  stats1.incReceived(Stats::Type::TRANSFER);
  stats2.incReceived(Stats::Type::TRANSFER);
  stats3.incReceived(Stats::Type::TRANSFER);

  NS_TEST_ASSERT_MSG_EQ(
      stats.getSave(),
      0,
      "expected Save value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLookup(),
      0,
      "expected Lookup value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSuccess(),
      0,
      "expected Success value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getFailed(),
      0,
      "expected Failed value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getLate(),
      0,
      "expected Late value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPending(),
      0,
      "expected TotalPending value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalSent(),
      0,
      "expected TotalSent value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalReceived(),
      3,
      "expected TotalReceived value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getTotalExpectedReceive(),
      0,
      "expected TotalExpectedReceive value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getDuplicate(),
      0,
      "expected Duplicate value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepUp(),
      0,
      "expected StepUp value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getStepDown(),
      0,
      "expected StepDown value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getCache(),
      0,
      "expected CacheHit value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerloss(),
      0,
      "expected PowerLoss value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getPowerRecharge(),
      0,
      "expected PowerRecharged value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::UNKOWN),
      0,
      "expected SentType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::PING),
      0,
      "expected SentType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::MODE_CHANGE),
      0,
      "expected SentType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::ELECTION_REQUEST),
      0,
      "expected SentType ELECTION_REQUEST value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::STORE),
      0,
      "expected SentType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP),
      0,
      "expected SentType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected SentType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getSent(Stats::Type::TRANSFER),
      0,
      "expected SentType TRANSFER value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::UNKOWN),
      0,
      "expected ReceivedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::PING),
      0,
      "expected ReceivedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::MODE_CHANGE),
      0,
      "expected ReceivedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ReceivedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::STORE),
      0,
      "expected ReceivedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP),
      0,
      "expected ReceivedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ReceivedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getReceived(Stats::Type::TRANSFER),
      3,
      "expected ReceivedType TRANSFER value to be 3 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::UNKOWN),
      0,
      "expected ExpectedType UNKOWN value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::PING),
      0,
      "expected ExpectedType PING value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::MODE_CHANGE),
      0,
      "expected ExpectedType MODE_CHANGE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::ELECTION_REQUEST),
      0,
      "expected ExpectedType ELECTION_REQUEST value to be 0 after seperate objects get "
      "incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::STORE),
      0,
      "expected ExpectedType STORE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP),
      0,
      "expected ExpectedType LOOKUP value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::LOOKUP_RESPONSE),
      0,
      "expected ExpectedType LOOKUP_RESPONSE value to be 0 after seperate objects get incremented");
  NS_TEST_ASSERT_MSG_EQ(
      stats.getExpectedReceive(Stats::Type::TRANSFER),
      0,
      "expected ExpectedType TRANSFER value to be 0 after seperate objects get incremented");
}

////////////////////////
/// setup function for each test should make sure that the
/// stats object is rest before the test begins
////////////////////////
void TypeStringValidValues::DoSetup() {
  Stats stats;
  stats.Reset();
}
void InitalSaveValue::DoSetup() {
  Stats stats;
  stats.Reset();
}
void InitalLookupValue::DoSetup() {
  Stats stats;
  stats.Reset();
}
void InitalSuccessValue::DoSetup() {
  Stats stats;
  stats.Reset();
}
void InitalFailedValue::DoSetup() {
  Stats stats;
  stats.Reset();
}
void InitalLateValue::DoSetup() {
  Stats stats;
  stats.Reset();
}
void InitalTotalPendingValue::DoSetup() {
  Stats stats;
  stats.Reset();
}
void InitalTotalSentValue::DoSetup() {
  Stats stats;
  stats.Reset();
}
void InitalTotalReceivedValue::DoSetup() {
  Stats stats;
  stats.Reset();
}
void InitalTotalExpectedReceiveValue::DoSetup() {
  Stats stats;
  stats.Reset();
}
void InitalDuplicateValue::DoSetup() {
  Stats stats;
  stats.Reset();
}
void InitalStepUpValue::DoSetup() {
  Stats stats;
  stats.Reset();
}
void InitalStepDownValue::DoSetup() {
  Stats stats;
  stats.Reset();
}
void InitalCacheHitValue::DoSetup() {
  Stats stats;
  stats.Reset();
}
void InitalPowerLossValue::DoSetup() {
  Stats stats;
  stats.Reset();
}
void InitalPowerRechargedValue::DoSetup() {
  Stats stats;
  stats.Reset();
}
void InitalSentTypeValue::DoSetup() {
  Stats stats;
  stats.Reset();
}
void InitalReceivedTypeValue::DoSetup() {
  Stats stats;
  stats.Reset();
}
void InitalExpectedTypeValue::DoSetup() {
  Stats stats;
  stats.Reset();
}
void StatsIncrementSaveOnlyOnce::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementLookupOnlyOnce::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementSuccessOnlyOnce::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementFailedOnlyOnce::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementLateOnlyOnce::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementCacheHitOnlyOnce::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementPowerLossOnlyOnce::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementPowerRechargedOnlyOnce::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementDuplicateMessageOnlyOnce::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementElectionStepUpOnlyOnce::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementElectionStepDownOnlyOnce::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsAddPendingOnlyOnce::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementSentUnknownOnlyOnce::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementSentPingOnlyOnce::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementSentModeChangeOnlyOnce::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementSentElectionRequestOnlyOnce::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementSentStoreOnlyOnce::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementSentLookupOnlyOnce::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementSentLookupResponseOnlyOnce::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementSentTransferOnlyOnce::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementSentUnknownMultipleOnlyOnce::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementSentPingMultipleOnlyOnce::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementSentModeChangeMultipleOnlyOnce::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementSentElectionRequestMultipleOnlyOnce::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementSentStoreMultipleOnlyOnce::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementSentLookupMultipleOnlyOnce::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementSentLookupResponseMultipleOnlyOnce::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementSentTransferMultipleOnlyOnce::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementReceivedUnknownOnlyOnce::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementReceivedPingOnlyOnce::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementReceivedModeChangeOnlyOnce::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementReceivedElectionRequestOnlyOnce::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementReceivedStoreOnlyOnce::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementReceivedLookupnOnlyOnce::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementReceivedLookupResponseOnlyOnce::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementReceivedTransferOnlyOnce::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementSaveMultipleTimes::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementLookupMultipleTimes::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementSuccessMultipleTimes::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementFailedMultipleTimes::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementLateMultipleTimes::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementCacheHitMultipleTimes::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementPowerLossMultipleTimes::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementPowerRechargedMultipleTimes::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementDuplicateMessageMultipleTimes::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementElectionStepUpMultipleTimes::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementElectionStepDownMultipleTimes::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsAddPendingMultipleTimes::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementSentUnknownMultipleTimes::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementSentPingMultipleTimes::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementSentModeChangeMultipleTimes::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementSentElectionRequestMultipleTimes::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementSentStoreMultipleTimes::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementSentLookupMultipleTimes::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementSentLookupResponseMultipleTimes::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementSentTransferMultipleTimes::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementSentUnknownMultipleMultipleTimes::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementSentPingMultipleMultipleTimes::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementSentModeChangeMultipleMultipleTimes::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementSentElectionRequestMultipleMultipleTimes::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementSentStoreMultipleMultipleTimes::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementSentLookupMultipleMultipleTimes::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementSentLookupResponseMultipleMultipleTimes::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementSentTransferMultipleMultipleTimes::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementReceivedUnknownMultipleTimes::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementReceivedPingMultipleTimes::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementReceivedModeChangeMultipleTimes::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementReceivedElectionRequestMultipleTimes::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementReceivedStoreMultipleTimes::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementReceivedLookupnMultipleTimes::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementReceivedLookupResponseMultipleTimes::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementReceivedTransferMultipleTimes::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementSaveStaticValues::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementLookupStaticValues::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementSuccessStaticValues::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementFailedStaticValues::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementLateStaticValues::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementCacheHitStaticValues::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementPowerLossStaticValues::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementPowerRechargedStaticValues::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementDuplicateMessageStaticValues::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementElectionStepUpStaticValues::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementElectionStepDownStaticValues::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsAddPendingStaticValues::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementSentUnknownStaticValues::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementSentPingStaticValues::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementSentModeChangeStaticValues::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementSentElectionRequestStaticValues::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementSentStoreStaticValues::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementSentLookupStaticValues::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementSentLookupResponseStaticValues::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementSentTransferStaticValues::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementSentUnknownMultipleStaticValues::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementSentPingMultipleStaticValues::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementSentModeChangeMultipleStaticValues::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementSentElectionRequestMultipleStaticValues::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementSentStoreMultipleStaticValues::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementSentLookupMultipleStaticValues::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementSentLookupResponseMultipleStaticValues::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementSentTransferMultipleStaticValues::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementReceivedUnknownStaticValues::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementReceivedPingStaticValues::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementReceivedModeChangeStaticValues::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementReceivedElectionRequestStaticValues::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementReceivedStoreStaticValues::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementReceivedLookupnStaticValues::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementReceivedLookupResponseStaticValues::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
void StatsIncrementReceivedTransferStaticValues::DoSetup(void) {
  Stats stats;
  stats.Reset();
}

void StatsPrintDefaultPrefix::DoSetup(void) {
  Stats stats;
  stats.Reset();
}

void StatsPrintWithPrefix::DoSetup(void) {
  Stats stats;
  stats.Reset();
}
