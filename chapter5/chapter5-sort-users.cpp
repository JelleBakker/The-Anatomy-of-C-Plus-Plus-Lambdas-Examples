#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

struct User {
  std::string name;
  int age;
};

int main() {
  std::vector<User> users;
  users.push_back({"Bob", 20});
  users.push_back({"John", 60});
  users.push_back({"Sophia", 25});
  users.push_back({"Rebecca", 48});

  // Remove all users younger than age of 30:
  users.erase(std::remove_if(users.begin(), users.end(),
                             [](const User &user) {
                               return user.age < 30;
                             }), users.end());

  // Sort based on age
  std::sort(users.begin(), users.end(), [](const User &a, const User &b) {
    return a.age < b.age;
  });

  // Sort based on age even simpler
  std::ranges::sort(users, {}, &User::age);

  return 0;
}