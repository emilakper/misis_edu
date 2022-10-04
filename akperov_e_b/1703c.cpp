#include <iostream>
#include <string>

int main() {
    int t = 0;
    std::cin >> t;
    std::string shifr;
    shifr.reserve(100);
    int n = 0;
    int bsum = 0;
    std::string b;
    for (int i = 0; i < t; i += 1) {
        std::cin >> n;
        shifr.resize(n);
        for (int j = 0; j < n; j += 1) {
            std::cin >> shifr[j];
        }
        for (int k = 0; k < n; k += 1) {
            std::cin >> bsum >> b;
            for (int ki = 0; ki < bsum; ki += 1) {
                char& ch = shifr[k];
                if ('U' == b[ki]) {
                    ch = '0' == ch ? '9' : ch - 1;
                }
                else if ('D' == b[ki]) {
                    ch = '9' == ch ? '0' : ch + 1;
                }
            }
        }
        for (int ki = 0; ki < shifr.length(); ki += 1) {
            std::cout << shifr[ki] << ' ';
        }
        std::cout << '\n';
    }
}