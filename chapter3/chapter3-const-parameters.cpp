#include <iostream>

int main() {
  int x = 0;

  auto f = [x](int y, const int z) {
    // x++; // Error: "Cannot assign to a variable captured by copy in a non-mutable lambda"
    y++; // OK
    // z++; // Error: "Cannot assign to variable 'z' with const-qualified type 'const int'"
  };

  auto g = [x](int y, const int z) mutable {
    x++; // OK
    y++; // OK
    // z++; // Error: "Cannot assign to variable 'z' with const-qualified type 'const int'"
  };
}