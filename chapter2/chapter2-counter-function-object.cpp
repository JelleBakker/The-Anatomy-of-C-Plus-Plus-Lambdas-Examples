#include <iostream>

struct Counter {
  int count = 0;

  int operator()() {
    return count++;
  }
};

int main() {
  Counter counter;
  std::cout << counter() << std::endl; // Outputs: 0
  std::cout << counter() << std::endl; // outputs: 1
  std::cout << counter() << std::endl; // outputs: 2

  return 0;
}