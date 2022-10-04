#include <iostream>

int main() {
    int n;
    int p;
    int q;
    int i = 1;
    int count = 0;

    std::cin >> n;
    for (i; i <= n; i++) {
        std::cin >> p >> q;
        if (q - p >= 2) {
            count += 1;
        }
    }
    std::cout << count;
}