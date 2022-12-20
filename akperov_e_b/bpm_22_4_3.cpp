#include <iostream>
#include <string>

int main() {
    std::string word1;
    std::string word2;

    std::cin >> word1 >> word2;
    
    int i = word1.length();
    int j = word2.length();

    while ((i-1 > -1) && (j-1 > -1) && (word1[i-1] == word2[j-1])) {
        i--;
        j--;
    }

    std::cout << i + j;
}