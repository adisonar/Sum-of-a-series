// Program to print sum of n terms of the alternating series: [1] - [1/2] + [1/3] - [1/4] + ...

#include<iostream>
using namespace std;

int main() {
	double sum, n;
	double odd = 0.0;
	double even = 0.0;
	cout << "Enter the number of terms: ";
	cin >> n;

	for (int i = 1; i <= n; i++) {
		if (i % 2 == 0.0) {
			even = even + (1.0 / double(i));
		}
		else {
			odd = odd + (1.0 / double(i));
		}
	}
	cout << "The sum of " << n << " terms of the series is: " << odd-even;
	return 0;
}