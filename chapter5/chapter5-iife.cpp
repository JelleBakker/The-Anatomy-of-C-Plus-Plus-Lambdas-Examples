#include <iostream>
#include <string>
#include <utility>

int main() {
  // Example 1
  const int x = [] {
    return 5;
  }();

  // Example 2
  const int y = std::invoke([] {
    return 5;
  });

  // Example 3
  enum class Shape { circle, cube, triangle };
  Shape shape = Shape::cube;

  const std::string description = std::invoke([shape] {
    switch (shape) {
    case Shape::circle:
      return "circle";
    case Shape::cube:
      return "cube";
    case Shape::triangle:
      return "triangle";
    }
    return "";
  });

  std::cout << description << std::endl;

  return 0;
}