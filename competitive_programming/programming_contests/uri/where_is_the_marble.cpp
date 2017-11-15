// https://www.urionlinejudge.com.br/judge/en/problems/view/1025

#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<int> v;
	map<int, int> m;
	int n, q, casy = 1, x;

	while (cin >> n >> q && n + q != 0) {
		for (int i = 0; i < n; i++) {
			cin >> x;
			v.push_back(x);
		}

		sort(v.begin(), v.end());

		for (int i = 0; i < n; i++) {
			if (m.find(v[i]) != m.end()) m[v[i]] = i+1;
		}

		cout << "CASE# " << casy << ":" << endl;

		while (q--) {
			cin >> x;
			if (m.find(x) != m.end()) cout << x << " found at " << m[x] << endl;
			else cout << x << " not found" << endl;
		}

		casy++;
		v.clear();
		m.clear();
	}

	return 0;
}