#include <iostream>
#include <string>

int main() {
    std::string x;
    int countr;
    int countb;
    int t;
    int n;
    int i;
    bool f;
    std::cin >> t;

    while (t--) {
        std::cin >> n;
        std::cin >> x;
        countr = 0;
        countb = 0;
        f = true;
        for (i = 0; i < n; ++i) {
            if (x[i] == 'B')
                countb += 1;
            if (x[i] == 'R')
                countr += 1;
            if (x[i] == 'W' && countr!=0 && countb!=0) {
                countr = 0;
                countb = 0;
                continue;
            }
            if (x[i] == 'W' && ((countr != 0 && countb==0) ||(countr == 0 && countb != 0))) {
                countr = 0;
                countb = 0;
                f = false;
                break;
            }
        }
        if ((countr != 0 && countb == 0) || (countr == 0 && countb != 0))
            f = false;
        if (n == 1)
            f = false;
        if (f)
            std::cout << "YES" << "\n";
        else
            std::cout << "NO" << "\n";
    }
}