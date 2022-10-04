#include <iostream>
#include <string>

int main() {
    int i;
    int t;
    std::cin >> t;
    while (t--) {
        std::string s;
        s.reserve(100);
        std::cin >> s;
        std::cout << s[0];
        for (i = 1; i < s.length(); i += 2) {
            std::cout << s[i];
        }
        std::cout << "\n";
    }
}