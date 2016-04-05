// https://www.urionlinejudge.com.br/judge/en/problems/view/1257

#include <iostream>
#include <string>

using namespace std;

int main() {
	
	int n, m;
	cin >> n;

	string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	while (n--) {		
		cin >> m;
		int total = 0;
		string code;

		for (int i = 0; i < m; i++) {
			cin >> code;
			for (int j = 0; j < code.size(); j++) total += alphabet.find(code[j]) + i + j;			
		}

		cout << total << endl;
	}

	return 0;
}