#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <iomanip>


int main() {
    int n;
    int r;
    std::cin >> n >> r;
    double x;
    x = (r * sin(M_PI / n)) / (1 - sin(M_PI / n));
    std::cout << std::fixed;
    std::cout << std::setprecision(7);
    std::cout << x;
}