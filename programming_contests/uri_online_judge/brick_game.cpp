// https://www.urionlinejudge.com.br/judge/en/problems/view/1436 

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int t, casi=1;
	cin >> t;
	
	while (t--) {
		vector<int> v;
		int n, temp;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> temp;
			v.push_back(temp);
		}
		
		sort(v.begin(), v.end());
		
		cout << "Case " << casi << ": " << v[n/2] << endl;
		casi++;
	}
	
	return 0;
}
