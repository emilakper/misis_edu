#include <iostream>
#include <array>

int main()
{
    const int nMax = 50;
    std::array <int, nMax> a{ 0 };

    int i;
    int j;
    int n;
    int count;
    std::cin >> n;

    for (i = 0; i <= n - 1; i++) {
        std::cin >> a[i];
    }

    count = n;

    for (i = n - 1; i >= 0; i--) {
        for (j = i - 1; j >= 0; j--) {
            if (a[j] == a[i] && a[j] != 0) {
                a[j] = 0;
                count--;
            }
        }
    }


    std::cout << count << "\n";

    for (i = 0; i <= n - 1; i++) {
        if (a[i] != 0) {
            std::cout << a[i] << " ";
        }
    }


}