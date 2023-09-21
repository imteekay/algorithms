// https://www.urionlinejudge.com.br/judge/en/problems/view/2172

#include <iostream>

using namespace std;

int main() {
	long long int n1, n2, total;

	while (cin >> n1 >> n2 && n1 + n2 != 0) {
		total = n1 * n2;
		cout << total << endl;
	}

	return 0;
}