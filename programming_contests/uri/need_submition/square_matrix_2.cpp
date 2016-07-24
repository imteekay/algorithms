// https://www.urionlinejudge.com.br/judge/en/problems/view/1478

#include <iostream>

using namespace std;

string generateSpaces(int n) {
	if (n >= 1 && n <= 9) return "  ";
	else if (n >= 10 && n <= 99) return " ";
	else return "";
}

int main() {
	int n, startIndex, des;

	while (cin >> n && n) {
		for (int i = 1; i <= n; i++) {
			des = i;
			startIndex = 1;
			for (int j = 1; j <= n; j++) {
				if (des >= 2) {
					if (j != 1) cout << " ";
					cout << generateSpaces(des) << des;
					des--;
				} else {
					if (j != 1) cout << " ";
					cout << generateSpaces(startIndex) << startIndex;
					startIndex++;
				}
			}
			cout << endl;
		}

		cout << endl;
	}

	return 0;
}