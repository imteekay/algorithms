// https://www.urionlinejudge.com.br/judge/en/problems/view/1256

#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
	int n, m, c, x, key;
	cin >> n;
	
	for (int a = 0; a < n; a++) {
		map<int, vector<int> > hash;
		vector<int> v;
		cin >> m >> c;

		for (int i = 0; i < c; i++) {
			cin >> x;
			key = x % m;
			hash[key].push_back(x);
		}
		
		for (int i = 0; i < m; i++) {
			cout << i << " -> ";
			for (int j = 0; j < hash[i].size(); j++) cout << hash[i][j] << " -> ";
			cout << "\\" << endl;
		}
		
		if (a < n-1) cout << endl;
	}
	
	return 0;
}
