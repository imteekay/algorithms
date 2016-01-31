// https://www.urionlinejudge.com.br/judge/en/problems/view/1178

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {

	double n;
	cin >> n;

	vector<double> v;

	for (int i = 0; i < 100; i++) {
		v.push_back(n);
		n /= 2;
	}

	for (int i = 0; i < 100; i++) {
		cout << fixed << setprecision(4) << "N[" << i << "] = " << v[i] << endl;
	}

	return 0;
}