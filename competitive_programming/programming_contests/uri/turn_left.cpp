// https://www.urionlinejudge.com.br/judge/en/problems/view/1437

#include <iostream>
#include <string>

using namespace std;

int main() {

	int n;
	cin >> n;

	string s;

	while (n) {
		getline(cin, s);
		char dir[1] = 'N';

		for (int i = 0; i < n; i++) {
			if (s[i] == 'D') {
				if (dir == 'N') dir = 'L';
				else if (dir == 'L') dir = 'S';
				else if (dir == 'S') dir = 'O';
				else if (dir == 'O') dir = 'N';
			} else {
				if (dir == 'N') dir = 'O';
				else if (dir == 'O') dir = 'S';
				else if (dir == 'S') dir = 'L';
				else if (dir == 'L') dir = 'N';
			}
		}

		cout << dir << endl;
		cin.ignore();
		cin >> n;
	}

	return 0;
}