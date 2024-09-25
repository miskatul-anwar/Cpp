#include <iostream>
#include <string>
struct Player {
private:
  std::string name = "Martin";

public:
  void showname() { std::cout << name << '\n'; }
};
