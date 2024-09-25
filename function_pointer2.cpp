#include <iostream>
#include <string>
void print(const std::string &str) { std::cout << str << '\n'; }
int main(int argc, char *argv[]) {
  void (*foo)(const std::string &);
  foo = print;
  foo("Miskat");
  std::cin.get();
  return 0;
}
