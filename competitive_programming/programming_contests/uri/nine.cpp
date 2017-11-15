// https://www.urionlinejudge.com.br/judge/en/problems/view/2217

#include <iostream>

using namespace std;

int main() {
	int n;
	long long int num;
	cin >> n;

	while (n--) {
		cin >> num;
		if (num % 2 == 0) cout << 1 << endl;
		else cout << 9 << endl;
	}

	return 0;
}