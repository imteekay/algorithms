// https://www.urionlinejudge.com.br/judge/en/problems/view/1796

#include <iostream>

using namespace std;

int main() {
	
	int n, x, yes=0, no=0;

	cin >> n;

	while (n--) {
		cin >> x;
		if (x) no++;
		else yes++;
	}

	if (no >= yes) cout << "N" << endl;
	else cout << "Y" << endl;

	return 0;
}