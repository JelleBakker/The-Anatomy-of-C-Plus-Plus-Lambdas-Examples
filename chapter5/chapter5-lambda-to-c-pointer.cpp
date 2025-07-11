#include <iostream>

void cFunction(void (*func)(int)) {
  func(3);
}

int main() {
  auto functionPointer = +[](int x) {
    std::cout << "Lambda called with x: " << x << std::endl;
  };

  cFunction(functionPointer); // Output: "Lambda called with x: 3"

  return 0;
}