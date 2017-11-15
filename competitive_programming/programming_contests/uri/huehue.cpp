// https://www.urionlinejudge.com.br/judge/en/problems/view/2242

#include <iostream>
#include <string>

using namespace std;

string removeConsoants(string s) {
	string stringWithoutConsoants = "",
				 vogals = "aeiou";


	for (int i = 0; i < s.size(); i++) {
		if (vogals.find(s[i]) != -1)
			stringWithoutConsoants += s[i];
	}

	return stringWithoutConsoants;
}

bool funniest(string s) {
	for (int i = 0; i < s.size(); i++) {
		if (s[i] != s[s.size()-i-1])
			return false;
	}

	return true;
}

int main() {
	string s;
	cin >> s;

	s = removeConsoants(s);

	if (funniest(s)) cout << "S" << endl;
	else cout << "N" << endl;

	return 0;
}