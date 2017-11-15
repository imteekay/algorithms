// https://www.urionlinejudge.com.br/judge/en/problems/view/1424

#include <iostream>
#include <vector>
#include <map>

using namespace std;

int getKthOccurrence(map< int, vector<int> > &hash, int k, int v) {
	int counter = 0;	

	for (int i = 0; i < hash[v].size(); i++) {		
		counter++;
		if (counter == k) return hash[v][i];
	}

	return 0;
}

int main() {
	int n, m, k, v, x;
	
	while (cin >> n >> m) {
		map< int, vector<int> > hash;
		vector<int> ar;

		for (int i = 1; i <= n; i++) {
			cin >> x;
			if (hash.find(x) != hash.end()) hash[x].push_back(i);
			else {
				ar.push_back(i);
				hash[x] = ar;
				ar.clear();
			}
		}

		for (int j = 0; j < m; j++) {
			cin >> k >> v;
			cout << getKthOccurrence(hash, k, v) << endl;
		}
	}

	return 0;
}