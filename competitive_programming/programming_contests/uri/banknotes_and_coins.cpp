// https://www.urionlinejudge.com.br/judge/en/problems/view/1021

#include <iostream>

using namespace std;

int main() {

	float total;
	int cem=0, cinquenta=0, vinte=0, dez=0, cinco=0, dois=0, um=0;
	int cinquenta_centavos=0, vinte_e_cinco_centavos=0, dez_centavos=0, cinco_centavos=0, um_centavos=0;

	cin >> total;

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

	while (total >= 0.5) {
		total -= 0.50;
		cinquenta_centavos++;
	}

	while (total >= 0.25) {
		total -= 0.25;
		vinte_e_cinco_centavos++;
	}

	while (total >= 0.10) {
		total -= 0.10;
		dez_centavos++;
	}

	while (total >= 0.05) {
		total -= 0.05;
		cinco_centavos++;
	}

	while (total >= 0.01) {
		total -= 0.01;
		um_centavos++;
	}

	cout << "NOTAS:" << endl;
	cout << cem << " nota(s) de R$ 100.00" << endl;
	cout << cinquenta << " nota(s) de R$ 50.00" << endl;
	cout << vinte << " nota(s) de R$ 20.00" << endl;
	cout << dez << " nota(s) de R$ 10.00" << endl;
	cout << cinco << " nota(s) de R$ 5.00" << endl;
	cout << dois << " nota(s) de R$ 2.00" << endl;

	cout << "MOEDAS:" << endl;
	cout << um << " moeda(s) de R$ 1.00" << endl;
	cout << cinco_centavos << " moeda(s) de R$ 0.50" << endl;
	cout << vinte_e_cinco_centavos << " moeda(s) de R$ 0.25" << endl;
	cout << dez_centavos << " moeda(s) de R$ 0.10" << endl;
	cout << cinco_centavos << " moeda(s) de R$ 0.05" << endl;
	cout << um_centavos << " moeda(s) de R$ 0.01" << endl;

	return 0;
}