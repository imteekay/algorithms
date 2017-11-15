// https://www.urionlinejudge.com.br/judge/en/problems/view/1241

#include <iostream>
#include <string>

using namespace std;

int main() {

	int n;
	cin >> n;
	string n1, n2;

	while (n--) {
		cin >> n1 >> n2;

		if (n1.size() >= n2.size()) {
			int pos = n1.size() - n2.size();
			int length = n1.size() - pos;

			string subs = n1.substr(pos, length);

			if (subs == n2) cout << "encaixa" << endl;
			else cout << "nao encaixa" << endl;
		} else {
			cout << "nao encaixa" << endl;
		}
	}

	return 0;
}