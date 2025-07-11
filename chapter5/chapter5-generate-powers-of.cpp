#include <algorithm>
#include <iostream>
#include <vector>

std::vector<int> generatePowersOf(int base, int count) {
  std::vector<int> result(count);

  std::generate(result.begin(), result.end(), [base, current = 1]() mutable {
    current *= base;
    return current;
  });

  return result;
}

int main() {
  auto numbers = generatePowersOf(3, 4); // Generates: 3, 9, 27, 81

  return 0;
}