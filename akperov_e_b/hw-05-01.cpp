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
    float a = -1;
    float b = 1;
    float sigma = 0.1 ;
    float eps = 0.001;
    float s;

    float x = a;
    float i;
    float prev;
    float next;
    for (x; x <= b; x += sigma) {
        x = round(10 * x) / 10;
        i = 0;
        prev = std::pow(-1, i) * std::pow(x, 2 * i) / factorial(2 * i);
        i += 1;
        next = std::pow(-1, i) * std::pow(x, 2 * i) / factorial(2 * i);
        s = next + prev;
        while (std::abs(next - prev) >= eps) {
            i += 1;
            prev = next;
            next = std::pow(-1, i) * std::pow(x, 2 * i) / factorial(2 * i);
            s += next;
        }
        std::cout << x << "  " << s << "  " << cos(x) << "\n";
    }
    
}