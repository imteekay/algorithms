// https://www.urionlinejudge.com.br/judge/en/problems/view/2140

#include <iostream>

using namespace std;

int getMaximumBill(int diff) {
	if (diff >= 100) return 100;
	else if (diff >= 50) return 50;
	else if (diff >= 20) return 20;
	else if (diff >= 10) return 10;
	else if (diff >= 5) return 5;
	else return 2;
}

int main() {
	int n1, n2, diff, firstBill, counter;

	while (cin >> n1 >> n2 && n1 + n2 != 0) {
		counter = 0;
		diff = n2 - n1;

		while (diff > 0 && counter < 2) {
			firstBill = getMaximumBill(diff);
			diff -= firstBill;
			counter++;
		}

		if (counter == 2 && diff == 0) cout << "possible" << endl;
		else cout << "impossible" << endl;
	}

	return 0;
}