// https://www.urionlinejudge.com.br/judge/en/problems/view/1174

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {

	double n;
	vector<double> v;

	for (int i = 0; i < 100; i++) {
		cin >> n;
		v.push_back(n);
	}

	for (int i = 0; i < 100; i++) if (v[i] <= 10) cout << fixed << setprecision(1) << "A[" << i << "] = " << v[i] << endl;

	return 0;
}