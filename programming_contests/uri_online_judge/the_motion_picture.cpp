// https://www.urionlinejudge.com.br/judge/en/problems/view/1963

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	double n1, n2;

	cin >> n1 >> n2;

	cout << fixed << setprecision(2) << ((n2 - n1) / n1) * 100 << "%" << endl;

	return 0;
}