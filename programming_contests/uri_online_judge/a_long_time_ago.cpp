// https://www.urionlinejudge.com.br/judge/en/problems/view/1962

#include <iostream>

using namespace std;

int main() {

	int n;
	cin >> n;

	long long int n1;

	while (n--) {

		cin >> n1;

		if (n1 >= 2015) {
			cout << n1 - 2014 << " A.C." << endl;
		} else {
			cout << 2015 - n1 << " D.C." << endl;
		}

	}

	return 0;
}