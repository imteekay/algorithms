// https://www.urionlinejudge.com.br/judge/en/problems/view/1075

#include <iostream>

using namespace std;

int main() {

	int n;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		if (i % n == 2) {
			cout << i << endl;
		}
	}

	return 0;
}