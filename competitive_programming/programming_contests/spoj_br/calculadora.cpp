// CALCU11

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	int n, result;
	long double number, total=1;
	char op;

	cin >> n;

	while (n--) {

		cin >> number;
		cin >> op;

		if (op == '*')
			total *= number;
		else
			total /= number;
	}

	cout << fixed << setprecision(0) << total;

	return 0;
}
