

#include "storage.h"

namespace rhpman {
using namespace ns3;

Storage::Storage() { m_storageSpace = 0; }

Storage::Storage(uint32_t capacity) { Init(capacity); }

Storage::~Storage() { ClearStorage(); }

// this will do the actual storage. will store the item not a copy
// true if there was space false otherwise
bool Storage::StoreItem(std::shared_ptr<DataItem> data) {
  // make sure there are not too many items being stored and that the item is not already stored
  if (m_storage.size() >= m_storageSpace || m_storage.count(data->getID()) == 1) return false;
  m_storage[data->getID()] = data;

  return true;
}

void Storage::Init(uint32_t capacity) {
  m_storageSpace = capacity;
  ClearStorage();
}

// this will return a pointer to the data item if it is found or NULL if it is not
std::shared_ptr<DataItem> Storage::GetItem(uint64_t dataID) {
  // auto found = std::shared_ptr<DataItem>(nullptr);

  return HasItem(dataID) ? m_storage[dataID] : std::shared_ptr<DataItem>(nullptr);
}

bool Storage::HasItem(uint64_t dataID) const { return m_storage.count(dataID) == 1; }

// return true if the item was removed from storage, false if it was not found
bool Storage::RemoveItem(uint64_t dataID) {
  bool found = m_storage.count(dataID) == 1;
  m_storage.erase(dataID);

  return found;
}

// this will empty all data items from storage
void Storage::ClearStorage() { m_storage.clear(); }

std::vector<std::shared_ptr<DataItem>> Storage::GetAll() const {
  std::vector<std::shared_ptr<DataItem>> items;

  for (auto& pair : m_storage) {
    items.push_back(pair.second);
  }

  return items;
}

// this is a helper and will return the number of data items that can be stored in local storage
uint32_t Storage::GetFreeSpace() const { return m_storageSpace - m_storage.size(); }

uint32_t Storage::Count() const { return m_storage.size(); }

double Storage::PercentUsed() const { return Count() / (double)m_storageSpace; }
double Storage::PercentFree() const { return GetFreeSpace() / (double)m_storageSpace; }

};  // namespace rhpman
