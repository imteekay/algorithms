// https://www.urionlinejudge.com.br/judge/en/problems/view/1472

#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, x, num, sum, partOfArc;

	while (cin >> n) {
		vector<int> nums;
		sum = 0;

		for (int i = 0; i < n; i++) {
			cin >> x;
			sum += x;
			nums.push_back(x);
		}

		if (sum % 3 == 0) {
			partOfArc = sum / 3;
		} else {
			cout << 0 << endl;
		}
	}

	return 0;
}