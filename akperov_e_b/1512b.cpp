#include <iostream>
#include <string>

int main() {
    std::string x;
    int n;
    int i1;
    int i2;
    int j1;
    int j2;
    bool f;


    f = true;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> x;
        for (int j = 0; j < n; j++) {
            if (x[j] == '*' && f) {
                i1 = i;
                j1 = j;
                f = false;
            }
            if (x[j] == '*') {
                i2 = i;
                j2 = j;
            }
        }
    }
   

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            if (i1 == i2) {
                if ((i == i1 && (j == j1 || j == j2)) || (i == ((i1 + 1)%n) && (j == j1 || j == j2))) {
                    std::cout << "*";
                }
                else {
                    std::cout << ".";
                }
            } else if (j1 == j2) {
                    if ((j == j1 && (i == i1 || i == i2)) || (j == ((j1 + 1)%n) && (i == i1 || i == i2))) {
                        std::cout << "*";
                    }
                    else {
                        std::cout << ".";
                    }
            }
            else {
                if ((i == i1 && j == j1) || (i == i2 && j == j2) || (i == i1 && j == j2) || (i == i2 && j == j1)) {
                    std::cout << "*";
                }
                else {
                    std::cout << ".";
                }
            }
        }
        std::cout << "\n";
    }
}

 