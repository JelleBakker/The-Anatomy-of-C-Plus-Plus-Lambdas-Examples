int main() {
  // auto counter = [count = 0] {
  //   return count++; // Error: "Cannot assign to a variable captured by copy in a non-mutable lambda"
  // };

  auto counter = [count = 0] mutable {
    return count++; // OK
  };

  return 0;
}