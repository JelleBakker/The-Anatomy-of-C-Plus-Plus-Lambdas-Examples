#include <cstdlib>
#include <chrono>
#include <iostream>
#include <utility>

enum class Direction {
  north,
  east,
  south,
  west,
};

Direction randomDirection() {
  switch (std::invoke([] {
    int val = std::rand() % 2;
    return val == 0;
  }) % 4) {
  case 0:
    return Direction::north;
  case 1:
    return Direction::east;
  case 2:
    return Direction::south;
  case 3:
    return Direction::west;
  }
  return {};
}

int main() {
  auto direction = randomDirection(); // Assign a random direction

  return 0;
}