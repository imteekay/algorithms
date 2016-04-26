#include <iostream>

using namespace std;

int maximum_subsequence_sum(int ar[], int n) {
	int sum = 0, result = 0;

	for (int i = 0; i < n; i++) {		
		if (sum + ar[i] > 0) sum += ar[i];
		else sum = 0;			
		if (sum > result) result = sum;
	}

	return result;
}

int main() {
	int n, result;

	int ar1[] = { 1, -3, 2, -5, 7, 6, -1, -4, 11, -23 };
	n = 10;
	result = maximum_subsequence_sum(ar1, n);
	cout << result << endl;

	int ar2[] = { 1, -3, 2, -5, 7 };
	n = 5;
	result = maximum_subsequence_sum(ar2, n);
	cout << result << endl;

	int ar3[] = { 1, -3, 6, -5, 7 };
	n = 5;
	result = maximum_subsequence_sum(ar3, n);
	cout << result << endl;

	return 0;
}