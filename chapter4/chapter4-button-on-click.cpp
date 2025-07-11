#include <array>
#include <functional>
#include <iostream>

int main() {
  struct Button {
    void clicked() {
      if (onClick) {
        onClick();
      }
    }

    std::function<void()> onClick;
  };

  std::array<Button, 3> buttons;

  buttons[0].onClick = [] {
    std::cout << "Button 0 Clicked" << std::endl;
  };
  buttons[1].onClick = [] {
    std::cout << "Button 1 Clicked" << std::endl;
  };
  buttons[2].onClick = [] {
    std::cout << "Button 2 Clicked" << std::endl;
  };

  return 0;
}