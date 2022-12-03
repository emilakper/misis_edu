#include <iostream>


int main() {
  int t;
  int n;
  std::cin >> t;
  while (t--) {
    std::cin >> n;
    int a = 1;
    for (int j = 2; j * j <= n; ++j) {
      if (n % j == 0) {
        a = n / j;
        break;
      }
    }
    std::cout << a << ' ' << n - a << '\n';
  }
}
