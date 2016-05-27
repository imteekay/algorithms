// https://www.urionlinejudge.com.br/judge/en/problems/view/1765

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	int n, num;
	float n1, n2, h = 5.0;

	while (cin >> n && n != 0) {
		for (int i = 1; i <= n; i++) {
			cout << "Size #" << i << ":" << endl;
			cin >> num >> n1 >> n2;
			cout << fixed << setprecision(2) << "Ice Cream Used: " << num * (n1 + n2) * h / 2.0 << " cm2" << endl;
		}

		cout << endl;
	}

	return 0;
}