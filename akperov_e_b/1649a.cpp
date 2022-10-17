#include <iostream>


int main() {
    int left0;
    int right0;
    int x;
    int n;
    int t;
    bool f;
    std::cin >> t;

    while (t--) {
        std::cin >> n;
        left0 = 0;
        right0 = 0;
        f = false;
        for (int i = 1; i <= n; ++i) {
            std::cin >> x;
            if (x == 0) {
                right0 = i;
                f = true;
            }
            if (x == 0 && left0 == 0) {
                left0 = i;
                f = true;
            }
        }
        if (f) {
            std::cout << right0 - left0 + 2 << "\n";
        }
        else {
            std::cout << 0 << "\n";
        }
    }


}