

#ifndef __rhpman_data_h
#define __rhpman_data_h

#include "ns3/uinteger.h"

namespace rhpman {

class DataItem {
 private:
  /* data */
  uint64_t dataID;
  uint8_t* bytes;
  uint32_t size;

 public:
  DataItem();                                                    // do not use this directly
  DataItem(uint32_t size, const uint8_t* payload);               // use this to create the data item
  DataItem(uint64_t id, uint32_t size, const uint8_t* payload);  // use this when saving a response
  ~DataItem();

  uint64_t getID() const;
  uint32_t getSize() const;
  uint8_t* getPayload() const;
};

}  // namespace rhpman

#endif
