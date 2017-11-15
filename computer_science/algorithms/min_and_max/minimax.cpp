#include <iostream>

using namespace std;

void minimax(int v[], int n, int &a, int &b) {
	a = v[0];
	b = v[0];

	for (int i = 1; i < n; i++) {
		if (a > v[i]) a = v[i];
		if (b < v[i]) b = v[i];
	}
}

int main() {

	int v[] = { 1, 4, 6, 22 };
	int a, b;

	minimax(v, 4, a, b);

	cout << "a: " << a << endl;
	cout << "b: " << b << endl;

	return 0;
}