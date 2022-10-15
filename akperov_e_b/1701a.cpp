#include <iostream>
#include <array>


int main() {
    int t;
    int count;
    int x;
    std::cin >> t;
    while (t--) {
        count = 0;
        for (int i = 1; i <= 4; ++i) {
            std::cin >> x;
            if (x == 1)
                count += 1;
        }
        if (count == 0)
            std::cout << 0 << "\n";
        if (count == 4)
            std::cout << 2 << "\n";
        if (count > 0 && count < 4)
            std::cout << 1 << "\n";
    }
}