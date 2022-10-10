#include <iostream>


int main() {
    int t;
    std::cin >> t;
    int n;
    while (t--) {
        std::cin >> n;
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= i; ++j) {
                if (j == 1 || j == i)
                    std::cout << "1 ";
                else
                    std::cout << "0 ";
            }
            std::cout << "\n";
        }
    }
}
