// https://www.urionlinejudge.com.br/judge/en/problems/view/1024

#include <iostream>
#include <string>

using namespace std;

int get_index(char letter) {
	// need to solve escape problem
	string ascii = "ABCDEFGHIJKLMNOPQRSTUVWXYZ\]^_`abcdefghijklmnopqrstuvwxyz{-}";
	for (int i = 0; i < ascii.size(); i++) if (ascii[i] == letter) return i;
}

int get_element(char index) {
	// need to solve escape problem
	string ascii = "ABCDEFGHIJKLMNOPQRSTUVWXYZ\]^_`abcdefghijklmnopqrstuvwxyz{-}";
	for (int i = 0; i < ascii.size(); i++) if (i == index) return ascii[i];
}

int is_number(char letter) {
	for (int i = 0; i <= 10; i++) if (letter == i + '0') return 1;
	return 0;
}

string shift_to_the_right(string old_string) {
	string new_string = '';	

	for (int i = 0; i < old_string.size(); i++) {
		if (is_number(old_string[i])) {
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
	string new_string = '';

	for (int i = 0; i < old_string.size(); i++) {
		if (is_number(old_string[i])) {
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

	while (n--) {
		string password, encrypted_password;
		cin >> password;

		// first step: using array to store ascii elements (index and el)
		// http://en.cppreference.com/w/cpp/language/ascii
		encrypted_password = shift_to_the_right(password);

		// second step: reverse string
		encrypted_password = reverse(encrypted_password);

		// third step: left
		encrypted_password = shift_to_the_left(encrypted_password);

		cout << encrypted_password << endl;
	}

	return 0;
}