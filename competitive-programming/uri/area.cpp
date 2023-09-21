// https://www.urionlinejudge.com.br/judge/en/problems/view/1012

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {

	const double PI = 3.14159;
	float n1, n2, n3;
	cin >> n1 >> n2 >> n3;

	cout << fixed << setprecision(3) << "TRIANGULO: " << n1 * n3 / 2 << endl;
	cout << fixed << setprecision(3) << "CIRCULO: " << PI * pow(n3, 2) << endl;
	cout << fixed << setprecision(3) << "TRAPEZIO: " << (n1 + n2) * n3 / 2 << endl;
	cout << fixed << setprecision(3) << "QUADRADO: " << n2 * n2 << endl;
	cout << fixed << setprecision(3) << "RETANGULO: " << n1 * n2 << endl;

	return 0;
}