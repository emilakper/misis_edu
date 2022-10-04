#include <iostream>

int main()
{
    int t;
    int n;
    int x;
    int i = 1;
    int min = 0;
    int power = 1;
    std::cin >> t;
    for (i; i <= t; i++) {
        std::cin >> n;
        x = n;
        while (x != 0) {
            if (0 != x % 10) {
                min += 1;
            }
            x /= 10;
        }
        std::cout << min << "\n";
        if (1 == min) {
            std::cout << n << "\n";
        }
        else {
            while (n != 0) {
                if (0 != n % 10) {
                    std::cout << (n % 10) * power << " ";
                }
                n /= 10;
                power *= 10;
            }
            std::cout << "\n";
            power = 1;
        }
        min = 0;
    }
}