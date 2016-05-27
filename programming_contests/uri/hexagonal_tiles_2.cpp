// https://www.urionlinejudge.com.br/judge/en/problems/view/1393

#include <iostream>

using namespace std;

int resolve(int n1, int n2) {
	if (n == 1) return 1;
	else if (n == 2) return 2;
	else return resolve(n-2, n-1);
}

int main() {
	
	int n;

	while (cin >> n && n) {
		if (n == 1) cout << 1 << endl;
		else if (n == 2) cout << 2 << endl;
		else cout << resolve(n-2, n-1) << endl;
	}

	return 0;
}