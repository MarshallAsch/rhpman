
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

static uint64_t powerLoss;
static uint64_t recharged;

static uint64_t totalSent;
static uint64_t totalExpectedRecipients;
static uint64_t totalReceived;
static uint64_t duplicatesReceived;

static uint64_t sentCounters[TYPE_ENUM_SIZE];
static uint64_t recipientCounters[TYPE_ENUM_SIZE];
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

std::string Stats::TypeString(Stats::Type type) const {
  switch (type) {
    case Type::PING:
      return "PING";
    case Type::MODE_CHANGE:
      return "MODE_CHANGE";
    case Type::ELECTION_REQUEST:
      return "ELECTION_REQUEST";
    case Type::STORE:
      return "STORE";
    case Type::LOOKUP:
      return "LOOKUP";
    case Type::LOOKUP_RESPONSE:
      return "LOOKUP_RESPONSE";
    case Type::TRANSFER:
      return "TRANSFER";
    case Type::UNKOWN:
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

  powerLoss = 0;
  recharged = 0;

  totalSent = 0;
  totalExpectedRecipients = 0;
  totalReceived = 0;
  duplicatesReceived = 0;

  for (size_t i = 0; i < TYPE_ENUM_SIZE; i++) {
    sentCounters[i] = 0;
    recipientCounters[i] = 0;
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

  std::cout << prefix << "TotalPowerloss\t" << unsigned(powerLoss) << "\n";
  std::cout << prefix << "TotalPowerRecharge\t" << unsigned(recharged) << "\n";

  // message stats
  std::cout << prefix << "TotalSent\t" << unsigned(totalSent) << "\n";
  std::cout << prefix << "TotalExpectedRecipients\t" << unsigned(totalExpectedRecipients) << "\n";
  std::cout << prefix << "TotalReceived\t" << unsigned(totalReceived) << "\n";
  std::cout << prefix << "TotalDuplicates\t" << unsigned(duplicatesReceived) << "\n";

  for (auto i = 0; i < TYPE_ENUM_SIZE; i++) {
    std::cout << prefix << "TotalSent" << TypeString(static_cast<Stats::Type>(i)) << "\t"
              << unsigned(sentCounters[i]) << "\n";
  }

  for (auto i = 0; i < TYPE_ENUM_SIZE; i++) {
    std::cout << prefix << "TotalExpectedReceives" << TypeString(static_cast<Stats::Type>(i))
              << "\t" << unsigned(recipientCounters[i]) << "\n";
  }

  for (auto i = 0; i < TYPE_ENUM_SIZE; i++) {
    std::cout << prefix << "TotalReceived" << TypeString(static_cast<Stats::Type>(i)) << "\t"
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
void Stats::incSent(Stats::Type type, uint32_t expectedRecipients) {
  totalSent++;
  ;
  totalExpectedRecipients += expectedRecipients;
  sentCounters[static_cast<int>(type)] += 1;
  recipientCounters[static_cast<int>(type)] += expectedRecipients;
}

void Stats::incReceived(Stats::Type type) {
  totalReceived++;
  receivedCounters[static_cast<int>(type)]++;
}

void Stats::incDuplicate() {
  totalReceived++;
  duplicatesReceived++;
}

void Stats::incStepUp() { stepUps++; }

void Stats::incStepDown() { stepDowns++; }

void Stats::incPowerloss() { powerLoss++; }

void Stats::incPowerRecharge() { recharged++; }

uint64_t Stats::getSave() { return saves; }
uint64_t Stats::getLookup() { return lookups; }
uint64_t Stats::getSuccess() { return lookupSuccess; }
uint64_t Stats::getFailed() { return lookupFailed; }
uint64_t Stats::getLate() { return lookupLate; }
uint64_t Stats::getCache() { return cacheHits; }
uint64_t Stats::getPowerloss() { return powerLoss; }
uint64_t Stats::getPowerRecharge() { return recharged; }
uint64_t Stats::getPending() { return pending; }
uint64_t Stats::getTotalSent() { return totalSent; }
uint64_t Stats::getSent(Type type) { return sentCounters[static_cast<int>(type)]; }

uint64_t Stats::getExpectedReceive(Type type) { return recipientCounters[static_cast<int>(type)]; }

uint64_t Stats::getTotalExpectedReceive() { return totalExpectedRecipients; }

uint64_t Stats::getReceived(Type type) { return receivedCounters[static_cast<int>(type)]; }

uint64_t Stats::getTotalReceived() { return totalReceived; }
uint64_t Stats::getDuplicate() { return duplicatesReceived; }
uint64_t Stats::getStepUp() { return stepUps; }
uint64_t Stats::getStepDown() { return stepDowns; }

};  // namespace rhpman
