// https://www.urionlinejudge.com.br/judge/en/problems/view/1094

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {

	int c=0, r=0, s=0, n, x;
	string animal;

	cin >> n;

	while (n--) {
		cin >> x >> animal;
		if (animal == "C") {
			c += x;
		} else if (animal == "R") {
			r += x;
		} else if (animal == "S") {
			s += x;
		}		
	}

	int total = c + r + s;
	double total_for_percentage = total;

	cout << "Total: " << total << " cobaias" << endl;
	cout << "Total de coelhos: " << c << endl;
	cout << "Total de ratos: " << r << endl;
	cout << "Total de sapos: " << s << endl;
	cout << fixed << setprecision(2) << "Percentual de coelhos: " << c / total_for_percentage * 100.00 << " %" << endl;
	cout << fixed << setprecision(2) << "Percentual de ratos: " << r / total_for_percentage * 100.00 << " %" << endl;
	cout << fixed << setprecision(2) << "Percentual de sapos: " << s / total_for_percentage * 100.00 << " %" << endl;

	return 0;
}