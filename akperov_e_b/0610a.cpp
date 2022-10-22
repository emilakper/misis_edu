#include <iostream>


int main() {
    int n;
    std::cin >> n;
    if (n % 2 == 1) {
        std::cout << 0;
    }
    else if (n % 4 == 0) {
        std::cout << (n / 4) - 1;
    }
    else {
        std::cout << n / 4;
    }

}
