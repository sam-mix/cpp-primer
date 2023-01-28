#include <iostream>

int main() {
  int sum = 0, value = 0;

  while (std::cin >> value) {
    sum += value;
  }
  std::cout << "Sum is: " << sum << std::endl;

  return 0;
}

// ./000005.while.exe
// 1 2 3 4 5 6 7 8 a
// Sum is: 36

// ./000005.while.exe
// 1 2 3 4 5 6 7 8
// CTRL + D
// Sum is: 36