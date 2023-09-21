// https://www.urionlinejudge.com.br/judge/en/problems/view/1071

#include <iostream>

using namespace std;

int main() {

	int n1, n2, total=0;

	cin >> n1 >> n2;

	if (n1 == n2) {
		cout << 0 << endl;
	} else if (n1 > n2) {
		for (int i = n2; i < n1; i++) {
			if (i < 0) i = i * (-1);
			if (i % 2 != 0) total++;
		}

		cout << total << endl;
	} else {
		for (int i = n1; i < n2; i++) {
			if (i < 0) i = i * (-1);
			if (i % 2 != 0) total++;
		}

		cout << total << endl;
	}

	return 0;
}