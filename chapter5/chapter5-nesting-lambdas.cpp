#include <iostream>

int main() {
  // Example 1
  auto add = [](int a, int b) { return a + b; };
  auto addFive = [add](int b) { return add(5, b); };

  std::cout << addFive(10) << std::endl; // Outputs 15

  // Example 2
  auto makeMultiplier = [](int factor) {
    return [factor](int x) {
      return x * factor;
    };
  };

  auto triple = makeMultiplier(3);
  std::cout << triple(10) << std::endl; // Outputs 30

  // Example 3
  auto combine = [](auto f, auto g) {
    return [=](auto x) {
      return f(g(x));
    };
  };

  auto combined = combine([](int x) { return x * 2; },
                          [](int x) { return x + 3; });

  std::cout << combined(4) << std::endl; // (4 + 3) * 2 = 14

  return 0;
}