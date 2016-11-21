// https://www.urionlinejudge.com.br/judge/en/problems/view/2144

#include <iostream>

using namespace std;

int main() {
	int n1, n2, n3, counter = 0;
	float total, e = 0;

	while (cin >> n1 >> n2 >> n3 && n1 + n2 + n3 != 0) {
		if (n1 < n2) total = n1 * (1 + n3 / 30.00) * 2;
		else total = n2 * (1 + n3 / 30.00) * 2;

		if (total >= 1 && total < 13) cout << "Nao vai da nao" << endl;
		else if (total >= 13 && total < 14) cout << "E 13" << endl;
		else if (total >= 14 && total < 40) cout << "Bora, hora do show! BIIR!" << endl;
		else if (total >= 40 && total <= 60) cout << "Ta saindo da jaula o monstro!" << endl;
		else cout << "AQUI E BODYBUILDER!!" << endl;

		e += total;
		counter++;
	}

	cout << endl;

	if (total / counter > 40) cout << "Aqui nois constroi fibra rapaz! Nao e agua com musculo!" << endl;

	return 0;
}