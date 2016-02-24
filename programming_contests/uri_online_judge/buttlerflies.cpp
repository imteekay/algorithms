// https://www.urionlinejudge.com.br/judge/en/problems/view/1901

#include <iostream>
#include <vector>

using namespace std;

int new_specie(vector<int> &v, int n) {
	int found = 0;

	for (int i = 0; i < v.size(); i++) if (v[i] == n) found = 1;

	if (found) return 0;
	else return 1;
}

int main() {

	int n;
	vector< vector<int> > m;
	vector<int> species;

	cin >> n;

	for (int i = 0; i < n; i++) {
		vector<int> v;
		for (int j = 0; j < n; j++) {
			int temp;
			cin >> temp;
			v.push_back(temp);
		}

		m.push_back(v);
	}

	n = n * 2;
	int n1, n2;
	cin >> n1 >> n2;
	n1 -= 1;
	n2 -= 1;
	species.push_back(m[n1][n2]);

	while (n--) {		
		if (new_specie(species, m[n1][n2])) species.push_back(m[n1][n2]);

		cin >> n1 >> n2;
		n1 -= 1;
		n2 -= 1;
	}

	cout << species.size() << endl;

	return 0;
}