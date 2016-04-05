// https://www.urionlinejudge.com.br/judge/en/problems/view/1914

#include <iostream>
#include <string>

using namespace std;

int main() {
	
	int n, num1, num2, total;
	string player1, player2, strat1, strat2;

	cin >> n;

	while (n--) {
		cin >> player1 >> strat1 >> player2 >> strat2;
		cin >> num1 >> num2;
		total = num1 + num2;

		if (total % 2 == 0) {
			if (strat1 == "PAR") cout << player1 << endl;
			else cout << player2 << endl;
		} else {
			if (strat1 == "IMPAR") cout << player1 << endl;
			else cout << player2 << endl;
		}
	}

	return 0;
}