// https://www.urionlinejudge.com.br/judge/en/problems/view/1467

#include <iostream>

using namespace std;

int main() {

	int a, b, c;

	while (scanf("%d %d %d", &a, &b, &c) != EOF) {
		if (a == b && a == c) {
			cout << "*" << endl;
		} else {
			if (b == c) cout << "A" << endl;
			else if (a == c) cout << "B" << endl;
			else if (a == b) cout << "C" << endl;
		}
	}

	return 0;
}