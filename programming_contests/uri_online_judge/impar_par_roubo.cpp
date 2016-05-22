#include <iostream>

using namespace std;

int main() {
	
	int p, j1, j2, r, a;
	cin >> p >> j1 >> j2 >> r >> a;

	if (r == 1 && a == 1) cout << "Jogador 2 ganha!" << endl;
	else if (r == 1 && a == 0) cout << "Jogador 1 ganha!" << endl;
	else {
		int sum = j1 + j2;
		if (sum % 2 == 0 && p == 1) cout << "Jogador 1 ganha!" << endl;
		else if (sum % 2 == 0 && p == 0) cout << "Jogador 2 ganha!" << endl;
		else if (sum % 2 != 0 && p == 0) cout << "Jogador 1 ganha!" << endl;
		else cout << "Jogador 2 ganha!" << endl;
	}

	return 0;
}