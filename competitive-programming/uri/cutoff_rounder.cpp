// https://www.urionlinejudge.com.br/judge/en/problems/view/1305

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

string get_integer_part(string n) {
	int length;
	for (int i = 0; i < n.size(); i++) if (n[i] == '.') length = i;	
	return n.substr(0, length);
}

string get_decimal_part(string n) {
	int initial;
	for (int i = 0; i < n.size(); i++) if (n[i] == '.') initial = i+1;
	return n.substr(initial, n.size() - initial);	
}

int to_int(string num) {
	int number=0, num_digit;
	for (int i = 0; i < num.size(); i++) {
		num_digit = num[i] - '0';
		number += num_digit * pow(10, num.size()-i-1);
	}

	return number;
}

double to_double(string num) {
	int num_digit;
	double number=0;
	for (int i = 0; i < num.size(); i++) {
		num_digit = num[i] - '0';
		number += num_digit / pow(10, i+1);
	}

	cout << "*" << number << endl;
	return number;
}

bool is_num_decimal_greater_than_or_equal_to_cutoff_decimal(string num, string cutoff) {
	int limit, num_digit, cutoff_digit;
	if (num.size() > cutoff.size()) limit = cutoff.size();
	else limit = num.size();

	if (num == cutoff) {
		return true;
	} else {
		for (int i = 0; i < limit; i++) {
			num_digit = num[i] - '0';
			cutoff_digit = cutoff[i] - '0';
			if (num_digit > cutoff_digit) return true;
		}

		return false;
	}	
}

bool has_period(string n) {
	for (int i = 0; i < n.size(); i++) if (n[i] == '.') return true;
	return false;
}

int main() {
	
	string num, cutoff;

	while (cin >> num >> cutoff) {
		if (has_period(num)) {
			string integer_part = get_integer_part(num);
			string num_decimal_part = get_decimal_part(num);
			string cutoff_decimal_part = get_decimal_part(cutoff);
			if (is_num_decimal_greater_than_or_equal_to_cutoff_decimal(num_decimal_part, cutoff_decimal_part)) cout << to_int(integer_part)+1 << endl;
			else cout << to_int(integer_part) << endl;
		} else {
			cout << num << endl;
		}
	}

	return 0;
}