/// \file simulation-area.h
/// \author Keefer Rourke <krourke@uoguelph.ca>
/// \brief Declares a SimulationArea class which makes production of
///     ns3::Rectangle which form a rectangular area split into a grid of cells
///     much easier.
///
/// Copyright (c) 2020 by Keefer Rourke <krourke@uoguelph.ca>
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
#ifndef __RHPMAN_SIMULATION_AREA_H
#define __RHPMAN_SIMULATION_AREA_H

#include <iostream>
#include <sstream>
#include <string>
#include <utility>
#include <vector>

#include "ns3/position-allocator.h"
#include "ns3/rectangle.h"

namespace rhpman {

/// \brief A helper class to divide out 2D cartesian grids into subgrids.
///     Coordinates are represented by std::pairs of doubles arranged by (x,y).
class SimulationArea {
 public:
  SimulationArea() {}

  SimulationArea(std::pair<double, double> min, std::pair<double, double> max)
      : m_min(min), m_max(max) {}

  double minX() const { return m_min.first; }
  double maxX() const { return m_max.first; }
  double minY() const { return m_min.second; }
  double maxY() const { return m_max.second; }
  double deltaX() const { return m_max.first - m_min.first; }
  double deltaY() const { return m_max.second - m_min.second; }
  void setMin(std::pair<double, double> value) { m_min = value; }
  void setMax(std::pair<double, double> value) { m_max = value; }

  /// \brief Converts this to an ns-3 rectangle object.
  ///
  /// \return ns3::Rectangle
  ns3::Rectangle asRectangle() const;

  std::vector<SimulationArea> divideHorizontally(int32_t parts) const;
  std::vector<SimulationArea> divideVertically(int32_t parts) const;

  /// \brief Splits the area defined by the min and max coordinates into an
  ///     x by y grid of rectangles.
  ///
  /// \param x The number of ways to divide this box horizontally.
  /// \param y The number of ways to divide this box vertically.
  /// \return std::vector<SimulationArea>
  std::vector<SimulationArea> splitIntoGrid(int32_t x, int32_t y) const;

  /// \brief Get a Grid Position Allocator which is compatible with constant
  ///     position mobility models.
  ///
  /// \return ns3::Ptr<ns3::GridPositionAllocator>
  ns3::Ptr<ns3::GridPositionAllocator> getGridPositionAllocator() const;

  /// \brief Get a Random Box Position Allocation which is compatible with
  ///     random walk mobility models.
  ///
  /// \return ns3::Ptr<ns3::RandomRectanglePositionAllocator>
  ns3::Ptr<ns3::RandomRectanglePositionAllocator> getRandomRectanglePositionAllocator() const;

  std::string toString() const;

  friend std::ostream& operator<<(std::ostream& os, const SimulationArea& area) {
    return os << area.toString();
  }

 private:
  std::pair<double, double> m_min;
  std::pair<double, double> m_max;
};

}  // namespace rhpman

#endif
