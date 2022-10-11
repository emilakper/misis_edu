#include <iostream>

int main() {
    int t;
    std::cin >> t;
    int i;
    int j;
    char x;
    int xi;
    int xj;
    int count;
    int count1=0;
    bool f = true;;
    while (t--) {
        for (i = 1; i <= 8; i++) {
            count = 0;
            for (j = 1; j <= 8; j++) {
                std::cin >> x;
                if (x == '#') {
                    count += 1;
                    if (count == 1 && f) {
                        xi = i;
                        xj = j;
                    }
                }
            }
            if (count == 1) {
                count1 += 1;
            }
            if (count == 1 && count1 == 2) {
                f = false;
            }
        }
        std::cout << xi << " " << xj << "\n";
    }
}
