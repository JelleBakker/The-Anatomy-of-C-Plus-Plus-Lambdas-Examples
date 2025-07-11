#include <functional>
#include <iostream>

int main() {
  // Example 1
  std::function<void()> f = [] { std::cout << "hi!" << std::endl; };
  f(); // Outputs: hi!

  // Example 2
  f = [] { std::cout << "hello!" << std::endl; };
  f(); // Outputs: hello!

  // Example 3
  int x = 5;
  f = [x] { std::cout << x << std::endl; };
  f(); // Outputs: 5

  int y = 7;

  f = [x, y] { std::cout << x << ", " << y << std::endl; };
  f(); // Outputs: 5, 7

  return 0;
}