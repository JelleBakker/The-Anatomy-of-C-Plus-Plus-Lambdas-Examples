#include <iostream>

template <typename Function>
void callFunction(Function f) {
  f();
}

int main() {
  callFunction([] { std::cout << "Hi there!" << std::endl; });

  return 0;
}