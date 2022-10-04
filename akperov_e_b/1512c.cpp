#include <iostream>
#include <string>

int main() {
    int t;
    int b;
    int a;
    std::string s;
    s.reserve(200000);
    std::cin >> t;
    while (t--) {
        std::cin >> a >> b;
        s.resize(a + b);
        int aconst = a;
        int bconst = b;
        for (int i = 0; i < aconst + bconst; ++i) {
            std::cin >> s[i];
            if (s[i] == '0') {
                a -= 1;
            }
            if (s[i] == '1') {
                b -= 1;
            }
        }

        for (int i = 0; i <= aconst + bconst - i - 1; ++i) {

            if (s[i] == '0' && s[aconst + bconst - i - 1] == '?') {
                s[aconst + bconst - i - 1] = '0';
                a -= 1;
            }
            if (s[i] == '?' && s[aconst + bconst - i - 1] == '0') {
                s[i] = '0';
                a -= 1;
            }
            if (s[i] == '1' && s[aconst + bconst - i - 1] == '?') {
                s[aconst + bconst - i - 1] = '1';
                b -= 1;
            }
            if (s[i] == '?' && s[aconst + bconst - i - 1] == '1') {
                s[i] = '1';
                b -= 1;
            }
        }

        for (int i = 0; i < aconst + bconst - i - 1; ++i) {
            if (s[i] == '?' && a != 0 && (a / 2) >= 1) {
                s[i] = '0';
                s[aconst + bconst - i - 1] = '0';
                a -= 2;
            }
            if (s[i] == '?' && b != 0 && (b / 2) >= 1) {
                s[i] = '1';
                s[aconst + bconst - i - 1] = '1';
                b -= 2;
            }
        }
        if (s[((aconst + bconst) / 2)] == '?' && a != 0) {
            s[((aconst + bconst) / 2)] = '0';
            a -= 1;
        }
        if (s[((aconst + bconst) / 2)] == '?' && b != 0) {
            s[((aconst + bconst) / 2)] = '1';
            b -= 1;
        }



        bool f = true;
        for (int i = 0; i <= aconst + bconst - i - 1; ++i) {
            if (s[i] != s[aconst + bconst - i - 1])
                f = false;
        }

        a = aconst;
        b = bconst;
        for (int i = 0; i < aconst + bconst; ++i) {
            if (s[i] == '0') {
                a -= 1;
            }
            if (s[i] == '1') {
                b -= 1;
            }
        }

        if (f == true && (a == 0) && (b == 0)) {
            std::cout << s << "\n";
        }
        else {
            std::cout << -1 << "\n";
        }


    }

}