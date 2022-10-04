#include <iostream>
#include <vector>

int main()
{
    std::vector <int> a;
    a.reserve(50);
    int j;
    int i;
    int n;
    int v;
    int k;
    int s;
    int score = 0;



    std::cin >> n >> v;
    for (i = 0; i <= n - 1; i++) {
        a.push_back(0);
    }
    for (i = 0; i <= n - 1; i++) {
        std::cin >> k;
        for (j = 1; j <= k; j++) {
            std::cin >> s;
            if (v > s)
                a[i] += 1;
        }
        if (a[i] > 0)
            score += 1;
    }
    std::cout << score << "\n";
    for (i = 0; i <= n - 1; i++) {
        if (a[i] > 0)
            std::cout << i + 1 << " ";
    }

}