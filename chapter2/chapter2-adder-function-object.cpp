#include <iostream>

struct Adder {
  int operator()(int a, int b) const {
    return a + b;
  }
};

int main() {
  Adder adder;
  std::cout << adder(2, 3); // Outputs: 5

  return 0;
}