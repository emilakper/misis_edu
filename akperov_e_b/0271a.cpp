#include <iostream>
int main()
{
    int x;
    std::cin >> x;
    x = x + 1;
    for (; x <= 9999; x += 1) {
        int s1 = x / 1000;
        int s2 = (x - 1000 * s1) / 100;
        int s3 = (x - 100 * s2 - 1000 * s1) / 10;
        int s4 = x % 10;
        bool b = (s1 != s2);
        b = b && s2 != s3;
        b = b && s3 != s4;
        b = b && s4 != s1;
        b = b && s4 != s2;
        b = b && s1 != s3;
        if (b) break;
    }
    std::cout << x;
}