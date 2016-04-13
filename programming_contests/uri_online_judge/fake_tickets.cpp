// https://www.urionlinejudge.com.br/judge/en/problems/view/1318

#include <iostream>
#include <map>

using namespace std;

int main() {
	
	map<int, int> m;
	
	int n1, n2, x;
	
	while (cin >> n1 >> n2 && n1 + n2 != 0) {
		for (int = 0; i < n2; i++) {
			cin >> x;
			if (m.find(x) == b.end()) m[x] = 1;
			else m[x]++;
		}
		
		map<int, int>::iterator it;
		
		for (it = m.begin(); it != m.end(); i++) {
			cout << it->first << " " << it->second << endl;
		}
	}
	
	return 0;
}
