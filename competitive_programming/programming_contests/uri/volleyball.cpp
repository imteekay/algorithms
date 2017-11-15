// https://www.urionlinejudge.com.br/judge/en/problems/view/2310

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
	int n, saque, bloqueio, ataque;
	float totalSaque = 0, totalBloqueio = 0, totalAtaque = 0;
	float totalSaqueOk = 0, totalBloqueioOk = 0, totalAtaqueOk = 0;
	string s;
	cin >> n;

	while (n--) {
		cin >> s;
		
		cin >> saque >> bloqueio >> ataque;
		totalSaque += saque;
		totalBloqueio += bloqueio;
		totalAtaque += ataque;

		cin >> saque >> bloqueio >> ataque;
		totalSaqueOk += saque;
		totalBloqueioOk += bloqueio;
		totalAtaqueOk += ataque;		
	}

	cout << setprecision(2) << fixed << "Pontos de Saque: " << totalSaqueOk / totalSaque * 100 << " %." << endl;
	cout << setprecision(2) << fixed << "Pontos de Bloqueio: " << totalBloqueioOk / totalBloqueio * 100 << " %." << endl;
	cout << setprecision(2) << fixed << "Pontos de Ataque: " << totalAtaqueOk / totalAtaque * 100 << " %." << endl;

	return 0;
}