// https://www.urionlinejudge.com.br/judge/en/problems/view/2170

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int project = 1;
	double n1, n2, result;

	while (cin >> n1 >> n2) {
		result = ((n2 - n1) / n1) * 100.00;
		cout << fixed << setprecision(2) << "Projeto " << project << ":" << endl << "Percentual dos juros da aplicacao: " << result << " %" << endl << endl;
		project++;
	}

	return 0;
}