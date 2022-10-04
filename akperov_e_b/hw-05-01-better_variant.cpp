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
    double a = -1;
    double b = 1;
    double sigma = 0.1 ;
    double eps = 0.001;
    double s;
    double x = a;
    int i;
    double next;
    double stepen;
    for (x; x <= b; x += sigma) {
        x = round(10 * x) / 10;
        i = 0;
        stepen = 1;
        if (i % 2 == 0) {
            next = stepen / factorial(2 * i);
        }
        else {
            next = -stepen / factorial(2 * i);
        }

        //next = std::pow(-1, i) * std::pow(x, 2 * i) / factorial(2 * i);
        s = next;
        while (std::abs(next) >= eps) {
            i += 1;
            stepen = stepen * x * x;
            if (i % 2 == 0) {
                next = stepen / factorial(2 * i);
            }
            else {
                next = -stepen / factorial(2 * i);
            }
            s += next;
        }
        std::cout << x << "  " << s << "  " << cos(x) << "\n";
    }
    
}