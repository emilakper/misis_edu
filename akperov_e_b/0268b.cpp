#include <iostream>


int main() {
    int n;
    int i;
    int ans=0;
    std::cin >> n;
    for (i = 1; i < n; i++) {
        ans += (n - i) * i;
    }
    ans += n;
    std::cout << ans;

}
