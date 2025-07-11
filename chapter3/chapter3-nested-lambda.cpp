#include <iostream>

int main() {
  auto f = [] {
    auto g = [] {
      return 3;
    };

    return g() * g(); // Return 3 * 3
  };

  std::cout << f(); // Outputs: 9

  return 0;
}