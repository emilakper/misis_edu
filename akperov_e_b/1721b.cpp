#include <iostream>

int main()
{
    int n;
    int m;
    int sx;
    int sy;
    int d;
    int t;
    int i;

    std::cin >> t;
    for (i = 1; i <= t; i++) {
        std::cin >> n >> m >> sx >> sy >> d;
        if ((sx + d >= n && sy + d >= m) || (sx - d <= 1 && sy - d <= 1) || (sx - d <= 1 && sx + d >= n) || (sy - d <= 1 && sy + d >= m)) {
            std::cout << "-1" << "\n";
        }
        else {
            std::cout << n + m - 2 << "\n";
        }
    }



}