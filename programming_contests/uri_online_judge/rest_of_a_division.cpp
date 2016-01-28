// https://www.urionlinejudge.com.br/judge/en/problems/view/1133

#include <iostream>

using namespace std;

int main() {

	int x, y;
	
	cin >> x >> y;

	if (x < y) {
		for (int i = x+1; i < y; i++) {
			if (i % 5 == 2 || i % 5 == 3) {
				cout << i << endl;
			}
		}
	} else {
		for (int i = y+1; i < x; i++) {
			if (i % 5 == 2 || i % 5 == 3) {
				cout << i << endl;
			}
		}
	}

	return 0;
}