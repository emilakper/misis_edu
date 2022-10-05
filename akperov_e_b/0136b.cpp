#include <iostream>

long long translation (long long n) {
    long long m = 0;
    long long power = 1;;
    while (n > 0) {
        m = m + power * (n % 3);
        power *= 10;
        n = n / 3;
    }
    return m;
}



int main() {
    long long a;
    long long c;
    std::cin >> a >> c;

    a = translation(a);
    c = translation(c);

    long long b=0;
    long long power=1;
    while (a != 0 || c != 0) {
        b = b + power * ((c % 10 - a % 10 + 3) % 3);
        power *= 10;
        a /= 10;
        c /= 10;
    }

    power = 1;
    a = 0;
    while (b != 0) {
        a += (b % 10) * power;
        power *= 3;
        b /= 10;
    }

    std::cout << a;
}