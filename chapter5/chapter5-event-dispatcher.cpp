#include <iostream>
#include <functional>
#include <string>
#include <unordered_map>

class EventDispatcher {
public:
  using EventCallback = std::function<void(const std::string &event)>;

  void registerCallback(const std::string &event, EventCallback callback) {
    events[event].push_back(callback);
  }

  void triggerEvent(const std::string &event, const std::string &payload) {
    for (const auto &callback : events[event]) {
      callback(payload);
    }
  }

private:
  std::unordered_map<std::string, std::vector<EventCallback>> events;
};

int main() {
  EventDispatcher eventDispatcher;

  eventDispatcher.registerCallback("x", [](const std::string &payload) {
    std::cout << "[Handler 1] Event: " << payload << std::endl;
  });
  eventDispatcher.registerCallback("x", [](const std::string &payload) {
    std::cout << "[Handler 2] Event: " << payload << std::endl;
  });

  eventDispatcher.triggerEvent("x", "data");

  return 0;
}