// 42 42 42 42 42 55 55 62 100 100 100 a
#include <iostream>

int main() {
  // currVal 是我们正在统计的数；我们蒋读入的新值存入val
  int currVal = 0, val = 0;
  if (std::cin >> currVal) {
    int cnt = 1;
    while (std::cin >> val) {
      if (val == currVal) {
        ++cnt;
      } else {
        std::cout << currVal << " occurs " << cnt << " times" << std::endl;
        currVal = val;
        cnt = 1;
      }
    }
    std::cout << currVal << " occurs " << cnt << " times" << std::endl;
  }
  return 0;
}
