#include <iostream>
#include <vector>
#include <set>

int main()
{
    std::vector <int> input;
    input.reserve(200000);
    std::set<int> setofanswers;

    int n;
    int i;
    int x;
    std::cin >> n;
    for (i = 0; i < n; i++) {
        std::cin >> x;
        input.push_back(x);
    }
    int answer;
    answer = input[n - 1];
    setofanswers.insert(answer);
    for (i = n - 2; i >= 0; --i) {
        if (input[i] != answer && setofanswers.find(input[i]) == setofanswers.end()) {
            answer = input[i];
            setofanswers.insert(answer);
        }
    }
    std::cout << answer;
}