// https://www.urionlinejudge.com.br/judge/en/problems/view/1107

#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> v;
	int n1, n2, x;

	while (cin >> n1 >> n2 && n1 + n2 != 0) {	
		for (int i = 0; i < n2; i++) {
			cin >> x;
			v.push_back(n1-x);
		}

		int counter = v[0];
		
		for (int i = 1; i < n2; i++) {
			if (v[i] > v[i-1]) counter += v[i] - v[i-1];
		}

		cout << counter << endl;
		v.clear();
	}

	return 0;
}