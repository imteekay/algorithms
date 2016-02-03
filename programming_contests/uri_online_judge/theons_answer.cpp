// https://www.urionlinejudge.com.br/judge/en/problems/view/1858

#include <iostream>

using namespace std;

int main() {

	int n, x, smaller=21, index;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> x;
		if (x < smaller) {
			smaller = x;
			index = i;
		}
	}

	cout << index << endl;

	return 0;
}