// https://www.urionlinejudge.com.br/judge/en/problems/view/1022

#include <iostream>

using namespace std;

int lcm(int num1, int num2) {
	int n1 = num1, n2 = num2, remainder;

	do {
		remainder = n1 % n2;
		n1 = n2;
		n2 = remainder;
	} while (remainder != 0)

	return (num1 * num2) / n1;
}

int new_num(int num1, int num2, char op) {
	if (op == '+') return num1 + num2;
	else if (op == '-') return num1 - num2;
	else if (op == '*') return num1 * num2;
	else return num1 / num2;
}

int main() {
	char operator, op;	
	int n, num, num1, num2, den1, den2, nden1, nden2;

	cin >> n;

	while (n--) {
		cin >> num1 >> op >> den1 >> operator >> num2 >> op >> den2;
		nden1 = lcm(den1, den2);
		nden2 = lcm(den1, den2);
		num1 *= nden1 / den1;
		num2 *= nden2 / den2;
		num = new_num(num1, num2, operator);
		// continue
	}

	return 0;
}