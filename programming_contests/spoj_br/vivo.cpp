#include <iostream>
#include <vector>

using namespace std;

int main() {

	int n1, n2, test=1;
	cin >> n1 >> n2;

	while (n1 + n2 != 0) {

		int temp;
		vector<int> v;

		for (int i = 0; i < n1; i++) {
			cin >> temp;
			v.push_back(temp);
		}

		while (1) {
			int n, j, erasing=0;
			cin >> n;
			cin >> j;

			for (int i = 0; i < n; i++) {
				int t;
				cin >> t;
				
				if (t != j) {
					v.erase(v.begin() + i - erasing);
					erasing++;
				}
			}

			if (v.size() == 1) break;
		}

		cout << "Teste " << test << endl;
		cout << v[0] << endl;

		test++;
		cin >> n1 >> n2;
	}

	return 0;
}