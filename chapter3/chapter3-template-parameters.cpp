#include <iostream>

int main() {
  auto sum = [] <typename A, typename B> (A a, B b) {
    return a + b;
  };

  sum(1, 2); // Calls operator() (int a, int b)
  sum(1.5f, 2.5f); // Calls operator() (float a, float b)

  auto isEven = [] <typename T> (T t) requires std::integral<T>
  {
    return (t % 2) == 0;
  };

  isEven(2); // OK
  // isEven(2.5f); // Error
  return 0;
}