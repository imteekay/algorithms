#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
	
	int n1, n2, x;
	
	while (cin >> n1 >> n2) {
		map<int, int> m;
		vector<int> v;
		
		for (int i = 1; i <= n2; i++) {
			cin >> x;
			m[x] = x;
		}
		
		for (int i = 1; i <= n1; i++) {
			if (m.find(i) == m.end()) v.push_back(i);
		}
	
		if (v.empty()) {
			cout << "*";
		} else {
			for (int i = 0; i < v.size(); i++) {
				cout << v[i] << " ";
			}
		}

		cout << endl;
	
	}
	
	return 0;
}
