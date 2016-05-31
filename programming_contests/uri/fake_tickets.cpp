// https://www.urionlinejudge.com.br/judge/en/problems/view/1318

#include <iostream>
#include <map>

using namespace std;

int main() {
	
	map<int, int> m;
	
	int n1, n2, x;
	
	while (cin >> n1 >> n2 && n1 + n2 != 0) {
		for (int i = 0; i < n2; i++) {
			cin >> x;
			if (m.find(x) == m.end()) m[x] = 1;
			else m[x]++;
		}
		
		map<int, int>::iterator it;
		
		int counter = 0;

		for (it = m.begin(); it != m.end(); it++) {
			if (it->second > 1) counter++;
		}

		cout << counter << endl;
		m.clear();
	}
	
	return 0;
}
