#include <algorithm>
#include <vector>

struct Counter {
  int count = 0;

  int operator()() {
    return count++;
  }
};

int main() {
  std::vector<int> vector;
  vector.resize(5);

  Counter counter;
  std::generate(vector.begin(), vector.end(), counter);

  // Vector now contains numbers 0, 1, 2, 3, 4

  return 0;
}