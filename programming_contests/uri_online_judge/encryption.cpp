// https://www.urionlinejudge.com.br/judge/en/problems/view/1024

#include <iostream>
#include <string>

using namespace std;

string reverse(string password) {
	string reversed_string = "";
	for (int i = password.size()-1; i >= 0; i--) reversed_string += password[i];
	return reversed_string;
}

int main() {
	
	int n;
	cin >> n;

	while (n--) {
		string password;
		cin >> password;

		// first step: using array to store ascii elements (index and el)
		// http://en.cppreference.com/w/cpp/language/ascii

		// second step: reverse string
		string encrypted_password = reverse(password);

		// third step: left
	}

	return 0;
}