#include <iostream>
#include <array>

int main(){
    const int nMax = 100;
    std::array <int, nMax> a{ 0 };
    std::array <int, nMax> b{ 0 };
    int n;
    int i;
    std::cin >> n;

    for (i = 1; i <= n; i++) {
        std::cin >> a[i];
        b[a[i]] = i;
    }

    for (i = 1; i <= n; i++) {
        std::cout << b[i] << " ";
    }

}