#include <iostream>

int main() {
  unsigned u1 = 42, u2 = 10;
  std::cout << u1 - u2 << std::endl;
  std::cout << u2 - u1 << std::endl;

  for (unsigned u = 10; u >= 0; --u) {
    std::cout << u << std::endl;
  }
  return 0;
}
