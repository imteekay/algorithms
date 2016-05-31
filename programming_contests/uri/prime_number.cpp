// https://www.urionlinejudge.com.br/judge/en/problems/view/1165

#include <iostream>
#include <math.h>

using namespace std;

int is_prime(int n) {

	if (n == 2)
		return 1;

	if ((n % 2) == 0)
		return 0;

	int s = sqrt(n);

	for (int i = 3; i <= s; i += 2) if (n % i == 0) return 0;

	return 1;
}

int main() {

	int n, x;

	cin >> n;

	while (n--) {
		cin >> x;
		if (is_prime(x)) cout << x << " eh primo" << endl;
		else cout << x << " nao eh primo" << endl;
	}

	return 0;
}