#include <algorithm>
#include <vector>
#include <string>

int main() {
  std::vector<std::string> strings = {"A", "Long string", "Abc"};
  // Sort by length
  std::sort(strings.begin(), strings.end(),
            [](const std::string &a, const std::string &b) {
              return a.length() < b.length();
            }); // { "A", "Abc", "Long string" }

  return 0;
}