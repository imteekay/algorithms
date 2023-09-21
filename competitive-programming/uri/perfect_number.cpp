// https://www.urionlinejudge.com.br/judge/en/problems/view/1164

#include <iostream>

using namespace std;

int main() {

	int n, x, total=0;
	cin >> n;

	while (n--) {

		cin >> x;

		for (int i = 1; i < x; i++) {
			if (x % i == 0) total += i;
			if (total > x) break;
		}

		if (total == x) cout << x << " eh perfeito" << endl;
		else cout << x << " nao eh perfeito" << endl;

		total = 0;
	}

	return 0;
}