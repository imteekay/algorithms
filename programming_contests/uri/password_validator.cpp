// https://www.urionlinejudge.com.br/judge/en/problems/view/2253

#include <iostream>
#include <string>

using namespace std;

bool validateString(string s) {
	string alphabetUppercase = "ABCDEFGHIJKLMNOPQRSTUVXWYZ";
	string alphabetLowercase = "abcdefghijklmnopqrstuvxwyz";
	string numbers = "0123456789";
	bool hasUppercasedChar = false, hasLowercasedChar = false, hasNumber = false;

	for (int i = 0; i < s.size(); i++) {
		if (alphabetUppercase.find(s[i]) != string::npos) hasUppercasedChar = true;
		if (alphabetLowercase.find(s[i]) != string::npos) hasLowercasedChar = true;
		if (numbers.find(s[i]) != string::npos) hasNumber = true;
	}

	return hasUppercasedChar && hasLowercasedChar && hasNumber;
}

bool validatePunctuation(string s) {
	if (s.find("á") == string::npos &&
			s.find("é") == string::npos &&
			s.find("í") == string::npos &&
			s.find("ó") == string::npos &&
			s.find("ú") == string::npos &&
			s.find("Á") == string::npos &&
			s.find("É") == string::npos &&
			s.find("Í") == string::npos &&
			s.find("Ó") == string::npos &&
			s.find("Ú") == string::npos &&
			s.find("â") == string::npos &&
			s.find("ê") == string::npos &&
			s.find("î") == string::npos &&
			s.find("ô") == string::npos &&
			s.find("û") == string::npos &&
			s.find("Â") == string::npos &&
			s.find("Ê") == string::npos &&
			s.find("Î") == string::npos &&
			s.find("Ô") == string::npos &&
			s.find("Û") == string::npos &&
			s.find("ã") == string::npos &&
			s.find("ẽ") == string::npos &&
			s.find("ĩ") == string::npos &&
			s.find("õ") == string::npos &&
			s.find("ũ") == string::npos &&
			s.find("Ã") == string::npos &&
			s.find("Ẽ") == string::npos &&
			s.find("Ĩ") == string::npos &&
			s.find("Õ") == string::npos &&
			s.find("Ũ") == string::npos &&
			s.find("à") == string::npos &&
			s.find("è") == string::npos &&
			s.find("ì") == string::npos &&
			s.find("ò") == string::npos &&
			s.find("ù") == string::npos &&
			s.find("À") == string::npos &&
			s.find("È") == string::npos &&
			s.find("Ì") == string::npos &&
			s.find("Ò") == string::npos &&
			s.find("Ù") == string::npos &&
			s.find(".") == string::npos &&
			s.find(",") == string::npos &&
			s.find(";") == string::npos &&
			s.find("!") == string::npos &&
			s.find("?") == string::npos &&
			s.find(":") == string::npos &&
			s.find("(") == string::npos &&
			s.find(")") == string::npos &&
			s.find("[") == string::npos &&
			s.find("]") == string::npos &&
			s.find("{") == string::npos &&
			s.find("}") == string::npos &&
			s.find("-") == string::npos &&
			s.find("\"") == string::npos &&
			s.find("\\") == string::npos &&
			s.find("/") == string::npos &&
			s.find("...") == string::npos &&
			s.find("'") == string::npos &&
			s.find("^") == string::npos &&
			s.find("`") == string::npos &&
			s.find("~") == string::npos &&
			s.find("+") == string::npos &&
			s.find("-") == string::npos &&
			s.find("=") == string::npos &&
			s.find("_") == string::npos &&
			s.find("*") == string::npos &&
			s.find("&") == string::npos &&
			s.find("¨") == string::npos &&
			s.find("%") == string::npos &&
			s.find("$") == string::npos &&
			s.find("#") == string::npos &&
			s.find("@") == string::npos &&
			s.find(">") == string::npos &&
			s.find("<") == string::npos &&
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