// https://www.urionlinejudge.com.br/judge/en/problems/view/1424

#include <iostream>
#include <vector>

using namespace std;

int getKthOccurrence(vector<unsigned long long int> &ar, int k, unsigned long long int v) {
	int counter = 0;
	for (int i = 0; i < ar.size(); i++) {
		if (ar[i] == v) {
			counter++;
			if (counter == k) return i+1;
		}
	}
	return 0;
}

int main() {
	int n, m, k, x;
	unsigned long long int v;	
	
	while (cin >> n >> m) {
		vector<unsigned long long int> ar;

		for (int i = 0; i < n; i++) {
			cin >> x;
			ar.push_back(x);
		}

		for (int j = 0; j < m; j++) {
			cin >> k >> v;
			cout << getKthOccurrence(ar, k, v) << endl;
		}
	}

	return 0;
}