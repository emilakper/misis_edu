#include <iostream>

int main()
{
    int t;
    int i;
    int j;
    int n;
    int k;
    int r;
    int c;


    std::cin >> t;

    for (t; t > 0; t--) {

        std::cin >> n >> k >> r >> c;
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= n; j++) {
                if ((i + j) % k == (r + c) % k)
                    std::cout << "X";
                else
                    std::cout << ".";
            }
            std::cout << "\n";
        }
    }
}