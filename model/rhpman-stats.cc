
#include "rhpman-stats.h"

static uint64_t saves;
static uint64_t lookups;
static uint64_t lookupSuccess;
static uint64_t lookupFailed;
static uint64_t lookupLate;
static uint64_t cacheHits;
static uint64_t pending;

static uint64_t stepUps;
static uint64_t stepDowns;

static uint64_t totalSent;
static uint64_t totalReceived;
static uint64_t duplicatesReceived;

static uint64_t sentCounters[TYPE_ENUM_SIZE];
static uint64_t receivedCounters[TYPE_ENUM_SIZE];

namespace rhpman {
using namespace ns3;

Stats::Stats() {
  static bool alreadyInitalized = false;

  if (!alreadyInitalized) {
    alreadyInitalized = true;
    Reset();
  }
}

Stats::~Stats() {}

std::string Stats::TypeString(Stats::Type type) {
  switch (type) {
    case REPLICATION_ANNOUNCEMENT:
      return "REPLICATION_ANNOUNCEMENT";
    case PING:
      return "PING";
    case MODE_CHANGE:
      return "MODE_CHANGE";
    case ELECTION_REQUEST:
      return "ELECTION_REQUEST";
    case ELECTION_FITNESS:
      return "ELECTION_FITNESS";
    case STORE:
      return "STORE";
    case LOOKUP:
      return "LOOKUP";
    case LOOKUP_RESPONSE:
      return "LOOKUP_RESPONSE";
    case TRANSFER:
      return "TRANSFER";
    case UNKOWN:
    default:
      return "UNKOWN";
  }
}

void Stats::Reset() {
  saves = 0;
  lookups = 0;
  lookupSuccess = 0;
  lookupFailed = 0;
  lookupLate = 0;
  cacheHits = 0;
  pending = 0;

  stepUps = 0;
  stepDowns = 0;

  totalSent = 0;
  totalReceived = 0;
  duplicatesReceived = 0;

  for (size_t i = 0; i < TYPE_ENUM_SIZE; i++) {
    sentCounters[i] = 0;
    receivedCounters[i] = 0;
  }
}

void Stats::Print(std::string prefix) {
  // lookup stats
  std::cout << prefix << "TotalSaves\t" << unsigned(saves) << "\n";
  std::cout << prefix << "TotalLookups\t" << unsigned(lookups) << "\n";
  std::cout << prefix << "TotalSuccess\t" << unsigned(lookupSuccess) << "\n";
  std::cout << prefix << "TotalFailed\t" << unsigned(lookupFailed) << "\n";
  std::cout << prefix << "TotalLate\t" << unsigned(lookupLate) << "\n";
  std::cout << prefix << "TotalCacheHits\t" << unsigned(cacheHits) << "\n";
  std::cout << prefix << "TotalPending\t" << unsigned(pending) << "\n";

  std::cout << prefix << "TotalStepUp\t" << unsigned(stepUps) << "\n";
  std::cout << prefix << "TotalStepDowns\t" << unsigned(stepDowns) << "\n";

  // message stats
  std::cout << prefix << "TotalSent\t" << unsigned(totalSent) << "\n";
  std::cout << prefix << "TotalReceived\t" << unsigned(totalReceived) << "\n";
  std::cout << prefix << "TotalDuplicates\t" << unsigned(duplicatesReceived) << "\n";

  for (size_t i = 0; i < TYPE_ENUM_SIZE; i++) {
    std::cout << prefix << "Total" << TypeString(static_cast<Stats::Type>(i)) << "Sent\t"
              << unsigned(sentCounters[i]) << "\n";
  }

  for (size_t i = 0; i < TYPE_ENUM_SIZE; i++) {
    std::cout << prefix << "Total" << TypeString(static_cast<Stats::Type>(i)) << "Received\t"
              << unsigned(receivedCounters[i]) << "\n";
  }
}

void Stats::incSave() { saves++; }

void Stats::incLookup() { lookups++; }

void Stats::incSuccess() { lookupSuccess++; }

void Stats::incFailed() { lookupFailed++; }

void Stats::incLate() { lookupLate++; }

void Stats::incCache() { cacheHits++; }

void Stats::addPending(uint64_t num) { pending += num; }

// stats related to messages
void Stats::incSent(Stats::Type type) {
  totalSent++;
  sentCounters[type]++;
}

void Stats::incReceived(Stats::Type type) {
  totalReceived++;
  receivedCounters[type]++;
}

void Stats::incDuplicate() { duplicatesReceived++; }

void Stats::incStepUp() { stepUps++; }

void Stats::incStepDown() { stepDowns++; }

};  // namespace rhpman
