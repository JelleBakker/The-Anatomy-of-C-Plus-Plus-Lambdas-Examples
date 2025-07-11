#include <iostream>

int main() {
  char x = 2;
  char y = 2;

  auto f = [=] {
    return x;
  };

  auto g = [=] {
    return x * y;
  };

  std::cout << sizeof(f) << std::endl; // Outputs: 1
  std::cout << sizeof(g) << std::endl; // Outputs: 2

  return 0;
}