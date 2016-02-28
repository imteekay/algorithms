// https://www.urionlinejudge.com.br/judge/en/problems/view/1028

#include <iostream>
using namespace std;

int mcd(int n1, int n2) {
	if (n2 == 0) return n1;
	return mcd(n2, n1 % n2);
}

int main() {
	
	int n, n1, n2;
	cin >> n;
	
	while (n--) {
		cin >> n1 >> n2;
		if (n1 > n2) cout << mcd(n1, n2) << endl;
		else cout << mcd(n2, n1) << endl;
	}
	
	return 0;
}
