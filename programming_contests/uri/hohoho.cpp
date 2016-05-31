// https://www.urionlinejudge.com.br/judge/en/problems/view/1759

#include <iostream>

using namespace std;

int main() {

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {

		if (n-1 == i) {
			cout << "Ho!" << endl;
		} else {
			cout << "Ho ";
		}

	}

	return 0;
}