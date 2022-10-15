#include <iostream>

int main()
{
    int n;
    int k;
    int ai;
    int min;

    std::cin >> n >> k;
    min = k;
    for (int i = 0; i < n; ++i) {
        std::cin >> ai;
        if (k % ai == 0 && k / ai < min) {
            min = k / ai;
        }
    }
    std::cout << min;
}