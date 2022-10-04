#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>


int main() {
    double a = 0;
    double b = 1;
    double sigma = 0.05;
    double eps = 0.001;
    double s;

    double x = a;
    double stepen=a;
    double i;
    double next;
    for (x; x <= b; x += sigma) {
        x = round(100 * x) / 100;
        i = 1;
        next = stepen * sin(i * M_PI / 4);
        s = next;
        while (std::abs(next) >= eps || next==0) {
            i += 1;
            stepen *= x;
            next = stepen * sin(i * M_PI / 4);
            s += next;
        }
        std::cout  << x << "  " << s << "  " << (x * sin(M_PI / 4)) / (1 - 2 * x * cos(M_PI / 4)) << "\n";
    }

}