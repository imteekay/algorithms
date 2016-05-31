// https://www.urionlinejudge.com.br/judge/en/problems/view/1143

#include <iostream>

using namespace std;

int main() {

	int n;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cout << i << " " << i * i << " " << i * i * i << endl;
	}

	return 0;
}