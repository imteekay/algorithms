// https://www.urionlinejudge.com.br/judge/en/problems/view/1142

#include <iostream>

using namespace std;

int main() {

	int n, pum=1;

	cin >> n;

	while (n--) {

		int a = pum + 3;

		for (int i = pum; i < a; i++) {
			cout << i << " ";
			pum++;
		}

		cout << "PUM" << endl;

	}

	return 0;
}