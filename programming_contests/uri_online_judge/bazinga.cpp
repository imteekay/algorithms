// https://www.urionlinejudge.com.br/judge/en/problems/view/1828

#include <iostream>
#include <string>

using namespace std;

int main() {

	int n;
	cin >> n;

	string player1, player2;

	for (int i = 1; i <= n; i++) {
		cin >> player1 >> player2;
		cout << "Caso #" << i << ": ";

		if (player1 == player2) {
			cout << "De novo!" << endl;
		}	else {
			if (player1 == "tesoura") {
				if (player2 == "papel" || player2 == "lagarto") cout << "Bazinga!" << endl;
				else cout << "Raj trapaceou!" << endl;
			} else if (player1 == "papel") {
				if (player2 == "pedra" || player2 == "Spock") cout << "Bazinga!" << endl;
				else cout << "Raj trapaceou!" << endl;
			} else if (player1 == "pedra") {
				if (player2 == "lagarto" || player2 == "tesoura") cout << "Bazinga!" << endl;
				else cout << "Raj trapaceou!" << endl;
			} else if (player1 == "lagarto") {
				if (player2 == "Spock" || player2 == "papel") cout << "Bazinga!" << endl;
				else cout << "Raj trapaceou!" << endl;
			} else if (player1 == "Spock") {
				if (player2 == "tesoura" || player2 == "pedra") cout << "Bazinga!" << endl;
				else cout << "Raj trapaceou!" << endl;
			}
		}
	}	

	return 0;
}