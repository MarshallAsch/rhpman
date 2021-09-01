

/// \file dataItem.h
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

#ifndef __RHPMAN_DATA_ITEM_H
#define __RHPMAN_DATA_ITEM_H

#include "ns3/uinteger.h"

namespace rhpman {

class DataItem {
 private:
  /* data */
  uint64_t dataID;
  uint8_t* bytes;
  uint32_t size;
  uint32_t owner;

 public:
  DataItem();  // do not use this directly
  DataItem(
      uint32_t dataSize,
      uint32_t ownerID,
      const uint8_t* payload);  // use this to create the data item
  DataItem(uint64_t id, uint32_t ownerID, const std::string payload);
  ~DataItem();

  uint64_t getID() const;
  uint32_t getSize() const;
  uint32_t getOwner() const;
  const uint8_t* getPayload() const;
};

}  // namespace rhpman

#endif
