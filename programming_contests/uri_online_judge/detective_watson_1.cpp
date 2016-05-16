// https://www.urionlinejudge.com.br/judge/en/problems/view/1533

#include <iostream>

using namespace std;

int main() {
	
	int n, x;

	while (cin >> n && n != 0) {
		int index, first, second, index_first = 1;
		cin >> x;
		first = x;

		for (int i = 2; i <= n; i++) {
			cin >> x;
			if (x > first) {
				second = first;
				first = x;
				index = index_first;
				index_first = i;
			} else if (x > second) {
				second = x;
				index = i;
			}
		}

		cout << index << endl;
	}
	
	return 0;
}