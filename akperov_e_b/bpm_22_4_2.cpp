#include <iostream>

int main() {
    double x;
    double y;
    double sumall = 1;
    double sumin = 0;
    double result;
    std::cin >> x >> y;

    //���� ������������� ������ ����� ��� ���������� (���� ����� � ���� �� ������)
    //������ ����������� � �������� :-)
    while (x * x + y * y <= 1) {
        if ((y <= x - 1) || (y >= x + 1)) {
            sumin++;
        }
        std::cin >> x >> y;
        sumall++;
    }
    sumall--;
    result = sumin / sumall;
    
    std::cout << result;
}