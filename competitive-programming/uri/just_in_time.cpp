#include <iostream>
#include <cmath>

using namespace std;

bool isPrimo(int n);
int menorPrimo(int n);

int main (void) {
	int N;
	
	cin >> N;

	cout << menorPrimo(N) << endl;

	return 0;
}

bool isPrimo(int n) {
	if (n < 2) return false;
	if (n == 2) return true;
	if (n % 2 == 0) return false;
	
	int sq = sqrt(n) + 1;	

	for (int i = 3; i <= sq; i += 2) {
		if (n % i == 0) return false;
	}

	return true;
}

int menorPrimo(int n) {
	while (n >= 2) {
		if (isPrimo(n)) return n;
		n--;
	}

	return n;
}

