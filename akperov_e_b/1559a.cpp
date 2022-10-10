#include <iostream>

int main() {
    int n;
    int t;
    std::cin >> t;
    int x;
    int minimum; 
    
    while (t--) {
        std::cin >> n;
        std::cin >> minimum;

        for (int i = 2; i <= n; ++i) {
            std::cin >> x;
            minimum = minimum & x;
        }

        std::cout << minimum << "\n";
    }

}
