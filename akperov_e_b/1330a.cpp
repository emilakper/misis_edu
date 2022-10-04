#include <iostream>
#include <array>

int main()
{
    const int nMax = 201;
    std::array <int, nMax> a{ 0 };
    int t;
    int x;
    int i;
    int j;
    int n;
    int vvod;
    std::cin >> t;
    for (j = 1; j <= t; j++) {
        std::cin >> n >> x;
        for (i = 1; i <= n; i++) {
            std::cin >> vvod;
            a[vvod] += 1;
        }
        i = 1;
        while (i < 201) {
            if (a[i] == 0 && x != 0) {
                x -= 1;
            }
            else {
                if (a[i] == 0 && x == 0) {
                    break;
                }
            }
            i += 1;
        }
        std::cout << i - 1 << "\n";
        for (i = 1; i <= 200; i++)
            a[i] = 0;
    }

}