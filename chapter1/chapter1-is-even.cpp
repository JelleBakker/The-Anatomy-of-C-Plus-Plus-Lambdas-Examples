#include <algorithm>
#include <iostream>
#include <vector>

bool isEven(int x) {
  return x % 2 == 0;
}

int main() {
  std::vector<int> numbers = {1, 10, 7, 6, 11};
  std::cout << std::count_if(numbers.begin(), numbers.end(), isEven); // Outputs: 2

  return 0;
}
