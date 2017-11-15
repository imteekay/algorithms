#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	
	int total, test=1;
	cin >> total;

	while (total != 0) {

		int num = 4;;
		vector<int> v;

		while (num--) {
			v.push_back(0);
		}

		while (total > 0) {
			if (total >= 50) {
				total -= 50;
				v[0]++;
			} else if (total >= 10) {
				total -= 10;
				v[1]++;
			} else if (total >= 5) {
				total -= 5;
				v[2]++;
			} else {
				total -= 1;
				v[3]++;
			}
		}

		cout << "Teste " << test << endl;

		for (int i = 0; i < 4; i++) {
			cout << v[i] << " ";
		}

		cout << endl << endl;

		test++;
		cin >> total;
	}

	return 0;
}