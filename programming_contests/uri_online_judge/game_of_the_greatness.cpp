// https://www.urionlinejudge.com.br/judge/en/problems/view/1397

#include <iostream>

using namespace std;

int main() {

	int n, n1, n2;
	cin >> n;

	while (n) {
		int counter1=0, counter2=0;
		while (n--) {
			cin >> n1 >> n2;
			if (n1 > n2) counter1++;
			else if (n2 > n1) counter2++;			
		}

		cout << counter1 << " " << counter2 << endl;
		cin >> n;
	}

	return 0;
}