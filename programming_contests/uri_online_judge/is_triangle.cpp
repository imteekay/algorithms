// https://www.urionlinejudge.com.br/judge/en/problems/view/1929

#include <iostream>

using namespace std;

int is_triangle(int a, int b, int c) {
	if ((a < b + c) && (b < a + c) && (c < a + b)) return 1;
	else return 0;
}

int main() {
	
	int a, b, c, d, triangle=0;

	cin >> a >> b >> c >> d;

	if (is_triangle(a, b, c) || is_triangle(a, b, d) || is_triangle(a, c, d) || is_triangle(b, c, d)) {
		cout << "S" << endl;
	} else {
		cout << "N" << endl;
	}

	return 0;
}