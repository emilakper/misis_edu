#include <iostream>
#include <string>

int main() {
    std::string x;
    int countb;
    int t;
    int k;
    int maxb;
    int n;
    int i;
    bool f;
    std::cin >> t;

    while (t--) {
        std::cin >> n >> k;
        std::cin >> x;
        countb = 0;
        maxb = 0;
        f = true;
        for (i = 0; i < k; i++) {
            if (x[i] == 'B') {
                countb += 1;
            }
        }
        if (countb == k && f) {
            std::cout << 0 << "\n";
            f = false;
        }
        else {
            maxb = countb;
        }
        for (i; i <= n; i++) {
            if (x[i] == 'B' && x[i - k] == 'W')
                countb += 1;
            if (x[i] == 'W' && x[i - k] == 'B')
                countb -= 1;
            if (countb > maxb)
                maxb = countb;
            if (countb == k && f) {
                std::cout << 0 << "\n";
                f = false;
            }
        }
        if (f)
            std::cout << k - maxb  << "\n";
    }
}