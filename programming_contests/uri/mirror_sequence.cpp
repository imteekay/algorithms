// https://www.urionlinejudge.com.br/judge/en/problems/view/2157

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string toString(int n) {
	stringstream ss;
	ss << n;
	return ss.str();
}

string reverseString(string s) {
	string reversedString = "";
	for (int i = s.size()-1; i >= 0; i--) reversedString += s[i];
	return reversedString;
}

int main() {
	int n, min, max;
	string n1, n2, result, numbers = "0123456789";

	cin >> n;

	while (n--) {
		cin >> min >> max;
		result = "";

		for (int i = min; i <= max; i++) {
			result += toString(i);
		}

		result += reverseString(result);

		cout << result << endl;
	}

	return 0;
}