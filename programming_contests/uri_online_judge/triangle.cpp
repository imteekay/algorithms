// https://www.urionlinejudge.com.br/judge/en/problems/view/1043

#include <iostream>
#include <iomanip>

using namespace std;

int is_triangle(double a, double b, double c) {
	if ((a < b + c) && (b < a + c) && (c < a + b)) return 1;
	else return 0;
}

int main() {

	double a, b, c;

	cin >> a >> b >> c;

	if (is_triangle(a, b, c)) {
		cout << fixed << setprecision(1) << "Perimetro = " << a + b + c << endl;
	} else {
		cout << fixed << setprecision(1) << "Area = " << (a + b) * c / 2 << endl;
	}

	return 0;	
}