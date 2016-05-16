// https://www.urionlinejudge.com.br/judge/en/problems/view/1267

#include <iostream>
#include <vector>

using namespace std;

int main() {
	
	int alumnis, dinners, temp;
	vector<int> al;

	cin >> alumnis >> dinners;

	while (alumnis + dinners != 0) {
		bool didit = false;
		for (int i = 0; i < alumnis; i++) al.push_back(0);

		for (int j = 0; j < dinners; j++) {
			for (int i = 0; i < alumnis; i++) {
				cin >> temp;
				if (temp) al[i]++;
			}
		}

		for (int i = 0; i < alumnis; i++) {
			if (al[i] == dinners) {
				didit = true;
				break;
			}
		}

		if (didit) cout << "yes" << endl;
		else cout << "no" << endl;

		al.clear();
		cin >> alumnis >> dinners;
	}

	return 0;
}