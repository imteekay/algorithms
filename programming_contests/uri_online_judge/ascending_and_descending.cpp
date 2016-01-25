// https://www.urionlinejudge.com.br/judge/en/problems/view/1113

#include <iostream>

using namespace std;

int main() {

	int n1, n2;
	cin >> n1 >> n2;

	while(n1 != n2) {

		if (n1 > n2) {
			cout << "Decrescente" << endl;
		} else {
			cout << "Crescente" << endl;
		}

		cin >> n1 >> n2;
	}

	return 0;
}