#include <iostream>
#include <string>

int main() {
    std::string x;
    int right1;
    int left0;
    int t;
    bool f;
    std::cin >> t;
    while (t--) {
        f = true;
        right1 = 0;
        left0 = 0;
        std::cin >> x;
        for (int i = 0; i < x.length(); ++i) {
            if (x[i] == '1') {
                right1 = i - 1;
            }
            if (x[i] == '0' && f) {
                left0 = i + 1;
                f = false;
            }
        }
        std::cout << x.length() - left0 - right1 << "\n";
    }
}


