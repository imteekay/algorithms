// https://www.urionlinejudge.com.br/judge/en/problems/view/1836

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main() {
	
	int n, l, b, iv, e, result;
	string pokemon;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> pokemon >> l;
		cout << "Caso #" << i << ": " << pokemon << " nivel " << l << endl;

		for (int j = 0; j < 4; j++) {
			cin >> b >> iv >> e;

			if (j == 0) result = ((iv + b + 50 + sqrt(e) / 8) * l / 50) + 10;				
			else result = ((iv + b + sqrt(e) / 8) * l / 50) + 5;

			if (j == 0) cout << "HP: " << result << endl;
			else if (j == 1) cout << "AT: " << result << endl;
			else if (j == 2) cout << "DF: " << result << endl;
			else cout << "SP: " << result << endl;
		}
	}

	return 0;	
}