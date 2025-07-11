#include <algorithm>
#include <iostream>
#include <vector>

struct IsAboveAge {
  int threshold;

  IsAboveAge(int t) : threshold(t) {
  }

  bool operator()(int age) const {
    return age >= threshold;
  }
};

int main() {
  std::vector<int> ages {20, 10, 18, 5, 35};
  IsAboveAge isAdult(18);
  std::cout << std::count_if(ages.begin(), ages.end(), isAdult); // Outputs: 3

  return 0;
}