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
  std::vector<std::set<uint32_t> > tables;

  void nextTable();

 public:
  Table();
  Table(uint16_t num);
  ~Table();
  double ComputeChangeDegree();
  void UpdateTable(const std::string table);
};

}  // namespace rhpman

#endif
