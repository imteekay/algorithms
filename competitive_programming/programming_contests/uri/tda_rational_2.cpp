// https://www.urionlinejudge.com.br/judge/en/problems/view/1022

#include <iostream>
#include <string>

using namespace std;

int mdc(int num1, int num2) {
	int remainder;

	do {
		remainder = num1 % num2;
		num1 = num2;
		num2 = remainder;
	} while (remainder != 0);

	return num1;
}

int main() {
	string ope, op;
	int n, num, num1, num2, den, den1, den2, div;
	cin >> n;

	while (n--) {
		cin >> num1 >> op >> den1 >> ope >> num2 >> op >> den2;
		den = den1 * den2;
		if (ope == "+") num = num1 * den2 + num2 * den1;
		else if (ope == "-") num = num1 * den2 - num2 * den1;
		else if (ope == "*") num = num1 * num2;
		else {
			num = num1 * den2;
			den = num2 * den1;
		}

		div = mdc(num, den);
		if (div < 0) div *= -1;
		cout << num << "/" << den << " = " << num/div << "/" << den/div << endl;
	}

	return 0;
}