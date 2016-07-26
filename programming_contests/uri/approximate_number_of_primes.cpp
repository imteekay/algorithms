// https://www.urionlinejudge.com.br/judge/pt/problems/view/2159

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {
	long long int n;
	long double min, max;
	cin >> n;
	min = n / log(n);
	max = min * 1.25506;
	cout << fixed << setprecision(1) << min << " " << max << endl;

	return 0;
}