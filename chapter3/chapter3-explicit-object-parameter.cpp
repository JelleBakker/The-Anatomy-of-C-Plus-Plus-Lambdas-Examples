#include <functional>
#include <iostream>

int main() {
  // Example 1
  {
    std::function<int(int)> factorial;
    factorial = [&] (int n) {
      return n <= 1 ? 1 : factorial(n - 1) * n;
    };

    std::cout << factorial(3); // Outputs: 6 (3 * 2 * 1)
  }

  // Example 2
  {
    auto factorial = [] (this auto self, int n) -> int {
      return n <= 1 ? 1 : self(n - 1) * n;
    };

    std::cout << factorial(3); // Outputs: 6 (3 * 2 * 1)
  }

  return 0;
}