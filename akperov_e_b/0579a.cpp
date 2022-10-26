#include <iostream>

int main() {

    int x;
    std::cin >> x;
    int ans = 0;
    for (; x; x >>= 1) {
        ans += x & 1;
    }
    std::cout << ans;
}