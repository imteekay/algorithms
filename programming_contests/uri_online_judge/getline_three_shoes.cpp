// https://www.urionlinejudge.com.br/judge/en/problems/view/1218

#include <iostream>
#include <string>

using namespace std;

int main() {
	bool first = true, found;
	string num, shoes, shoe_num = "";
	int casy = 1;

	while (cin >> num) {
		int fem = 0, mas = 0, number_shoes = 0;
		cin.ignore();
		getline(cin, shoes);
		for (int i = 0; i < shoes.size(); i += 5) {
			int ind = i;
			if (shoes.substr(i, 2) == num) {
				ind += 3;
				if (shoes[ind] == 'F') fem++;
				else mas++;
				number_shoes++;
			}
		}

		if (first) {
			cout << "Caso " << casy << ":" << endl;
			first = false;
		} else {
			cout << endl << "Caso " << casy << ":" << endl;
		}

		cout << "Pares Iguais: " << number_shoes << endl;
		cout << "F: " << fem << endl;
		cout << "M: " << mas << endl;
		casy++;
	}

	return 0;
}