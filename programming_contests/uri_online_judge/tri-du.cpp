// https://www.urionlinejudge.com.br/judge/en/problems/view/1933

#include <iostream>

using namespace std;

int main() {

	int n1, n2, n3;

	cin >> n1 >> n2;

	if (n1 >= n2) cout << n1 << endl;
	else if (n2 > n1) cout << n2 << endl;	

	return 0;
}