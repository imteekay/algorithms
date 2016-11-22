// https://www.urionlinejudge.com.br/judge/en/problems/view/2368

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n1, n2, x, y;
	string v;
	vector<int> nums;

	cin >> n1 >> n2;

	for (int i = 1; i <= n1; i++) nums.push_back(i);

	while (n2--) {
		cin >> v >> x >> y;

		if (v == "I") {
			while (x < y) {
				iter_swap(nums.begin() + x-1, nums.begin() + y-1);
				x++;
				y--;
			}
		} else {
			int sum = 0;
			for (int i = x-1; i < y; i++) sum += nums[i];
			cout << sum << endl;
		}
	}

	return 0;
}