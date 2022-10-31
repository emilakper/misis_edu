#include <iostream>


int main() {
    int t;
    int n;
    int i;
    int k;
    std::cin >> t;
    while (t--) {
        std::cin >> n;
        k = 0;
        while ((1 << (k + 1)) <= n - 1) {
            ++k;
        }
        for (i = (1 << k) - 1; i >= 0; i--) {
            std::cout << i << ' ';
        }
        for (i = (1 << k); i < n; i++) {
            std::cout << i << ' ';
        }
        std::cout << '\n';
    }
}