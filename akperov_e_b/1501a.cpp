#include <iostream>
#include <array>

int main(){
    const int nMax = 100;
    std::array <int, nMax> a{ 0 };
    std::array <int, nMax> b{ 0 };
    std::array <int, nMax> t{ 0 };
    int n;  
    int i;
    int j;
    std::cin >> j;
    while (j--) {
        std::cin >> n;

        for (i = 0; i < n; ++i) {
            std::cin >> a[i] >> b[i];
        }
        for (i = 0; i < n; ++i) {
            std::cin >> t[i];
        }

        int x = a[0]+t[0];
        int y;
        if (x + ((b[0] - a[0] + 1) / 2) < b[0]) {
            y = b[0];
        }
        else {
            y = x + ((b[0] - a[0] + 1) / 2);
        }
        std::cout << x << " " << y;

        for (i = 1; i < n; ++i) {
            x = y + (a[i] - b[i - 1]) + t[i];
            if (x + ((b[i] - a[i] + 1) / 2) < b[i]) {
                y = b[i];
            }
            else {
                y = x + ((b[i] - a[i] + 1) / 2);
            }
        }
        std::cout << x <<"\n";
    }
}
