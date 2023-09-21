// https://www.urionlinejudge.com.br/judge/en/problems/view/2006

#include <iostream>

using namespace std;

int main() {

	int n, counter=5, total=0, x;
	cin >> n;

	while (counter--) {
		cin >> x;
		if (n == x) total++;
	}

	cout << total << endl;

	return 0;
}