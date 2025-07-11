#include <iostream>
#include <memory>

int main() {
  auto customDeleter = [](int *integer) {
    std::cout << "customDeleter called" << std::endl;
    delete integer;
  };

  std::unique_ptr<int, decltype(customDeleter)> integer {new int(10), customDeleter};

  integer.reset(); // Outputs: "customDeleter called"

  return 0;
}