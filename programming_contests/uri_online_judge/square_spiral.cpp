// https://www.urionlinejudge.com.br/judge/en/problems/view/1868

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	
	int n, x, y, num;
	cin >> n;

	while (n != 0) {
		string s;
		vector<string> v;

		for (int i = 0; i < n; i++) s += "O";
		for (int j = 0; j < n; j++) v.push_back(s);

		x = (n / 2);
		y = x;
		num = (n * n) - 1;

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (i == x && j == y) cout << "X";
				else cout << "O";
			}
			cout << endl;
		}

		cout << "@" << endl;
		y++;

		int direction = 2; // up
		int counter = 0, dist = 1, count = 0;

		while (num--) {
			counter++;
			count++;

			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					if (i == x && j == y) cout << "X";
					else cout << "O";
				}
				cout << endl;
			}

			cout << "@" << endl;

			if (counter == dist * 2) {
				counter = 0;
				dist++;				
			}			

			if (direction == 1) y++;
			else if (direction == 2) x--;
			else if (direction == 3) y--;
			else x++;

			if (count == dist) {
				count = 0;
				if (direction == 1) direction = 2; // up
				else if (direction == 2) direction = 3; // left
				else if (direction == 3) direction = 4; // down
				else direction = 1; // right
			}
		}

		cin >> n;
	}

	return 0;
}