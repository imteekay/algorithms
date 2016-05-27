// https://www.urionlinejudge.com.br/judge/en/problems/view/1761

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {
	
	double angle, distance, height;

	while (cin >> angle >> distance >> height) {
		cout << fixed << setprecision(2) << (tan(angle * 3.141592654 / 180.0) * distance + height) * 5 << endl;
	}

	return 0;
}