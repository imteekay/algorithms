// https://www.urionlinejudge.com.br/judge/en/problems/view/1157

#include <iostream>

using namespace std;

int main() {

	int n;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		if (n % i == 0) cout << i << endl;
	}

}