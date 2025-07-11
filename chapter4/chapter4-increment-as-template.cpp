#include <iostream>
#include <vector>

// A counter object taking an Increment function that allows customizing how the number is incremented
template <typename Increment>
struct Counter {
  Counter(Increment i) : increment(i) {
  }

  int operator()() {
    auto current = count;
    count = increment(count);
    return current;
  }

  int count = 0;
  Increment increment;
};

// Return a list of numbers with given size and interval
std::vector<int> getCountedNumbers(int size, int interval) {
  Counter counter([interval](auto count) { return count + interval; });

  // Alternatively we could use std::generate
  std::vector<int> numbers;
  for (int i = 0; i < size; i++) {
    numbers.push_back(counter());
  }
  return numbers;
}

int main() {
  auto numbers = getCountedNumbers(5, 2); // 0, 2, 4, 6, 8

  return 0;
}