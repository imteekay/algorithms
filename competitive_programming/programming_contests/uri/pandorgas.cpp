// https://www.urionlinejudge.com.br/judge/en/problems/view/1585

#include <iostream>

using namespace std;

int main() {
	int result;
	float n, n1, n2;
	cin >> n;

	while (n--) {
		cin >> n1 >> n2;
		result = n1 * n2 / 2;
		cout << result << " cm2" << endl;
	}

	return 0;
}