#include <iostream>
#include <variant>
#include <vector>

template <class... Ts>
struct overloaded : Ts... {
  using Ts::operator()...;
};

template <class... Ts>
overloaded(Ts...) -> overloaded<Ts...>;

struct Circle {
};

struct Triangle {
};

struct Rectangle {
};

using Shape = std::variant<Circle, Triangle, Rectangle>;

int main() {

  std::vector<Shape> shapes {Triangle {}, Circle {}, Rectangle {}, Triangle {}};

  for (const auto &shape : shapes) {
    std::visit(overloaded {
                   [](Circle arg) { std::cout << "Circle" << std::endl; },
                   [](Triangle arg) { std::cout << "Triangle" << std::endl; },
                   [](Rectangle arg) { std::cout << "Rectangle" << std::endl; },
               }, shape);
  }

  return 0;
}