#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  std::vector<int> ages {20, 10, 18, 5, 35};
  int threshold = 18;

  std::cout << std::count_if(ages.begin(), ages.end(),
                             [threshold](int age) {
                               return age >= threshold;
                             }); // Outputs: 3

  return 0;
}
