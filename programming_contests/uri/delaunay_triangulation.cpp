// https://www.urionlinejudge.com.br/judge/en/problems/view/1620

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	long double l, i, x;

	while (cin >> l && l != 0) {
		i = l + l - 3;
		x = (i - l) / l;
		cout << fixed << setprecision(6) << x << endl;
	}

	return 0;
}