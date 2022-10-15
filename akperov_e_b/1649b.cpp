#include <iostream>

int main() {
    long long n;
    long long t;
    long long a;
    long long ans;
    bool f;
    long long sum;
    std::cin >> t;
    while (t--) {
        f = true;
        std::cin >> n;
        int maxa = -1;
        sum = 0;
        for (int i = 1; i <= n; ++i) {
            std::cin >> a;
            if (a > maxa) {
                maxa = a;
            }
            if (a != 0) {
                f = false;
            }
            sum += a;
        }

        std::cout << sum << " " << maxa << "\n";
        if (2 * maxa - sum <= 0 && !f) {
            std::cout << 1 << "\n";
        }
        if (2 * maxa - sum > 0 && !f){
            std::cout << 2 * maxa - sum << "\n";
        }
        if (!f == false) {
            std::cout << 0 << "\n";
        }
    }
}