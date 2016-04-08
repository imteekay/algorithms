#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int string_to_int(string n) {
	int num = 0, digit, pot = n.size()-1;

	for (int i = 0; i < n.size(); i++) {
		digit = n[i] - 48;
		num += pow(10, pot) * digit;
		pot--;
	}

	return num;
}

int main() {
	
	string n1 = "2", n2 = "33", n3 = "457", n4 = "1023", n5 = "54739";

	cout << string_to_int(n1) << endl;
	cout << string_to_int(n2) << endl;
	cout << string_to_int(n3) << endl;
	cout << string_to_int(n4) << endl;
	cout << string_to_int(n5) << endl;

	return 0;
}