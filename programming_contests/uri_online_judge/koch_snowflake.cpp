// https://www.urionlinejudge.com.br/judge/en/problems/view/1760

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {
	
	int l;
	double total;
	
	while (cin >> l) {
		total = 8 * pow(l, 2) * (sqrt(3)) / 20;
		cout << fixed << setprecision(2) << total << endl;
	}
	
	return 0;
}