#include <iostream>

int main() {
  // Example 1
  auto isAboveAge = [threshold = 18](int age) {
    return age >= threshold;
  };
  std::cout << std::format("{}\n", isAboveAge(15)); // Outputs: false
  std::cout << std::format("{}\n", isAboveAge(20)); // Outputs: true

  // Example 2
  auto counter = [count = 0] mutable {
    return count++;
  };

  std::cout << counter() << std::endl; // Outputs: 0
  std::cout << counter() << std::endl; // Outputs: 1
  std::cout << counter() << std::endl; // Outputs: 2

  return 0;
}