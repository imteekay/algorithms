// https://www.urionlinejudge.com.br/judge/en/problems/view/1176

#include <iostream>

using namespace std;

long long int fib(int n) {

	long long int n1=0, n2=1, aux;

	if (n == 0) {
		return 0;
	} else if (n == 1) {
		return 1;
	} else {
		for (int i = 1; i < n; i++) {
			aux = n2;
			n2 += n1;
			n1 = aux;
		}

		return n2;
	}

}

int main() {

	long long int n;
	int x;

	cin >> n;

	while (n--) {

		cin >> x;

		cout << "Fib(" << x << ") = " << fib(x) << endl;

	}

	return 0;
}