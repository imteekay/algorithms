// https://www.urionlinejudge.com.br/judge/en/problems/view/1040

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	// weights 2, 3, 4 e 1
	double n1, n2, n3, n4, n5;

	cin >> n1 >> n2 >> n3 >> n4;

	double final = (n1 * 2 + n2 * 3 + n3 * 4 + n4) / 10;

	cout << fixed << setprecision(1) << "Media: " << final << endl;

	if (final >= 7.0) {
		cout << "Aluno aprovado." << endl;
	} else if (final >= 5.0) {
		cin >> n5;
		cout << "Aluno em exame." << endl;
		cout << "Nota do exame: " << n5 << endl;

		final = (final + n5) / 2;

		if (final >= 5.0) {
			cout << "Aluno aprovado." << endl;
		} else {
			cout << "Aluno reprovado." << endl;
		}

		cout << fixed << setprecision(1) << "Media final: " << final << endl;
	} else {
		cout << "Aluno reprovado." << endl;
	}

	return 0;
}