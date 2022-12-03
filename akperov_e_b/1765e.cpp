#include <iostream>
 
using namespace std;

int main()
{
    int n; 
    int a; 
    int b;  
    int t;
    std::cin >> t;
    for(int i = 0; i < t; i++){
    std::cin >> n >> a >> b;
    int x = (n + a - 1) / a;
    if (a > b) 
        x = 1;
    std::cout << x << endl;
    }
}
