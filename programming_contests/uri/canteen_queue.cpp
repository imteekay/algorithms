// https://www.urionlinejudge.com.br/judge/en/problems/view/1548

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n, x, k;
	cin >> n;

	while (n--) {
		vector<int> v, c;
		cin >> k;
		while (k--) {
			cin >> x;
			v.push_back(x);
			c.push_back(x);
		}

		sort(v.begin(), v.end());

		int counter = 0;

		for (int i = 0; i < v.size(); i++) if (v[i] == c[i]) counter++;
		cout << counter << endl;
	}

	return 0;
}