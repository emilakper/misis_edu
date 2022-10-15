#include <iostream>
#include <array>


int main() {
    int n;
    int x;
    const int nMax = 100;
    std::array <int, nMax> a{ 0 };
    int t;
    std::cin >> t;
    int count0;
    while (t--) {
        count0 = 0;
        std::cin >> n;
        for (int i = 0; i < n; ++i) {
            std::cin >> a[i];
            if (a[i] == 0)
                count0 += 1;
        }
        bool f = false;
        for (int i = 0; i < n; ++i) {
            for (int j = i+1; j < n; ++j) {
                if (a[i] == a[j]) {
                    f = true;
               }
            }
        }
        
        if (count0 > 0) {
            std::cout << n - count0 << "\n";
        }
        else if (f) {
            std::cout << n << "\n";
        }
        else {
            std::cout << n + 1 << "\n";
        }
    }

}