#ifndef __rhpman_table_h
#define __rhpman_table_h

#include "ns3/uinteger.h"

#include <set>  // std::set
#include <string>
#include <vector>  // std::vector

namespace rhpman {

class Table {
 private:
  uint16_t numTables;
  uint16_t currentTable;
  uint16_t lastTable;
  uint32_t maxHops;
  std::vector<std::set<uint32_t> > tables;

  void nextTable();

 public:
  Table();
  Table(uint16_t num, uint32_t hops);
  double ComputeChangeDegree() const;
  void UpdateTable(const std::string table);

  static std::set<uint32_t> GetNeighbors(const std::string table, uint32_t maxHops);
};

}  // namespace rhpman

#endif
