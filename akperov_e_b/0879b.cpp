#include <iostream>
#include <deque>

int main() {
    int n;
    long long k;
    int a;
    std::deque<int> d;
    int i;
    int max;
    std::cin >> n >> k;
    std::cin >> a;
    d.push_back(a);
    max = a;
    for (i = 1; i < n; ++i) {
        std::cin >> a;
        d.push_back(a);
        if (a > max)
            max = a;
    }
    int combo = 0;
    if (k > n - 1) {
        std::cout << max;
    }
    else {
        while (combo < k) {
            if (d[0] > d[1]) {
                combo += 1;
                d.push_back(d[1]);
                d.erase(d.begin() + 1);
            }
            else {
                combo = 1;
                d.push_back(d[0]);
                d.erase(d.begin());
            }
        }
        std::cout << d[0];
    }
}