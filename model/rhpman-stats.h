

#ifndef __RHPMAN_STATS_H_
#define __RHPMAN_STATS_H_

#define TYPE_ENUM_SIZE 9

#include "ns3/uinteger.h"

namespace rhpman {
using namespace ns3;

class Stats {
 public:
  enum Type {
    UNKOWN = 0,
    PING,
    MODE_CHANGE,
    ELECTION_REQUEST,
    ELECTION_FITNESS,
    STORE,
    LOOKUP,
    LOOKUP_RESPONSE,
    TRANSFER
  };

  Stats();
  ~Stats();

  // stats related to data items
  void incSave();
  void incLookup();
  void incSuccess();
  void incFailed();
  void incLate();
  void incCache();
  void incPowerloss();
  void incPowerRecharge();

  void addPending(uint64_t num);

  // stats related to messages
  void incSent(Type type, uint32_t expectedRecipients = 1);
  void incReceived(Type type);
  void incDuplicate();

  void incStepUp();
  void incStepDown();

  void Print(std::string prefix = "");
  void Reset();

 private:
  std::string TypeString(Stats::Type type);
};

};  // namespace rhpman

#endif
