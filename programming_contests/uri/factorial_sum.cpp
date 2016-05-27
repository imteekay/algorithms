// https://www.urionlinejudge.com.br/judge/en/problems/view/1161

#include <iostream>

using namespace std;

unsigned long long int factorial(int n) {
	if (n == 1) return 1;
	return n * factorial(n - 1);
}

int main() {

	int n1, n2;

	unsigned long long int result1, result2;

	while (scanf("%llu %llu", &n1, &n2) != EOF) {
		result1 = factorial(n1);
		result2 = factorial(n2);
		cout << result1 + result2 << endl;
	}

	return 0;
}