/// \file storage.h
/// \author Marshall Asch <masch@uoguelph.ca>
/// \brief Storage driver for the RHPMAN data storage scheme.
///
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
#ifndef __RHPMAN_STORAGE_H
#define __RHPMAN_STORAGE_H

#include <memory>
#include <set>  // std::set

#include "ns3/uinteger.h"

#include "dataItem.h"

namespace rhpman {
using namespace ns3;

class Storage {
 private:
  /* data */

  uint32_t m_storageSpace;
  // std::vector<std::shared_ptr<DataItem> > m_storage;

  std::map<uint64_t, std::shared_ptr<DataItem> > m_storage;

 public:
  Storage();
  Storage(uint32_t capacity);
  ~Storage();

  void Init(uint32_t capacity);
  bool StoreItem(std::shared_ptr<DataItem> data);
  std::shared_ptr<DataItem> GetItem(uint64_t dataID);
  bool RemoveItem(uint64_t dataID);
  void ClearStorage();

  bool HasItem(uint64_t dataID) const;

  std::vector<std::shared_ptr<DataItem> > GetAll() const;
  uint32_t GetFreeSpace() const;
  uint32_t Count() const;

  double PercentUsed() const;
  double PercentFree() const;
};

};  // namespace rhpman

#endif
