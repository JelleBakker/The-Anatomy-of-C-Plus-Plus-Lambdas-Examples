#include <iostream>

int main() {
  int a = 1;
  int b = 2;
  int c = 3;
  auto printABC = [=] {
    std::cout << a << ", " << b << ", " << c << std::endl;
  };
  printABC(); // Outputs: "1, 2, 3"

  return 0;
}