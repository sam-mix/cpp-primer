#include <iostream>

int main() {
  unsigned u = 10;
  int i = -42;
  std::cout << i + i << std::endl;
  std::cout << u + i << std::endl;
  std::cout << i + u << std::endl;
  std::cout << u + u << std::endl;
}
