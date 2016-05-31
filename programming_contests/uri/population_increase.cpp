// https://www.urionlinejudge.com.br/judge/en/problems/view/1160

#include <iostream>

using namespace std;

int main() {

	int n, p1, p2, years=0;
	double g1, g2;
	cin >> n;

	while (n--) {

		cin >> p1 >> p2;
		cin >> g1 >> g2;

		while (true) {

			p1 += p1 * g1 / 100;
			p2 += p2 * g2 / 100;

			years++;

			if (p1 > p2 || years > 100) break;
		}

		if (years > 100) cout << "Mais de 1 seculo." << endl;
		else cout << years << " anos." << endl;

		years = 0;
	}

	return 0;
}