#include <iostream>
#include <set>

int main() {
    int a;
    int m;
    std::cin >> a >> m;
    
    std::set<int> setofmods;
    bool f = true;
    if (a % m == 0) {
        f = false;
    }
    while ((a % m != 0) && (setofmods.find(a % m) == setofmods.end())) {
        setofmods.insert(a % m);
        if ((a + a % m) % m == 0)
            f = false;
        a += a % m;
    }
    if (f)
        std::cout << "No";
    else
        std::cout << "Yes";

}