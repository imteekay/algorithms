// https://www.urionlinejudge.com.br/judge/en/problems/view/1011

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {

	const double PI = 3.14159;
	int n;
	cin >> n;

	cout << fixed << setprecision(3) << "VOLUME = " << (4.0 / 3) * PI * pow(n, 3) << endl;

	return 0;
}