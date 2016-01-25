// https://www.urionlinejudge.com.br/judge/en/problems/view/1101

#include <iostream>

using namespace std;

int main() {
	
	int n1, n2, total=0;

	cin >> n1 >> n2;

	while (n1 > 0 && n2 > 0) {
		if (n1 > n2) {
			for (int i = n2; i <= n1; i++) {
				cout << i << " ";
				total += i;
			}

			cout << "Sum=" << total << endl;
		} else if (n2 > n1) {
			for (int i = n1; i <= n2; i++) {
				cout << i << " ";
				total += i;
			}

			cout << "Sum=" << total << endl;
		} else {
			cout << n1 << " Sum=" << n1 << endl;
		}

		total = 0;
		cin >> n1 >> n2;
	}

	return 0;
}