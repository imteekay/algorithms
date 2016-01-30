// https://www.urionlinejudge.com.br/judge/en/problems/view/1149

#include <iostream>

using namespace std;

int main() {

	int n1, n2, total=0;

	cin >> n1 >> n2;

	while (n2 <= 0) {
		cin >> n2;
	}

	while (n2--) {
		total += n1;
		n1++;
	}

	cout << total << endl;

	return 0;
}