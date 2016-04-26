// https://www.urionlinejudge.com.br/judge/en/problems/view/1105

#include <iostream>
#include <vector>

using namespace std;

struct bank {
	int code;
	int money;
	int owing;
};

int main() {	
	int n1, n2, m, debtor, creditor, value;
	cin >> n1 >> n2;

	while (n1 + n2 != 0) {
		vector<bank> banks;
		bool pos_liqui = true;

		for (int i = 0; i < n1; i++) {
			cin >> m;
			bank b;
			b.code = i;
			b.money = m;
			banks.push_back(b);
		}

		for (int j = 0; j < n2; j++) {
			cin >> debtor >> creditor >> value;
			banks[debtor-1].owing += value;
			banks[creditor-1].money += value;
		}

		for (int k = 0; k < n1; k++) {
			cout << "Money: " << banks[k].money << " | Owing: " << banks[k].owing << endl;
			if (banks[k].owing > banks[k].money) {
				pos_liqui = true;
				break;
			}
		}

		if (pos_liqui) cout << "S" << endl;
		else cout << "N" << endl;

		cin >> n1 >> n2;
	}

	return 0;
}