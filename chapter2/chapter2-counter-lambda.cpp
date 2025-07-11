#include <algorithm>
#include <vector>

int main() {
  std::vector<int> vector;
  vector.resize(5);

  std::generate(vector.begin(), vector.end(),
                [count = 0] mutable {
                  return count++;
                });

  // Vector now contains numbers 0, 1, 2, 3, 4

  return 0;
}