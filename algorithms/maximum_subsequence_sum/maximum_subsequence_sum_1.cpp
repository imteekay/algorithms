#include <iostream>

using namespace std;

int maximum_subsequence_sum(int ar[], int n) {
	int sum = 0, result = 0;

	for (int i = 0; i < n; i++) {		
		if (sum + ar[i] > 0) {
			sum += ar[i];
		} else {
			if (sum > result) result = sum;
			sum = 0;
		}
	}

	return result;
}

int main() {
	
	int ar[] = { 1, -3, 2, -5, 7, 6, -1, -4, 11, -23 };
	int n = 10;

	int result = maximum_subsequence_sum(ar, n);

	cout << result << endl;

	return 0;
}