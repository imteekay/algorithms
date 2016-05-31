// https://www.urionlinejudge.com.br/judge/en/problems/view/1045

#include <iostream>
#include <iomanip>
#include <math.h>
#include <vector>

using namespace std;

int is_triangle(double a, double b, double c) {
	if ((a < b + c) && (b < a + c) && (c < a + b)) return 1;
	else return 0;
}

int main() {

	double a, b, c, n;

	cin >> a >> b >> c;

	if (b > a && b >= c) {
		n = b;
		b = a;
		a = n;
	} else if (c > a && c >= b) {
		n = c;
		c = a;
		a = n;
	}

	if (is_triangle(a, b, c)) {
		if (pow(a, 2) == pow(b, 2) + pow(c, 2)) {
			cout << "TRIANGULO RETANGULO" << endl;
		} else if (pow(a, 2) > pow(b, 2) + pow(c, 2)) {
			cout << "TRIANGULO OBTUSANGULO" << endl;
		} else if (pow(a, 2) < pow(b, 2) + pow(c, 2)) {
			cout << "TRIANGULO ACUTANGULO" << endl;
		}

		if (a == b && a != c || a == c && a != b || b == c && a != c) cout << "TRIANGULO ISOSCELES" << endl;
		else if (a == b && a == c) cout << "TRIANGULO EQUILATERO" << endl;

	} else {
		cout << "NAO FORMA TRIANGULO" << endl;
	}

	return 0;	
}