// https://www.urionlinejudge.com.br/judge/en/problems/view/1533

#include <iostream>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	
	int n, x;

	while (cin >> n && n != 0) {		
		map<int, int> m;
		vector<int> v;

		for (int i = 1; i <= n; i++) {
			cin >> x;
			m[x] = i;
			v.push_back(x);
		}

		sort(v.begin(), v.end(), greater<int>());
		int key = v[1];

		cout << m[key] << endl;
	}
	
	return 0;
}