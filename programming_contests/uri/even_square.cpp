// https://www.urionlinejudge.com.br/judge/en/problems/view/1073

#include <iostream>
#include <math.h>

using namespace std;

int main() {

	long long int n;
	cin >> n;

	for (long long int i = 2; i <= n; i += 2) {
		long long int exp = pow(i, 2);
		cout << i << "^2 = " << exp << endl;
	}

	return 0;
}