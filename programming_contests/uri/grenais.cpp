// https://www.urionlinejudge.com.br/judge/en/problems/view/1131

#include <iostream>

using namespace std;

int main() {

	int n1, n2, n, inter=0, gremio=0, empate=0, total=1;

	cin >> n1 >> n2;

	if (n1 > n2) {
		inter++;
	} else if (n2 > n1) {
		gremio++;
	} else {
		empate++;
	}

	cout << "Novo grenal (1-sim 2-nao)" << endl;
	cin >> n;

	while (n == 1) {

		cin >> n1 >> n2;

		if (n1 > n2) {
			inter++;
		} else if (n2 > n1) {
			gremio++;
		} else {
			empate++;
		}

		cout << "Novo grenal (1-sim 2-nao)" << endl;
		cin >> n;
		total++;
	}

	cout << total << " grenais" << endl;
	cout << "Inter:" << inter << endl;
	cout << "Gremio:" << gremio << endl;	
	cout << "Empates:" << empate << endl;
	
	if (inter > gremio) cout << "Inter venceu mais" << endl;
	else if (gremio > inter) cout << "Gremio venceu mais" << endl;
	else cout << "Nao houve vencedor" << endl;

	return 0;
}