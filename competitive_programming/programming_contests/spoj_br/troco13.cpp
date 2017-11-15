#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {

	int n1, n2;
	cin >> n1 >> n2;

	int total = 0;

	while (n2--) {
		int n;
		cin >> n;

		if (total + n <= n1) total += n;
	}

	if (total == n1) cout << "S" << endl;
	else cout << "N" << endl;

	return 0;
}