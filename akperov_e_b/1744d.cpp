#include <iostream>
#include <array>


int count2(int n) {
    int cnt = 0;
    while (n%2==0 && n>0) {
        n /= 2;
        cnt += 1;
    }
    return cnt;
}


int main() {
    int n;
    int a;
    int cnt2;
    int ans;
    int i;
    int t;
    std::array <int, 19> indexes{ 0 };

    std::cin >> t;
    while (t--) {
        std::cin >> n;

        for (i = 1; i < indexes.size(); ++i) {
            indexes[i] = 0;
        }


        cnt2 = 0;
        for (i = 0; i < n; ++i) {
            std::cin >> a;
            cnt2 += count2(a);
        }
        ans = 0;
        for (i = 1; i <= n; ++i) {
            if (count2(i) > 0)
                indexes[count2(i)]+=1;
        }
        i = indexes.size()-1;
        while (cnt2 < n) {
            if (indexes[i] > 0) {
                cnt2 += i;
                indexes[i] -= 1;
                ans += 1;
                continue;
            }
            if (i == 0 && indexes[i]==0)
                break;
            --i;

        }

        if (cnt2 < n)
            ans = -1;


        std::cout << ans << "\n";
    }


}
