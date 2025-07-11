#include <functional>
#include <iostream>

struct Button {
  using DrawFunction = std::function<void(int x, int y)>;

  const DrawFunction drawFunction;
  int x = 0;
  int y = 0;

  Button(DrawFunction function) : drawFunction(function) {
  }

  void setPosition(int newX, int newY) {
    x = newX;
    y = newY;
  }

  void draw() {
    if (drawFunction) {
      drawFunction(x, y);
    }
  }
};

int main() {
  Button button([](int x, int y) {
    std::cout << "Performing draw for button at x: " << x << ", y: " << y << std::endl;
  });

  button.setPosition(5, 6);
  button.draw(); // Outputs: "Performing draw for button at x: 5, y: 6"

  return 0;
}