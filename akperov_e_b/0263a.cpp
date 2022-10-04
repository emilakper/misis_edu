#include <iostream>

int main()
{
    int i;
    int j;
    int x;
    int min;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++) {
            std::cin >> x;
            if (1 == x) {
                min = abs(3 - i) + abs(3 - j);
            }
        }
    }
    std::cout << min;
}