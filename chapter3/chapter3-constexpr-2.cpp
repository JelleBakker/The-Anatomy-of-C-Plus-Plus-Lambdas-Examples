// constexpr
constexpr int normalFunction() {
  return 1;
}

auto constexprLambda = [] {
  return normalFunction();
};

// not constexpr
int nonConstexprFunction() {
  return 1;
}

auto nonConstexprLambda = [] {
  return nonConstexprFunction();
};

constexpr auto a = constexprLambda();
// constexpr auto b = nonConstexprLambda(); // Error: "Constexpr variable 'b' must be initialized by a constant expression"

int main() {

  return 0;
}