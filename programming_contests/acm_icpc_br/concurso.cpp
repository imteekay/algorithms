#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main() {
	int n, l, c, result;
	string conto;

	while (scanf("%d %d %d", &n, &l, &c) != EOF) {
		cin.ignore();
		getline(cin, conto);

		if (conto.size() == (l * c)) result = 1;
		else result = (conto.size() / (l * c)) + 1;

		cout << result << endl;
	}

	return 0;
}
