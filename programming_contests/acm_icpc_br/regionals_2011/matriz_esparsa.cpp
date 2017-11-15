#include <iostream>

using namespace std;

int main() {
	
	int n, x, total, zeros, medium;
	cin >> n;

	while (n--) {
		cin >> x;
		total = x * x;
		zeros = total - (3 * x - 2);
		medium = total / 2;
		if (zeros > medium) cout << "S " << zeros << endl;
		else cout << "N " << zeros << endl;
	}

	return 0;
}