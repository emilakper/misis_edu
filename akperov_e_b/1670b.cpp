#include <iostream>
#include <array>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(false);
    int t;
    int n;
    int k;
    std::string password;
    std::array <int, 128> special {0};
    password.reserve(100000);
    std::cin >> t;
    while (t--) {
        std::cin >> n;
        password.resize(n);
        std::cin >> password;
        std::cin >> k;
        for (int i = 0; i < 128; ++i) {
            special[i] = 0;
        }
        unsigned char ch = 0;
        for (int i = 0; i < k; ++i) {
            std::cin >> ch;
            special[ch] = 1;;
        }

        int pos = -1;
        for (int i = n - 1; i >= 0; --i) {
            if (special[password[i]] == 1) {
                pos = i;
                break;
            }
        }

        int max = 0;
        int count = 0;
        for (int i = pos - 1; i >= 0; --i) {
            ++count;
            if (special[password[i]] == 1) {
                if (count > max) {
                    max = count;
                }
                count = 0;
            }
        }
        
        if (count > max)
            max = count;
        if (max == 0)
            max = count;
        std::cout << max << "\n";
    }
}
