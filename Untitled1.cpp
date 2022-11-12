#include <iostream>
using namespace std;

int main() {
	int n, a, b, max = 0, min;
	cin >> n;
	cin >> a;
	min = a;
	max = a;
	for (int i = 1; i < n; i++) {
		cin >> b;
		if (b > max)
			max = b;
		if (b < max)
			min = b;
	}
	cout << max - min;

}