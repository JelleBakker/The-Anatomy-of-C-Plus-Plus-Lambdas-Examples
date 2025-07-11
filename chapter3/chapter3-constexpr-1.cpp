int normalFunction() {
  return 1;
}
constexpr int normalConstexprFunction() {
  return 1;
}
auto lambda = [] {
  return 1;
};

// constexpr auto a = normalFunction(); // Error: "Constexpr variable 'a' must be initialized by a constant expression"
constexpr auto b = normalConstexprFunction(); // OK
constexpr auto c = lambda(); // OK

int main() {

  return 0;
}