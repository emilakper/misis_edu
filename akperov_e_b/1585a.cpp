#include <iostream>

int main() {

    int t;
    int i;
    int a1;
    int a2=0;
    int k;
    int n;
    bool f;

    std::cin >> t;
    
    while (t--) {
        std::cin >> n;
        std::cin >> a1;
        k = 1;
        f = true;
        if (a1 == 1) {
            k += 1;
        }
        for (i = 2; i <= n; ++i) {
            std::cin >> a2;
            if (a1 == 0 && a2 == 0 && f) {
                k = -1;
                f = false;
            }

            if (a1 == 0 && a2 == 1 && f) {
                k += 1;
            }

            if (a1 == 1 && a2 == 1 && f) {
                k += 5;
            }
            a1 = a2;
        }
        std::cout << k << "\n";

    }

}