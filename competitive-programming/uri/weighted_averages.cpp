// https://www.urionlinejudge.com.br/judge/en/problems/view/1079

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	int n;
	double weight1, weight2, weight3, total=0;

	cin >> n;
 
	while (n--) {		
		
		cin >> weight1;
		total += weight1 * 2;
		cin >> weight2;
		total += weight2 * 3;
		cin >> weight3;
		total += weight3 * 5;

		cout << fixed << setprecision(1) << total / 10 << endl;
		total = 0;
	}

	return 0;
}