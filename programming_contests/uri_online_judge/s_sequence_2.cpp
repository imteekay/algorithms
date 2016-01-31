// https://www.urionlinejudge.com.br/judge/en/problems/view/1156

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	double n = 1;
	double total = 0;

	for (int i = 1; i <= 39; i += 2) {
		total += (i / n);
		n *= 2;
	}

	cout << fixed << setprecision(2) << total << endl;

	return 0;
}