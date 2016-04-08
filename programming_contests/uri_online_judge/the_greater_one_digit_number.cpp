// https://www.urionlinejudge.com.br/judge/en/problems/view/1867

#include <iostream>
#include <vector>
#include <string>
#include <math.h>

using namespace std;

bool is_one_digit(int n) {
	if (n >= 0 && n <= 9) return true;
	return false;
}

int sum_digits_1(string n) {
	int sum = 0, digit;

	for (int i = 0; i < n.size(); i++) {
		digit = n[i] - 48;
		sum += digit;
	}

	return sum;
}

int sum_digits_2(int n) {
	int sum = 0, digit;

	while (n) {
		digit = n % 10;
		sum += digit;
		n /= 10;
	}

	return sum;
}

int main() {
	
	string n, m;
	cin >> n >> m;

	while (n != "0" || m != "0") {
		int n1 = sum_digits_1(n);
		int n2 = sum_digits_1(m);

		while (!is_one_digit(n1)) n1 = sum_digits_2(n1);		
		while (!is_one_digit(n2)) n2 = sum_digits_2(n2);

		if (n1 == n2) cout << 0 << endl;
		else if (n1 > n2) cout << 1 << endl;
		else cout << 2 << endl;

		cin >> n >> m;
	}
	
	return 0;
}