#include <iostream>

using namespace std;

int main (void) {
	int A, B, C;

	cin >> A >> B >> C;

	int N = 1;
	int M = 0;

	if (C == 1) M++;

	for (int i = 0; i < B; i++) {
		int COMM;

		cin >> COMM;
	
		N += COMM;

		if (N == 0) N = A;
		else if (N > A) N = 1;

		if (N == C) M++;
	}

	cout << M << endl;

	return 0;
}
