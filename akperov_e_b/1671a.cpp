#include <iostream>
#include <string>

int main() {
    std::string x;
    int t;
    bool f;
    std::cin >> t;
    while (t--) {
        f = true;
        std::cin >> x;
        if (x.length() == 1) {
            std::cout << "No" << "\n";
            continue;
        }
        else {
            for (int i = 0; i < x.length(); ++i) {
                if ((i == 0 || x[i] != x[i - 1]) && (i == x.length() - 1 || x[i] != x[i + 1]))
                    f = false;
            }
        }
        if (f)
            std::cout << "Yes" << "\n";
        else
            std::cout << "No" << "\n";
    }
}