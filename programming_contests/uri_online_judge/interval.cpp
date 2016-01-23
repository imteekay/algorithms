// https://www.urionlinejudge.com.br/judge/en/problems/view/1037

#include <iostream>

using namespace std;

int main() {
	
	double n;

	cin >> n;

	// [0,25] (25,50], (50,75], (75,100]

	if (n >= 0.0 && n < 25.0) {
		cout << "Intervalo [0,25]" << endl;
	} else if (n > 25.0 && n <= 50.0) {
		cout << "Intervalo (25,50]" << endl;
	} else if (n > 50.0 && n <= 75.0) {
		cout << "Intervalo (50,75]" << endl;
	} else if (n > 75.0 && n <= 100.0) {
		cout << "Intervalo (75,100]" << endl;
	} else {
		cout << "Fora de intervalo" << endl;
	}

	return 0;
}