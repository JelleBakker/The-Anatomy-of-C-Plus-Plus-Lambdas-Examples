#include <iostream>
#include <string>

auto createLambda(std::string string) {
  return [&] {
    std::cout << string << std::endl;
  };
}

int main() {
  auto lambda = createLambda("hi");
  lambda(); // Outputs: garbadge

  return 0;
}