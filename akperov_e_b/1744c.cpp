#include <iostream>
#include <string>

int main() {
    std::string x;
    int maxdist;
    int green;
    int n;
    int i;
    int t;
    char color;
    std::cin >> t;
    while (t--) {
        std::cin >> n >> color;
        std::cin >> x;
        x.append(x);
        green = 0;
        maxdist = 0;
        if (color == 'g') {
            std::cout << 0 << "\n";
            continue;
        }
        for (i = 2*n-1; i >=0; --i) {
            if (x[i] == 'g') {
                green = i;
            }
            if (x[i] == color) {
                if (maxdist < green - i)
                    maxdist = green - i;
            }
        }
        std::cout << maxdist <<"\n";
    }
}