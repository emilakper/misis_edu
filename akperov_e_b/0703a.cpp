#include <iostream>

int main() {
    int n;
    int m;
    int c;
    int i = 1;
    int mcount = 0;
    int ccount = 0;

    std::cin >> n;
    for (i; i <= n; i++) {
        std::cin >> m >> c;
        if (m > c) {
            mcount += 1;
        }
        if (m < c) {
            ccount += 1;
        }
    }
    if (mcount == ccount) {
        std::cout << "Friendship is magic!^^";
    }
    if (mcount < ccount) {
        std::cout << "Chris";
    }
    if (mcount > ccount) {
        std::cout << "Mishka";
    }
}