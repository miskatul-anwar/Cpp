#include <functional>
#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
  std::string name = "Miskatul Anwar";
  std::function<void(const std ::string &update)> upval =
      [&name](const std::string &update) mutable {
        std::cout << name << " => ";
        name = update;
      };
  std::function<void(const std::string &update)> lm = upval;
  upval("null void");
  std::cout << name;
  return 0;
}
