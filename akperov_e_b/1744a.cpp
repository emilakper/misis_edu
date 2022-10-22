#include <iostream>
#include <array>
#include <string>


int main() {
    int n;
    std::string x;
    const int nMax = 50;
    std::array <int, nMax> a{ '0' };
    int t;
    std::cin >> t;
    bool f;
    while (t--){
        f = true;
        std::cin >> n;
        for (int i = 0; i < n; i++) {
            std::cin >> a[i];
        }
        std::cin >> x;

        for (int i = 0; i < n-1; i++) {
            for (int j = i+1; j < n; j++) {
                if (a[i] == a[j] && x[i] != x[j])
                    f = false;
            }
        }
        if (f)
            std::cout << "YES" << "\n";
        else
            std::cout << "NO" <<"\n";
    }

}