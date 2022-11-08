#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    int a;
    int b;
    int si;
    int s1;
    int sum_holes;
    std::cin >> n >> a >> b;
    std::vector<int>holes;
    int i;
    std::cin >> s1;
    sum_holes = s1;
    for (i = 0; i < n-1; i++) {
        std::cin >> si;
        sum_holes += si;
        holes.push_back(si);
    }
    std::sort(holes.begin(), holes.end());

    int min = 0;
    i = n - 2;
    while (s1 * a / sum_holes < b) {
        sum_holes -= holes[i];
        i -= 1;
        min += 1;
    }
    std::cout << min;
}