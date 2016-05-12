// https://www.urionlinejudge.com.br/judge/en/problems/view/1414

#include <iostream>
#include <string>

using namespace std;

int main() {
	
	int n1, n2, x, points=0, total;
	string team;

	while (cin >> n1 >> n2 && n1 + n2 != 0) {
		total = n2 * 3;
		while (n1--) {
			cin >> team >> x;
			points += x;
		}

		cout << total - points << endl;
		points = 0;
	}

	return 0;
}