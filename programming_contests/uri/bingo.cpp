// https://www.urionlinejudge.com.br/judge/en/problems/view/1136

#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

bool isPossible(const set<int> s, int n) {
	int i = 0;

	if (n > *s.rbegin()) return false;

	for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
		if (*it != i) return false;
		i++;
	}

	return true;
}

int main() {
	int n, b, x;

	while (cin >> n && cin >> b && n + b != 0) {
		vector<int> v;
		set<int> s;

		for (int i = 0; i < b; i++) {
			cin >> x;
			v.push_back(x);
		}

		sort(v.begin(), v.end());

		for (int i = v.size()-1; i >= 0; i--) {
			for (int j = i; j >= 0; j--) {
				s.insert(v[i] - v[j]);
			}
		}

		if (isPossible(s, n)) cout << "Y" << endl;
		else cout << "N" << endl;
	}

	return 0;
}