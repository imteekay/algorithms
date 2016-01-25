// https://www.urionlinejudge.com.br/judge/en/problems/view/1070

#include <iostream>

using namespace std;

int main() {

	int n, times=0;
	cin >> n;

	while (times < 6) {
		if (n % 2 != 0) { 
			cout << n << endl;
			times++;
		}

		n++;
	}

	return 0;
}