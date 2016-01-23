// https://www.urionlinejudge.com.br/judge/en/problems/view/1044

#include <iostream>

using namespace std;

int is_multiple(int n1, int n2) {

	if (n1 > n2) {
		if (n1 % n2 == 0) return 1;
		else return 0;
	} else if (n2 > n1) {
		if (n2 % n1 == 0) return 1;
		else return 0;
	}

	return 1;
}

int main() {

	int n1, n2;

	cin >> n1 >> n2;

	if (is_multiple(n1, n2)) {
		cout << "Sao Multiplos" << endl;
	}	else {
		cout << "Nao sao Multiplos" << endl;
	}	

	return 0;
}