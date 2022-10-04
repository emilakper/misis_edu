#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;
    std::string teama;
    std::string teamb;
    std::string x;
    int counta = 1;
    int countb = 0;
    std::cin >> x;
    teama = x;
    n--;
    while (n--) {
        std::cin >> x;
        if (x == teama) {
            counta += 1;
        }
        else {
            countb += 1;
            teamb = x;
        }
    }
    if (counta > countb)
        std::cout << teama;
    else
        std::cout << teamb;
}