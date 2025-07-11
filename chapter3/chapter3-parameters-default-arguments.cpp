#include <iostream>
#include <cmath>

int main() {
  auto power = [](double base, int exponent = 2) {
    return std::pow(base, exponent);
  };

  std::cout << power(3) << std::endl; // Outputs: 9
  std::cout << power(2, 3) << std::endl; // Outputs: 8
  return 0;
}