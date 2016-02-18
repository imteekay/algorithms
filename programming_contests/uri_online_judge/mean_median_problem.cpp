// https://www.urionlinejudge.com.br/judge/en/problems/view/1379

#include <iostream>
#include <cmath>

using namespace std;

int is_integer(double n) {
	if (floor(n) == n) return 1;
	else return 0;
}

int main() {

	unsigned long long int n1, n2;
	long long int n3;
	cin >> n1 >> n2;

	while (n1 + n2 != 0) {
		unsigned long long int mean, median;
		int found = 0;

		if (n1 < n2) median = n1;
		else median = n2;

		if (is_integer(median * 3 - n1 - n2)) {
			n3 = median * 3 - n1 - n2;
			found = 1;
		}

		cout << n3 << endl;
		cin >> n1 >> n2;
	}

	return 0;
}