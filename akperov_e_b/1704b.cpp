#include <iostream>


int main() {
    int t;
    int x;
    std::cin >> t;
    int n;
    int a;
    while (t--) {
        std::cin >> n >> x;
        int count = 0;
        int min = 0;
        int max = 1000000001;
        for (int i = 1; i <= n; ++i) {
            std::cin >> a;
            if (a + x<min || a - x>max) {
                count++;
                min = a - x;
                max = a + x;
            }
            else {
                if (min < a - x)
                    min = a - x;
                if (max > a + x)
                    max = a + x;
            }
        }
        std::cout << count << "\n";


    }
}