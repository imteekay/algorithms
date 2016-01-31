// https://www.urionlinejudge.com.br/judge/en/problems/view/1182

#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

int main() {

	int column;
	double n;
	cin >> column;

	string t;
	cin >> t;

	vector< vector<double> > v1;	

	for (int i = 0; i < 12; i++) {
		vector<double> v2;

		for (int j = 0; j < 12; j++) {
			cin >> n;
			v2.push_back(n);
		}

		v1.push_back(v2);
	}

	if (t == "S") {
		double sum = 0;
		for (int i = 0; i < 12; i++) sum += v1[i][column];
		cout << fixed << setprecision(1) << sum << endl;
	} else if (t == "M") {
		double average = 0;
		for (int i = 0; i < 12; i++) average += v1[i][column];
		cout << fixed << setprecision(1) << average / 12 << endl;
	}

	return 0;
}