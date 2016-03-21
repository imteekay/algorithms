// https://www.urionlinejudge.com.br/judge/en/problems/view/1024

#include <iostream>
#include <string>

using namespace std;

int get_index(char letter) {
	string ascii = "ABCDEFGHIJKLMNOPQRSTUVWXYZ.]^_`abcdefghijklmnopqrstuvwxyz{-}";
	if (letter == '/') letter = '.';
	return ascii.find(letter);
}

int get_element(char index) {
	string ascii = "ABCDEFGHIJKLMNOPQRSTUVWXYZ.]^_`abcdefghijklmnopqrstuvwxyz{-}";
	char element = ascii[index];
	if (element == '.') element = '/';
	return element;
}

int is_number(char letter) {
	string numbers = "012345678910";
	if (numbers.find(letter) != -1) return 1;
	return 0;
}

string shift_to_the_right(string old_string) {
	string new_string = "";
	string ascii = "ABCDEFGHIJKLMNOPQRSTUVWXYZ.]^_`abcdefghijklmnopqrstuvwxyz{-}";

	for (int i = 0; i < old_string.size(); i++) {
		if (is_number(old_string[i]) || old_string[i] == ' ' || ascii.find(old_string[i]) == -1) {
			new_string += old_string[i];
		} else {
			int index = get_index(old_string[i]);
			index += 3;
			new_string += get_element(index);
		}
	}

	return new_string;
}

string shift_to_the_left(string old_string) {
	string new_string = "";
	string ascii = "ABCDEFGHIJKLMNOPQRSTUVWXYZ.]^_`abcdefghijklmnopqrstuvwxyz{-}";

	for (int i = 0; i < old_string.size(); i++) {
		if (is_number(old_string[i]) || old_string[i] == ' ' || ascii.find(old_string[i]) == -1) {
			new_string += old_string[i];
		} else {
			int index = get_index(old_string[i]);
			index--;
			new_string += get_element(index);
		}
	}

	return new_string;	
}

string reverse(string password) {
	string reversed_string = "";
	for (int i = password.size()-1; i >= 0; i--) reversed_string += password[i];
	return reversed_string;
}

int main() {	
	int n;
	cin >> n;
	cin.ignore();

	while (n--) {
		string password, encrypted_password;
		getline(cin, password);

		// first step: shift to the right
		encrypted_password = shift_to_the_right(password);

		// second step: reverse string
		encrypted_password = reverse(encrypted_password);

		// third step: shift to the left
		encrypted_password = shift_to_the_left(encrypted_password);

		cout << encrypted_password << endl;
	}

	return 0;
}

// Texto #3 --> 3# rvzgV
// abcABC1 --> 1FECedc
// vxpdylY .ph --> ks. \n{frzx
// vv.xwfxo.fd --> gi.r{hyz-xx

// qvzgV
// 3B
// 1EDCedc
// /n{frzx