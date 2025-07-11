#include <iostream>

int main() {
  auto sum = [](int a, int b) {
    return a + b;
  };

  std::cout << sum(2, 3) << std::endl; // Outputs: 5
  return 0;
}