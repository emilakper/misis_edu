#include <iostream>

int main() {
    int k;
    int n;
    int fi;
    int ti;
    tin max;
    int i = 2;

    std::cin >> n >> k;
    std::cin >> fi >> ti;

    if (ti <= k) {
        max = fi;
    }
    else {
        max = fi - ti + k;
    }

    for (i; i <= n; i++) {
        std::cin >> fi >> ti;

        if (ti <= k && fi > max) {
            max = fi;
        }

        if (ti > k && (fi - ti + k) > max) {
            max = fi - ti + k;
        }
    }
    std::cout << max;
}