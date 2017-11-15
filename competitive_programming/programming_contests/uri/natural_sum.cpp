// https://www.urionlinejudge.com.br/judge/en/problems/view/1805

#include <iostream>

using namespace std;

int main() {

	unsigned long long int n1, n2, total;

	cin >> n1 >> n2;

	total = (n1 + n2) * (n2 - n1 + 1) / 2;

	cout << total << endl;

	return 0;
}