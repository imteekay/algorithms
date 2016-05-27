// https://www.urionlinejudge.com.br/judge/en/problems/view/1632

#include <iostream>
#include <string>

using namespace std;

bool in_new(char l) {
	if (l == 'a' || l == 'A' || l == 'e' || l == 'E' || l == 'i' || l == 'I' || l == 'o' || l == 'O' || l == 's' || l == 'S') return true;
	return false;
}

int main() {
	
	int n, total;
	cin >> n;
	string code;

	while (n--) {
		cin >> code;
		total = 1;

		for (int i = 0; i < code.size(); i++) {
			if (in_new(code[i])) total *= 3;
			else total *= 2;
		}

		cout << total << endl;
	}

	return 0;
}