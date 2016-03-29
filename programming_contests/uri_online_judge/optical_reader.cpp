// https://www.urionlinejudge.com.br/judge/en/problems/view/1129

#include <iostream>
#include <string>

using namespace std;

int main() {
	
	int n, counter=0, num, result;
	string results = "ABCDE";
	cin >> n;

	while (n != 0) {
		for (int j = 0; j < n; j++) {
			for (int i = 0; i < 5; i++) {
				cin >> num;
				if (num <= 127) {
					counter++;
					result = i;
				}
			}

			if (counter != 1) cout << "*" << endl;
			else cout << results[result] << endl;

			counter = 0;
		}		

		cin >> n;
	}

	return 0;
}