#include <iostream>

int main() {

    int n;
    int m;
    int i;
    int j;
    int t;
    int first = 1;
    int second = 0;
    std::cin >> t;
    while (t--) {
        std::cin >> n;
        std::cin >> m;
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= m; j++) {
                if (j % 4 == 0 || j % 4 == 1)
                    std::cout << first << " ";
                else
                    std::cout << second << " ";
            }
            std::cout << "\n";
            if (i%2==1)
                std::swap(first, second);
        }
    }
}