// https://www.urionlinejudge.com.br/judge/en/problems/view/1036

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {

	double a, b, c;

	cin >> a >> b >> c;

	double delta = pow(b, 2) - 4 * a * c;

	if (delta > 0 && a != 0) {
		cout << fixed << setprecision(5) << "R1 = " << ((-1) * b + sqrt(delta)) / (2 * a) << endl;
		cout << fixed << setprecision(5) << "R2 = " << ((-1) * b - sqrt(delta)) / (2 * a) << endl;
	} else {
		cout << "Impossivel calcular" << endl;
	}

	return 0;
}