#include <iostream>
#include <array>
#include <string>


int main() {
    int n;
    int m; 
    int i;
    std::string x;
    const int nMax = 3000;
    std::array <std::string, nMax> a{};
    std::array <std::string, nMax> b{};
    
    std::cin >> n >> m;
    for (i = 0; i < m;i++) {
        std::cin >> a[i] >> b[i];
    }
    while (n--) {
        std::cin >> x;
        for (i = 0; i < m; i++) {
            if (a[i] == x || b[i] == x) {
                if (a[i].length() > b[i].length())
                    std::cout << b[i] << " ";
                else
                    std::cout << a[i] << " ";

            }
        }
    }

}