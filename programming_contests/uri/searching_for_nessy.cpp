// https://www.urionlinejudge.com.br/judge/en/problems/view/1428

#include <iostream>

using namespace std;

int main() {
	int n, n1, n2, num, num1, num2;
	float aux1, aux2;

	cin >> n;

	while (n--) {
		cin >> n1 >> n2;
		
		aux1 = (n1 - 2) / 3.0;
		num1 = aux1;
		if (aux1 - num1 > 0.0) num1++;

		aux2 = (n2 - 2) / 3.0;
		num2 = aux2;
		if (aux2 - num2 > 0.0) num2++;
		
		num = num1 * num2;
		cout << num << endl;
	}

	return 0;
}