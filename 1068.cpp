#include <iostream>
using namespace std;

int main() {
	int a, b, t, n = 0;
	cin >> a;
	cin >> b;

	for (int i = 0; i < a; i++) {
		cin >> t;
		if (t == b)
			n = n + 1;

	}
	cout << n;
}