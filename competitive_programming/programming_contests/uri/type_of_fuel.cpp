// https://www.urionlinejudge.com.br/judge/en/problems/view/1134

#include <iostream>

using namespace std;

int main() {
	
	int total_of_alcool=0, total_of_gas=0, total_of_diesel=0, n;

	cin >> n;

	while (n != 4) {

		if (n == 1) {
			total_of_alcool++;
		} else if (n == 2) {
			total_of_gas++;
		} else if (n == 3) {
			total_of_diesel++;
		}

		cin >> n;
	}

	cout << "MUITO OBRIGADO" << endl;
	cout << "Alcool: " << total_of_alcool << endl;
	cout << "Gasolina: " << total_of_gas << endl;
	cout << "Diesel: " << total_of_diesel << endl;

	return 0;
}