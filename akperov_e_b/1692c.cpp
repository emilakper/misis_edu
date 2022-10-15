#include <iostream>
#include <string>

int main() {
    int t;
    std::cin >> t;
    int i;
    int j;
    std::string x;
    int xi;
    int xj;
    bool f;
    while (t--) {
        f = true;
        for (i = 0; i < 8; i++) {
            std::cin >> x;
            for (j = 0; j < 6; j++) {
                if (x[j] == '#' && x[j + 2] == '#') {
                    xi = i;
                    xj = j + 2;
                }
            }

        }
        std::cout << xi << " " << xj << "\n";
    }
}
