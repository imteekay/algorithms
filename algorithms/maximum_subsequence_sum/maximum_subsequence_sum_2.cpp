#include <iostream>
#include <vector>

using namespace std;

int maximum_subsequence_sum(vector<int> &v) {
	int sum = 0, result = 0;

	for (int i = 0; i < v.size(); i++) {
		if (sum + v[i] > 0) sum += v[i];
		else sum = 0;
		if (sum > result) result = sum;
	}

	return result;
}

int main() {
	int result;

	int ar1[] = { 1, -3, 2, -5, 7, 6, -1, -4, 11, -23 };
	vector<int> v1(ar1, ar1 + sizeof(ar1) / sizeof(ar1[0]));
	result = maximum_subsequence_sum(v1);
	cout << result << endl;

	int ar2[] = { 1, -3, 2, -5, 7 };
	vector<int> v2(ar2, ar2 + sizeof(ar2) / sizeof(ar2[0]));
	result = maximum_subsequence_sum(v2);
	cout << result << endl;

	int ar3[] = { 1, -3, 6, -5, 7 };
	vector<int> v3(ar3, ar3 + sizeof(ar3) / sizeof(ar3[0]));
	result = maximum_subsequence_sum(v3);
	cout << result << endl;

	return 0;
}