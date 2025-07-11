#include <functional>

void myFunction() {

}

struct FunctionObject {
  void operator ()() {
  }
};

int main() {
  std::function<void()> f;

  f = [] {
  }; // Assign a lambda
  f = [x = 0] {
  }; // Assign a lambda with captures
  f = FunctionObject(); // Assign a normal function object
  f = myFunction; // Assign a function pointer

  std::function<void()> g;
  g = f; // Assign from another

  return 0;
}