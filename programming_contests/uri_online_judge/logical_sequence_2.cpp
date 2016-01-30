// https://www.urionlinejudge.com.br/judge/en/problems/view/1145

#include <iostream>

using namespace std;

int main() {

	int n1, n2;

	cin >> n1 >> n2;

	for (int i = 1; i <= n2; i++) {
		cout << i;
		if (i % n1 == 0) cout << endl;
		else cout << " ";
	}

	return 0;
}