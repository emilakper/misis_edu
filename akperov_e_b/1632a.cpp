#include <iostream>
#include <string>

int main() {
    int t;
    int n;
    std::string s;
    std::cin >> t;
    while (t--) {
        std::cin >> n;
        std::cin >> s;
        if (n > 2 || s == "11" || s == "00") {
            cout << "NO" <<"\n";
        }
        else {
            cout << "YES"<<"n";
        }
    }
}