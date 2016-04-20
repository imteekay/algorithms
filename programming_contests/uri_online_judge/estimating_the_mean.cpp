#include <iostream>
#include <vector>

using namespace std;

int maximum_subsequence_sum(vector<int> &v) {
	int sum = 0, result = 0, lastEl = -1;

	for (int i = 0; i < v.size(); i++) {
		if (v[i] >= lastEl) {
			sum++;
			lastEl = v[i];
		} else {
			sum = 0;
			lastEl = -1;
		}

		if (sum > result) result = sum;
	}

	return result;
}

int main() {
	int n, num, x, result, casy = 1;
	cin >> n;
	
	while (n--) {
		cin >> num;
		vector<int> v;
		
		while (num--) {
			cin >> x;
			v.push_back(x);
		}
		
		result = maximum_subsequence_sum(v);
		cout << "Caso #" << casy << ": " << result << endl;
		casy++;
	}

	return 0;
}
