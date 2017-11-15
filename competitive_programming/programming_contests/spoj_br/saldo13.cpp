// SALDO13

#include <iostream>
using namespace std;

int main() {

	int n, s, menor_saldo, total, temp;

	cin >> n;
	cin >> s;
	menor_saldo = s;
	total = s;

	while(n--) {
		cin >> temp;
		total += temp;
		if (total < menor_saldo)
			menor_saldo = total;
	}

	cout << menor_saldo;


	return 0;
}
