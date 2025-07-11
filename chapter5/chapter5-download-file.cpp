#include <chrono>
#include <iostream>
#include <functional>
#include <string>
#include <thread>

void downloadFile(const std::string &url, std::function<void()> onComplete) {
  // Simulate download
  using namespace std::chrono_literals;
  std::this_thread::sleep_for(2000ms);

  onComplete();
}

int main() {
  downloadFile("my-website.com/image.png", [] {
    std::cout << "Download complete!" << std::endl;
  });

  return 0;
}