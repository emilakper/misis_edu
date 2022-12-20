
#include <iostream>
#include <cmath>

int factorial(int n) {
	if (n == 1 || n == 0) {
		return 1;
	}
	else {
		return n * factorial(n - 1);
	}
}

int main()
{

	double eps = 0.0001;
	double dx = 0.05;
	double sum = 0;
	int i;
	double next;
	
	for (double x = 0.1; x <= 1.0+dx*0.1; x += dx) {
		sum = 0;
		i = 0;
		next = pow(x, 2 * i) / factorial(2 * i);
		while (next >= eps) {
			sum += next;
			i++;
			next = pow(x, 2 * i) / factorial(2 * i);
		}
		std::cout << x << " " << sum << std::endl;
	}

}
