#include <iostream>

int main()
{
    int i;
    int x;
    int min;
    for (i = 0; i < 25; i++) {
        std::cin >> x;
        if (1 == x) {
            min = abs(2 - (i % 5)) + abs(2 - (i / 5));
        }
    }

    std::cout << min;
}