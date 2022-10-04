#include <iostream>

int main() {
    int n;
    int i = 2;
    std::cin >> n;
    std::cout << "I hate";
    for (i; i <= n; i++) {
        std::cout << " that";
        if (0 == i % 2) {
            std::cout << " I love";
        }
        else {
            std::cout << " I hate";
        }
    }
    std::cout << " it";
}