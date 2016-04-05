// https://www.urionlinejudge.com.br/judge/en/problems/view/1234

#include <iostream>
#include <string>

using namespace std;

char to_uppercase(char charac) {
	string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	int index = alphabet.find(charac) - 26;
	return alphabet[index];
}

char to_lowercase(char charac) {
	string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	int index = alphabet.find(charac) + 26;
	return alphabet[index];
}

bool is_uppercase(char charac) {
	string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	if (alphabet.find(charac) <= 25) return true;
	else return false;
}

int main() {
	
	string s;
	string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	while (getline(cin, s)) {
		string result = "";
		bool uppercase = true;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == ' ') {
				result += s[i];
			} else {
				if (uppercase) {
					if (is_uppercase(s[i])) result += s[i];
					else result += to_uppercase(s[i]);
					uppercase = !uppercase;
				} else {
					if (is_uppercase(s[i])) result += to_lowercase(s[i]);
					else result += s[i];
					uppercase = !uppercase;
				}	
			}
		}

		cout << result << endl;
	}

	return 0;
}