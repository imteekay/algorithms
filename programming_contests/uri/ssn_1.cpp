// https://www.urionlinejudge.com.br/judge/en/problems/view/1769

#include <iostream>
#include <string>

using namespace std;

int to_digit(char num) {
	return num - '0';
}

int main() {
	
	string cpf;

	while (cin >> cpf) {
		int total1 = 0, num, total2 = 0, c1 = 1, c2 = 9;
		for (int i = 0; i < 11; i++) {
			if (cpf[i] != '.') {
				num = to_digit(cpf[i]);
				total1 += num * c1;
				total2 += num * c2;
				c1++;
				c2--;
			}
		}

		int rem1 = total1 % 11;
		int rem2 = total2 % 11;

		if (rem1 == 10 && rem2 == 10) {
			if (cpf[12] == '0' && cpf[13] == '0') cout << "CPF valido" << endl;
			else cout << "CPF invalido" << endl;
		} else if (rem1 == 10) {
			if (cpf[12] == '0' && rem2 == to_digit(cpf[13])) cout << "CPF valido" << endl;
			else cout << "CPF invalido" << endl;
		} else if (rem2 == 10) {
			if (rem1 == to_digit(cpf[12]) && cpf[13] == '0') cout << "CPF valido" << endl;
			else cout << "CPF invalido" << endl;
		} else if (rem1 == to_digit(cpf[12]) && rem2 == to_digit(cpf[13])) {
			cout << "CPF valido" << endl;
		} else {
			cout << "CPF invalido" << endl;
		}
	}

	return 0;
}