#include <chrono>
#include <iostream>
#include <functional>
#include <thread>

struct Timer {
  Timer(std::chrono::milliseconds interval, std::function<void()> callback)
    : thread([interval, callback](std::stop_token stoken) {
      while (!stoken.stop_requested()) {
        callback();
        std::this_thread::sleep_for(interval);
      }
    }) {
  }

  std::jthread thread;
};

int main() {
  using namespace std::chrono_literals;

  {
    Timer timer(500ms, [] {
      std::cout << "Tick" << std::endl;
    });

    // Let run for 5 seconds
    std::this_thread::sleep_for(5s);
  }

  std::cout << "Timer destroyed" << std::endl;

  std::this_thread::sleep_for(5s);

  return 0;
}