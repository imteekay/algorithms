// https://www.urionlinejudge.com.br/judge/en/problems/view/1387

#include <iostream>

using namespace std;

int main() {

	int n1, n2;
	cin >> n1 >> n2;

	while (n1 + n2 != 0) {
		cout << n1 + n2 << endl;
		cin >> n1 >> n2;
	}

	return 0;
}