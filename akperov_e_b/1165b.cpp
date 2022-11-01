#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    int a;
    std::cin >> n;
    std::vector<int>contests;
    int i;
    for (i = 0; i < n; i++) {
        std::cin >> a;
        contests.push_back(a);
    }
    std::sort(contests.begin(), contests.end());
    
    int max = 0;
    int count = 1;
    for (i = 0; i < n; i++) {
        if (contests[i] >= count) {
            max += 1;
            count += 1;
        }
    }
    std::cout << max;
}