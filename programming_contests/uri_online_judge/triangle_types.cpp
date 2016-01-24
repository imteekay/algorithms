// https://www.urionlinejudge.com.br/judge/en/problems/view/1045

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

	} else {
		cout << "NAO FORMA TRIANGULO" << endl;
	}

	return 0;	
}