// https://www.urionlinejudge.com.br/judge/en/problems/view/1041

#include <iostream>

using namespace std;

int main() {

	double x, y;

	cin >> x >> y;

	if (x > 0 && y > 0) {
		cout << "Q1" << endl;
	} else if (x < 0 && y > 0) {
		cout << "Q2" << endl;
	} else if (x < 0 && y < 0) {
		cout << "Q3" << endl;
	} else if (x > 0 && y < 0) {
		cout << "Q4" << endl;
	} else if (x == 0 && y == 0) {
		cout << "Origem" << endl;
	} else if (x == 0 && y != 0) {
		cout << "Eixo Y" << endl;
	} else if (x != 0 && y == 0) {
		cout << "Eixo X" << endl;
	}

	return 0;
}