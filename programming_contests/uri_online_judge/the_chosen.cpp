// https://www.urionlinejudge.com.br/judge/en/problems/view/1983

#include <iostream>

using namespace std;

int main() {

	int n, final, code;
	double greater = 7.9, note;
	cin >> n;

	while (n--) {

		cin >> code >> note;

		if (note > greater) {
			greater = note;
			final = code;
		}

	}

	if (greater == 7.9) cout << "Minimum note not reached" << endl;
	else cout << final << endl;

	return 0;
}