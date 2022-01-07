
/// \file dataItem.cc
/// \author Marshall Asch <masch@uoguelph.ca>
/// \brief The data item that gets stored by the RHPMAN application.
///        This needs to be used to wrap individual data items within
///        application so it can be stored in the network without knowing the
///        specific data format.
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
#include "dataItem.h"
#include <string.h>

namespace rhpman {

DataItem::DataItem() {
  dataID = 0;
  size = 0;
  owner = 0;
  bytes = NULL;
}

DataItem::DataItem(uint32_t dataSize, uint32_t ownerID, const uint8_t* payload) {
  static uint64_t autoID = 1;
  dataID = autoID++;
  size = dataSize;
  owner = ownerID;
  bytes = (uint8_t*)malloc(size * sizeof(uint8_t));

  memcpy(bytes, payload, size);
}

DataItem::DataItem(uint64_t id, uint32_t ownerID, const std::string payload) {
  dataID = id;
  size = payload.size();
  owner = ownerID;
  bytes = (uint8_t*)malloc(size * sizeof(uint8_t));

  memcpy(bytes, payload.data(), size);
}

DataItem::~DataItem() {
  if (bytes != NULL) {
    free(bytes);
    bytes = NULL;
  }
}

uint64_t DataItem::getID() const { return dataID; }

uint32_t DataItem::getSize() const { return size; }

uint32_t DataItem::getOwner() const { return owner; }

// Note this Must NOT be freed by the caller,
const uint8_t* DataItem::getPayload() const {
  return bytes;
  // if (size == 0 || bytes == NULL) return NULL;

  // uint8_t* tmp;
  // tmp = (uint8_t*)malloc(size * sizeof(uint8_t));
  // memcpy(tmp, bytes, size);
  // return tmp;
}

}  // namespace rhpman
