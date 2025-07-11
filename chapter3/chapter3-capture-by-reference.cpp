#include <iostream>

int main() {
  int x = 3;
  auto printX = [&x] {
    std::cout << x << std::endl;
  };
  x = 4;
  printX(); // Outputs: 4

  return 0;
}