#include <iostream>

using namespace std;

int main() {
	int n1, n2, n3;
	cin >> n1 >> n2 >> n3;
	int total = n1 + n2 + n3;
	if (total >= 24) total -= 24;
	else if (total < 0) total += 24;
	cout << total << endl;

	return 0;
}