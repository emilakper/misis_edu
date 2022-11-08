#include <iostream>
int main() {
    int n;
    int place=1;
    int sum;
    int a, b, c, d;
    std::cin >> n;
    std::cin >> a >> b >> c >> d;
    sum = a + b + c + d;
    int i;
    for (i = 2; i <= n; i++) {
        std::cin >> a >> b >> c >> d;
        if (a + b + c + d > sum) {
            place++;
        }
    }
    std::cout << place;
}