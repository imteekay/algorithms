// https://www.urionlinejudge.com.br/judge/en/problems/view/2060

#include <iostream>
#include <map>

using namespace std;

int main() {
	
	int n, x;
	map<int, int> m;
	cin >> n;

	for(int i = 2; i < 6; i++) m[i] = 0;

	for (int i = 0; i < n; i++) {
		cin >> x;
		if (x % 2 == 0) m[2]++;
		if (x % 3 == 0) m[3]++;
		if (x % 4 == 0) m[4]++;
		if (x % 5 == 0) m[5]++;
	}

	map<int, int>::iterator it;

	for (it = m.begin(); it != m.end(); it++) {
		cout << it->second << " Multiplo(s) de " << it->first << endl;
	}

	return 0;
}