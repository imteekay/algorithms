// https://www.urionlinejudge.com.br/judge/en/problems/view/1064

#include <iostream>

using namespace std;

int main() {

	int total=0;
	double total1=0;

	for (int i = 0; i < 6; i++) {
		double n;
		cin >> n;		
		if (n > 0) {
		 total++;
		 total1 += n;
		}
	}

	cout << total << " valores positivos" << endl;
	cout << total1 / total << endl;

	return 0;
}