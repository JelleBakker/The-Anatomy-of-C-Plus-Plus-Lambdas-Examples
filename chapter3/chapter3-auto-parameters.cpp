#include <iostream>

struct Sum {
  template <typename A, typename B>
  auto operator()(A a, B b) {
    return a + b;
  }
};

int main() {
  // Example 1
  {
    auto sum = [](auto a, auto b) {
      return a + b;
    };

    sum(1, 2); // Calls operator() (int a, int b)
    sum(1.5f, 2.5f); // Calls operator() (float a, float b)
  }

  // Example 2
  {
    Sum sum;
    sum(1, 2); // Calls operator() (int a, int b)
    sum(1.5f, 2.5f); // Calls operator() (float a, float b)
  }
  return 0;
}