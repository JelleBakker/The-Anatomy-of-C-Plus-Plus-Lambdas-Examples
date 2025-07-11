#include <functional>

int main() {
  std::function<void()> f;

  // f(); // Crash: function points to nothing

  f = [] {
  }; // Assign empty lambda
  f(); // OK

  return 0;
}