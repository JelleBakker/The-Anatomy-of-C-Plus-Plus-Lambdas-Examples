#include <chrono>
#include <iomanip>
#include <iostream>
#include <string>
#include <sstream>

struct LaunchInfo {
  std::chrono::system_clock::time_point rawTime;
  std::string formattedTime;
};

static const LaunchInfo launchInfo = std::invoke([] {
  LaunchInfo info;
  info.rawTime = std::chrono::system_clock::now();

  std::time_t t = std::chrono::system_clock::to_time_t(info.rawTime);
  std::tm tm = *std::localtime(&t);

  std::ostringstream oss;
  oss << std::put_time(&tm, "%Y-%m-%d %H:%M:%S");
  info.formattedTime = oss.str();

  return info;
});

int main() {
  std::cout << launchInfo.formattedTime << std::endl;

  return 0;
}