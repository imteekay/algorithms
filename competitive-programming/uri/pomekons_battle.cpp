// https://www.urionlinejudge.com.br/judge/en/problems/view/2221

#include <iostream>

using namespace std;

int main() {
	int numberOfInstance, attack, defense, bonus, level;
	float firstPlayerValue, secondPlayerValue;

	cin >> numberOfInstance;

	while (numberOfInstance--) {
		cin >> bonus;

		cin >> attack >> defense >> level;
		firstPlayerValue = (attack + defense) / 2.0;
		if (level % 2 == 0) firstPlayerValue += bonus;
		
		cin >> attack >> defense >> level;
		secondPlayerValue = (attack + defense) / 2.0;
		if (level % 2 == 0) secondPlayerValue += bonus;

		if (firstPlayerValue > secondPlayerValue) cout << "Dabriel" << endl;
		else if (secondPlayerValue > firstPlayerValue) cout << "Guarte" << endl;
		else cout << "Empate" << endl;
	}

	return 0;
}