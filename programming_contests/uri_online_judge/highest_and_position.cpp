// https://www.urionlinejudge.com.br/judge/en/problems/view/1080

#include <iostream>

using namespace std;

int main() {

	int n, max=0, index;

	for (int i = 1; i <= 100; i++) {
		cin >> n;
		if (n > max) {
			max = n;
			index = i;
		}
	}

	cout << max << endl << index << endl;

	return 0;
}