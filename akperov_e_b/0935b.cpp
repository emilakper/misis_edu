#include <iostream>
#include <string>

int main() {
    int n;
    int ans = 0;
    std::cin >> n;
    std::string x;
    std::cin >> x;
    int countu = 0;
    int countr = 0;
    ans = 0;
    for (int i = 0; i < n - 1; i++) {

        if (x[i] == 'U') {
            countu += 1;
        }
        else {
            countr += 1;
        }

        if ((countu == countr) && (x[i] == x[i + 1])) {
            ans += 1;
        }

    }
    std::cout << ans;
}