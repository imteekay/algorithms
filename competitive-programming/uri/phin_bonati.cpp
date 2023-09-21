// https://www.urionlinejudge.com.br/judge/en/problems/view/2149

#include <iostream>

using namespace std;

long long int willBonatiAlgorithm(int n) {
	long long int n1 = 0, n2 = 1, result;

	if (n == 1) return 0;
	else if (n == 2) return 1;
	else {
		for (int i = 3; i <= n; i++) {
			if (i % 2 != 0) result = n1 + n2;
			else result = n1 * n2;
			n1 = n2;
			n2 = result;
		}
	}

	return result;
}

int main() {
	int n;
	long long int result;

	while (cin >> n) {
		result = willBonatiAlgorithm(n);
		cout << result << endl;
	}
}