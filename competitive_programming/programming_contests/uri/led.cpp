// https://www.urionlinejudge.com.br/judge/en/problems/view/1168

#include <iostream>
#include <string>

using namespace std;

int main() {
	
	int n;
	string x;
	cin >> n;

	int ar[10] = { 6, 2, 5, 4, 5, 6, 3, 7, 6 };

	while (n--) {

		cin >> x;
		int total = 0;

		for (int i = 0; i < x.size(); i++) {
			int num = (int)x[i];
			total += ar[num];
		}

		cout << total << " leds" << endl;

	}

	return 0;
}