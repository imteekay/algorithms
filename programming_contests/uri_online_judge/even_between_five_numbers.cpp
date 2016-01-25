// https://www.urionlinejudge.com.br/judge/en/problems/view/1065

#include <iostream>

using namespace std;

int main() {

	int positives=0, negatives=0, even=0, odd=0;

	for (int i = 0; i < 5; i++) {
		int n;
		cin >> n;

		if (n > 0) {
			positives++;
		} else if (n < 0) {
			negatives++;
		}

		if (n < 0) n = n * (-1);
		if (n % 2 == 0) {
			even++;
		} else {
			odd++;
		}
	}

	cout << even << " valor(es) par(es)" << endl;
	cout << odd << " valor(es) impar(es)" << endl;
	cout << positives << " valor(es) positivo(s)" << endl;
	cout << negatives << " valor(es) negativo(s)" << endl;

	return 0;
}