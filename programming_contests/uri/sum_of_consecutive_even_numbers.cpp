// https://www.urionlinejudge.com.br/judge/en/problems/view/1159

#include <iostream>

using namespace std;

int main() {

	int n, total=0, counter=0;

	cin >> n;

	while (n != 0) {

		while (counter < 5) {
			if (n % 2 == 0) {
				total += n;
				counter++;
			}
			n++;			
		}

		cout << total << endl;
		counter = 0;
		total=0;
		cin >> n;
	}

	return 0;
}