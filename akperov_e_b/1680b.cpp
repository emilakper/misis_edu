#include <iostream>
#include <string>

int main() {
    std::string xi;
    std::string xii;
    int mini;
    int minj;
    int t;
    int n;
    int m;
    int i;
    int j;
    bool f;
    std::cin >> t;
    while (t--) {
        f = true;
        mini = 6;
        minj = 6;
        std::cin >> n >> m;
        for (i = 0; i < n; ++i) {
            std::cin >> xi;
            for (j = 0; j < m; ++j) {
                if (xi[j] == 'R' && mini>i) {
                    mini = i;
                    xii = xi;
                }
                if (xi[j] == 'R' && minj > j) {
                    minj = j;
                }
            }
        }

        if (xii[minj] =='R') {
            std::cout << "YES" << "\n";
        }
        else {
            std::cout << "NO" << "\n";
        }
    }
    
}