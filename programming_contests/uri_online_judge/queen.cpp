// https://www.urionlinejudge.com.br/judge/en/problems/view/1087

#include <iostream>

using namespace std;

int main() {
	
	int x1, x2, y1, y2, found=0;
	cin >> x1 >> y1 >> x2 >> y2;

	while (x1 + x2 + y1 + y2 != 0) {

		int x = x1, y = y1;

		while (x != 0 && y != 0) {

			if (x == x2 && y == y2) found = 1;

			x--;
			y--;
		}

		x = x1, y = y1;

		while (x != 9 && y != 0) {

			if (x == x2 && y == y2) found = 1;

			x++;
			y--;
		}

		x = x1, y = y1;

		while (x != 0 && y != 9) {

			if (x == x2 && y == y2) found = 1;

			x--;
			y++;
		}

		x = x1, y = y1;

		while (x != 9 && y != 9) {

			if (x == x2 && y == y2) found = 1;

			x++;
			y++;
		}

		if (x1 == x2 && y1 == y2) cout << 0 << endl;
		else if (x1 == x2 || y1 == y2 || found) cout << 1 << endl;
		else cout << 2 << endl;

		cin >> x1 >> y1 >> x2 >> y2;
		found = 0;
	}

	return 0;
}