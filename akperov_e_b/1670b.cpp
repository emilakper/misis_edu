#include <iostream>
#include <string>

int main() {
    int t;
    int n;
    int k;
    std::string password;
    std::string special;
    password.reserve(100000);
    std::cin >> t;
    while (t--) {
        std::cin >> n;
        password.resize(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> password[i];
        }
        std::cin >> k;
        for (int i = 0; i < k; ++i) {
            std::cin >> special[i];
        }
        int pos = -1;
        for (int i = n - 1; i >= 0; --i) {
            for (int p = 0; p < k; ++p) {
                if (password[i] == special[p]) {
                    pos = i;
                    break;
                }
            }
            if (pos != -1) {
                break;
            }
        }

        int max = 0;
        int count = 0;
        for (int i = pos - 1; i >= 0; --i) {
            ++count;
            for (int p = 0; p < k; p++) {
                if (password[i] == special[p]) {
                    if (count > max) {
                        max = count;
                    }
                    count = 0;
                    break;
                }
            }
        }
        if (count > max)
            max = count;
        if (max == 0)
            max = count;
        std::cout << max << "\n";
    }
}