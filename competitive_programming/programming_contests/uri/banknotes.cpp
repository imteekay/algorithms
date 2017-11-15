// https://www.urionlinejudge.com.br/judge/en/problems/view/1018

#include <iostream>

using namespace std;

int main() {

	int n1;

	cin >> n1;

	cout << n1 << endl;

	int total = n1;
	int cem=0, cinquenta=0, vinte=0, dez=0, cinco=0, dois=0, um=0;

	while (total >= 100) {
		total -= 100;
		cem++;
	}

	while (total >= 50) {
		total -= 50;
		cinquenta++;
	}

	while (total >= 20) {
		total -= 20;
		vinte++;
	}

	while (total >= 10) {
		total -= 10;
		dez++;
	}

	while (total >= 5) {
		total -= 5;
		cinco++;
	}

	while (total >= 2) {
		total -= 2;
		dois++;
	}

	while (total >= 1) {
		total -= 1;
		um++;
	}

	cout << cem << " nota(s) de R$ 100,00" << endl;
	cout << cinquenta << " nota(s) de R$ 50,00" << endl;
	cout << vinte << " nota(s) de R$ 20,00" << endl;
	cout << dez << " nota(s) de R$ 10,00" << endl;
	cout << cinco << " nota(s) de R$ 5,00" << endl;
	cout << dois << " nota(s) de R$ 2,00" << endl;
	cout << um << " nota(s) de R$ 1,00" << endl;

	return 0;
}