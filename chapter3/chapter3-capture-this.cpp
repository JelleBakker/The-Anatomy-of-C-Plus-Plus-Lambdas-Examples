#include <iostream>

struct MyStruct {
  int x = 1;

  MyStruct() {
    auto printX = [this] {
      std::cout << x << std::endl; // Outputs: 1
    };

    // This code below won't compile because x isn't a local variable
    // auto printX = [x] {
    //   std::cout << x << std::endl;
    // };
  }
};

int main() {
  MyStruct myStruct;

  return 0;
}