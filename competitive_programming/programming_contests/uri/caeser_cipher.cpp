// https://www.urionlinejudge.com.br/judge/en/problems/view/1253

#include <iostream>
#include <string>

using namespace std;

string shift(string str, int n) {
	string new_str = "";
	string alphabet = "ZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDCBA";
	int index;

	for (int i = 0; i < str.size(); i++) {
		index = alphabet.find(str[i]);
		index += n;
		new_str += alphabet[index];
	}

	return new_str;
}

int main() {
	
	int n, shift_n;
	cin >> n;

	string str;

	for (int i = 0; i < n; i++) {
		cin >> str;
		cin >> shift_n;
		if (shift_n) str = shift(str, shift_n);
		cout << str << endl;
	}

	return 0;
}