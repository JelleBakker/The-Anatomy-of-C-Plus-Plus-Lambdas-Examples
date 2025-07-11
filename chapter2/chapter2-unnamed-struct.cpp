#include <iostream>
#include <string>

int main() {
  struct {
    std::string string;

    void operator()() {
      std::cout << string << std::endl;
    }
  } sayHi {"Hi"};

  sayHi();

  return 0;
}