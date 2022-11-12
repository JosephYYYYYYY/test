#include <iostream>
using namespace std;
#include <cmath>

int main () {
	int a, flag = 0;
	cin >> a;
	for (int i = 2; i < sqrt(a); i++) {
		if (a % i == 0)
			flag = 1;

	}
	if (flag == 1)
		cout << "not prime number";
	else
		cout << "is prime number";
}