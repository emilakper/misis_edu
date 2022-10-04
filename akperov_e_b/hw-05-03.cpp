#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>


int factorial(int n) {
    if (n == 1 || n == 0) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}


int main() {
    float a = 0;
    float b = 1;
    float sigma = 0.1;
    float eps = 0.0001;
    float s;

    float x = a;
    float i;
    float prev;
    float next;
    for (x; x <= b; x += sigma) {
        x = round(10 * x) / 10;
        i = 0;
        prev = std::pow(2*x, i) / factorial(i);
        i += 1;
        next = std::pow(2 * x, i) / factorial(i);
        s = next + prev;
        while (std::abs(next - prev) >= eps || (next == prev && x!=0)) {
            i += 1;
            prev = next;
            next = std::pow(2 * x, i) / factorial(i);
            s += next;
        }
        std::cout  << x << "  " << s << "  " << std::pow(M_E, 2 * x) << "\n";
    }

}