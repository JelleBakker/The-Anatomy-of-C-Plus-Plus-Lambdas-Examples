#include <cassert>
#include <iostream>
#include <string>
#include <vector>

struct Shape {
  virtual ~Shape() = default;
  virtual std::string getName() = 0;
};

struct Circle : Shape {
  std::string getName() override {
    return "Circle";
  }
};

struct Triangle : Shape {
  std::string getName() override {
    return "Triangle";
  }
};

enum class ShapeType {
  circle,
  triangle,
};

int main() {
  auto createShape = [](ShapeType shapeType) -> std::unique_ptr<Shape> {
    switch (shapeType) {
    case ShapeType::circle:
      return std::make_unique<Circle>();
    case ShapeType::triangle:
      return std::make_unique<Triangle>();
    }

    assert(false);
    return nullptr;
  };

  std::vector<std::unique_ptr<Shape>> shapes;
  shapes.push_back(createShape(ShapeType::circle));
  shapes.push_back(createShape(ShapeType::triangle));

  for (const auto &shape : shapes) {
    std::cout << shape->getName() << std::endl;
  }
  return 0;
}