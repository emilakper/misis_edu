#include <iostream>

int main()
{
    long long m;
    long long n;
    long long a;
    std::cin >> m >> n >> a;
    std::cout << ((m + a - 1) / a) * ((n + a - 1) / a);
}