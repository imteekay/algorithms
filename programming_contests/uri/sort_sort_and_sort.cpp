// https://www.urionlinejudge.com.br/judge/en/problems/view/1252

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool sortBy(const pair<int, int> &pair1, const pair<int, int> &pair2) {
	if (pair1.first > pair2.first) {
		return false;
	} else if (pair1.first < pair2.first) {
		return true;
	} else {
		if (pair1.second % 2 == 0 && pair2.second % 2 == 0) {
			return pair1.second < pair2.second;
		} else if (pair1.second % 2 != 0 && pair2.second % 2 != 0) {
			return pair1.second > pair2.second;
		} else if (pair1.second % 2 != 0 && pair2.second % 2 == 0) {
			return true;
		} else {
			return false;
		}
	}
}

int main() {
	int n, m, x;

	while (cin >> n >> m && n + m != 0) {
		vector< pair<int, int> > v;
		for (int i = 0; i < n; i++) {
			cin >> x;
			v.push_back(make_pair(x % m, x));
		}

		sort(v.begin(), v.end(), sortBy);

		cout << n << " " << m << endl;
		for (int i = 0; i < v.size(); i++) cout << v[i].second << endl;
	}

	cout << 0 << " " << 0 << endl;

	return 0;
}