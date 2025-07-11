#include <iostream>

static int count = 0;

int main() {
  auto counter = [] {
    return count++;
  };

  std::cout << counter() << std::endl; // Outputs: 0
  std::cout << counter() << std::endl; // Outputs: 1
  std::cout << counter() << std::endl; // Outputs: 2
  return 0;
}