// https://www.urionlinejudge.com.br/judge/en/problems/view/1072

#include <iostream>

using namespace std;

int main() {

	int in=0, out=0, n, x;

	cin >> n;

	while (n--) {
		cin >> x;

		if (x >= 10 && x <= 20) {
			in++;
		} else {
			out++;
		}
	}

	cout << in << " in" << endl;
	cout << out << " out" << endl;

	return 0;
}