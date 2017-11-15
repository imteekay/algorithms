// https://www.urionlinejudge.com.br/judge/en/problems/view/2143

#include <iostream>

using namespace std;

int main() {
	int n, x;
	
	while (cin >> n && n != 0) {
		while (n--) {
			cin >> x;
			if (x % 2 == 0) {
				cout << (x-2) * 2 + 2 << endl;
			} else {
				cout << (x-1) * 2 + 1 << endl;
			}
		}
	}

	return 0;
}