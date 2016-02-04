// https://www.urionlinejudge.com.br/judge/en/problems/view/1855

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

	int n1, n2, i=0, j=0, found=0, direction=0;
	cin >> n2 >> n1;

	vector<string> v;
	string x;

	for (int i = 0; i < n1; i++) {
		cin >> x;
		v.push_back(x);
	}

	if (v[i][j] != '.') {

		while (true) {

			if (v[i][j] == '*') {
				found = 1;
				break;
			}

			if (v[i][j] == 'X') break;

			if (v[i][j] == '>') {
				direction = 1;
				v[i][j] = 'X';
			} else if (v[i][j] == 'v') {
				direction = 2;
				v[i][j] = 'X';
			} else if (v[i][j] == '<') {
				direction = 3;
				v[i][j] = 'X';
			} else if (v[i][j] == '^') {
				direction = 4;
				v[i][j] = 'X';
			} else {
				v[i][j] = 'X';
			}

			if (direction == 1) {
				j++;
			} else if (direction == 2) {
				i++;
			} else if (direction == 3) {
				j--;
			} else if (direction == 4) {
				i--;
			}

		}
	}

	if (found) cout << "*" << endl;
	else cout << "!" << endl;

	return 0;
}
