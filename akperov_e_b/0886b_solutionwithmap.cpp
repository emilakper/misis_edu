#include <iostream>
#include <map>

int main()
{
    std::map <int, int> mp;
    int n;
    int i;
    int x;
    std::cin >> n;
    for (i = 0; i < n; i++) {
        std::cin >> x;
        mp[x]=i;
    }
    int max;
    int ans;

    std::map <int, int> ::iterator it = mp.begin();
    max = it->second;
    ans = it->first;
    it++;
    for (it; it != mp.end(); it++) {
        if (it->second < max) {
            max = it->second;
            ans = it->first;
        }
    }
    std::cout << ans;
}
