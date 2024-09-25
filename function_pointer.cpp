#include <iostream>
#include <vector>

void print(int val) { std::cout << "Value: " << val << '\n'; }

void Foreach(const std::vector<int> &values, void (*func)(int)) {
  for (auto value : values) {
    print(value);
  }
}

int main(int argc, char *argv[]) {
  std::vector<int> values = {1, 2, 3, 4, 5, 5};
  Foreach(values, print);
  return 0;
}
