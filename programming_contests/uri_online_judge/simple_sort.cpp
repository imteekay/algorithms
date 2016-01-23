// https://www.urionlinejudge.com.br/judge/en/problems/view/1042

#include <iostream>

using namespace std;

int main() {

	int n1, n2, n3;

	cin >> n1 >> n2 >> n3;

	if (n1 < n2 && n1 < n3) {
		cout << n1 << endl;
		if (n2 < n3) {
			cout << n2 << endl;
			cout << n3 << endl;
		} else {
			cout << n3 << endl;
			cout << n2 << endl;
		}
	} else if (n2 < n3) {
		cout << n2 << endl;
		if (n1 < n3) {
			cout << n1 << endl;
			cout << n3 << endl;
		} else {
			cout << n3 << endl;
			cout << n1 << endl;
		}
	} else {
		cout << n3 << endl;
		if (n1 < n2) {
			cout << n1 << endl;
			cout << n2 << endl;
		} else {
			cout << n2 << endl;
			cout << n1 << endl;
		}
	}	

	cout << endl << n1 << endl << n2 << endl << n3 << endl;

	return 0;
}