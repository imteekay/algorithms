// https://www.urionlinejudge.com.br/judge/en/problems/view/1132

#include <iostream>

using namespace std;

int main() {

	int x, y, total=0;

	cin >> x >> y;

	if (x < y) {
		for (int i = x; i <= y; i++) {
			if (i % 13 != 0) {
				total += i;
			}
		}
	} else {
		for (int i = y; i <= x; i++) {
			if (i % 13 != 0) {
				total += i;
			}
		}
	}

	cout << total << endl;

	return 0;
}