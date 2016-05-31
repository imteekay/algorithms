// https://www.urionlinejudge.com.br/judge/en/problems/view/1074

#include <iostream>
#include <math.h>

using namespace std;

int main() {

	long long int x;
	int n;

	cin >> n;

	while (n--) {

		cin >> x;

		if (x == 0) {
			cout << "NULL" << endl;
		} else if (x > 0) {
			if (x % 2 == 0) {
				cout << "EVEN POSITIVE" << endl;
			} else {
				cout << "ODD POSITIVE" << endl;
			}
		} else {
			if (x % 2 == 0) {
				cout << "EVEN NEGATIVE" << endl;
			} else {
				cout << "ODD NEGATIVE" << endl;
			}
		}

	}

	return 0;
}