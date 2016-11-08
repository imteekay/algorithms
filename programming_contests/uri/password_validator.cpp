// https://www.urionlinejudge.com.br/judge/en/problems/view/2253

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool validateString(string s) {
	string alphabetUppercase = "ABCDEFGHIJKLMNOPQRSTUVXWYZ";
	string alphabetLowercase = "abcdefghijklmnopqrstuvxwyz";
	sort(s.begin(), s.end());
	if (alphabetUppercase.find(s[0]) != string::npos && alphabetLowercase.find(s[s.size()-1]) != string::npos) return true;
	return false;
}

bool validatePunctuation(string s) {
	if (s.find(".") == string::npos &&
			s.find("á") == string::npos &&
			s.find("é") == string::npos &&
			s.find("é") == string::npos &&
			s.find("ó") == string::npos &&
			s.find("ú") == string::npos &&
			s.find("Á") == string::npos &&
			s.find("É") == string::npos &&
			s.find("Í") == string::npos &&
			s.find("Ó") == string::npos &&
			s.find("Ú") == string::npos &&
			s.find(" ") == string::npos) return true;

	return false;
}

bool validateSize(string s) {
	if (s.size() >= 6 && s.size() <= 32) return true;
	return false;
}

int main() {
	string s;

	while (getline(cin, s)) {
		if (validateString(s) && validatePunctuation(s) && validateSize(s)) cout << "Senha valida." << endl;
		else cout << "Senha invalida." << endl;
	}

	return 0;
}