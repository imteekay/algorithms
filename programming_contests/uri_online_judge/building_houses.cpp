// https://www.urionlinejudge.com.br/judge/en/problems/view/1541

#include <iostream>
#include <math.h>

using namespace std;

int main() {

	int l1, l2, p;

	cin >> l1 >> l2 >> p;

	while (l1 != 0) {

		int area = l1 * l2;

		int land_size = sqrt(area * 100 / p);

		cout << land_size << endl;

		cin >> l1 >> l2 >> p;
	}

	return 0;
}