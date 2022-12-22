#include <iostream>
#include <fstream>

int main() {
    double x;
    double y;
    double sumall = 1;
    double sumin = 0;
    double result;
    std::ifstream fin("point.txt");

    fin >> x >> y;
    while (fin) {
        if ((y <= x - 1) || (y >= x + 1)&& (x* x + y * y <= 1)) {
            sumin++;
        }
        sumall++;
        fin >> x >> y;
    }
    sumall--;
    result = sumin / sumall;
    std::cout << result;
}
