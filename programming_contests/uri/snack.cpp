// https://www.urionlinejudge.com.br/judge/en/problems/view/1038

#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main() {

	vector<double> ar;
	ar.push_back(4.0);
	ar.push_back(4.5);
	ar.push_back(5.0);
	ar.push_back(2.0);
	ar.push_back(1.5);

	int n1, n2;

	cin >> n1 >> n2;

	cout << fixed << setprecision(2) << "Total: R$ " << ar[n1-1] * n2 << endl;

	return 0;
}	