#include <functional>

int main() {
  std::function<bool(int, int)> isGreaterThan = [](int number, int threshold) {
    return number > threshold;
  };

  // isGreaterThan = [](int x) { return x > 18; }; // Error, two int arguments required

  return 0;
}