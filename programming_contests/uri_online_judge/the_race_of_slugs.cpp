// https://www.urionlinejudge.com.br/judge/en/problems/view/1789

#include <iostream>

using namespace std;

int main() {

	int n, x, faster = 0;
	
	while (scanf("%d", &n) != EOF) {

		while (n--) {
			cin >> x;
			if (x > faster) faster = x;
		}

		if (faster < 10) cout << 1 << endl;
		else if (faster < 20) cout << 2 << endl;
		else cout << 3 << endl;

		faster = 0;
	}

	return 0;
}