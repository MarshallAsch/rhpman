

/// \file rhpman-stats.h
/// \author Marshall Asch <masch@uoguelph.ca>
///
/// Copyright (c) 2021 by Marshall Asch <masch@uoguelph.ca>
/// Permission to use, copy, modify, and/or distribute this software for any
/// purpose with or without fee is hereby granted, provided that the above
/// copyright notice and this permission notice appear in all copies.
///
/// THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES WITH
/// REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY
/// AND FITNESS. IN NO EVENT SHALL ISC BE LIABLE FOR ANY SPECIAL, DIRECT,
/// INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM
/// LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE
/// OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
/// PERFORMANCE OF THIS SOFTWARE.
///
#ifndef __RHPMAN_STATS_H
#define __RHPMAN_STATS_H

#define TYPE_ENUM_SIZE 8

#include "ns3/uinteger.h"

namespace rhpman {
using namespace ns3;

class Stats {
 public:
  enum class Type {
    UNKOWN = 0,
    PING,
    MODE_CHANGE,
    ELECTION_REQUEST,
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
  void incDuplicate();

  void incStepUp();
  void incStepDown();

  void addPending(uint64_t num);

  void queryDelay(double time);

  // stats related to messages
  void addSent(Type type, uint32_t expectedRecipients = 1);
  void incReceived(Type type);

  void Print(std::string prefix = "");
  void Reset();

  uint64_t getSave() const;
  uint64_t getLookup() const;
  uint64_t getSuccess() const;
  uint64_t getFailed() const;
  uint64_t getLate() const;
  uint64_t getCache() const;
  uint64_t getPowerloss() const;
  uint64_t getPowerRecharge() const;
  uint64_t getPending() const;
  uint64_t getTotalSent() const;
  uint64_t getSent(Type type) const;
  uint64_t getReceived(Type type) const;
  uint64_t getTotalReceived() const;
  uint64_t getExpectedReceive(Type type) const;
  uint64_t getTotalExpectedReceive() const;
  uint64_t getDuplicate() const;
  uint64_t getStepUp() const;
  uint64_t getStepDown() const;
  double GetMinQueryDelay() const;
  double GetMaxQueryDelay() const;
  double GetAvgQueryDelay() const;

  static std::string TypeString(Stats::Type type);
};

};  // namespace rhpman

#endif
