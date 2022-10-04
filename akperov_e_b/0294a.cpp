#include <iostream>
#include <array>

int main()
{
    const int nMax = 100;
    std::array <int, nMax> a{ 0 };

    int i;
    int j;
    int n;
    int m;
    int x;
    int y;
    std::cin >> n;

    for (i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::cin >> m;
    for (i = 0; i < m; i++) {
        std::cin >> x >> y;
        if ((x - 1) != 0)
            a[x - 2] += y - 1;
        if (x - 1 != n - 1)
            a[x] += a[x - 1] - y;
        a[x - 1] = 0;
    }

    for (i = 0; i < n; i++)
        std::cout << a[i] << "\n";
}