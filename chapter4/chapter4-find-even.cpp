#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  std::vector<int> numbers = {1, 3, 5, 7, 8, 10};

  // Find the first even number
  auto it = std::find_if(numbers.begin(), numbers.end(), [](int x) {
    return x % 2 == 0;
  });

  if (it != numbers.end()) {
    std::cout << "First even number is: " << *it << std::endl;
  } else {
    std::cout << "No even number found." << std::endl;
  }

  return 0;
}