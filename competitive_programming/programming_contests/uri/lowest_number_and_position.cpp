// https://www.urionlinejudge.com.br/judge/en/problems/view/1180

#include <iostream>

using namespace std;

int main() {

	int n, position, lowest=1001, x;
	cin >> n;

	for (int i = 0; i < n; i++) {

		cin >> x;

		if (x < lowest) {
			lowest = x;
			position = i;
		}

	}

	cout << "Menor valor: " << lowest << endl;
	cout << "Posicao: " << position << endl;

	return 0;
}