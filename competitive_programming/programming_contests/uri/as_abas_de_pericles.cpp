// https://www.urionlinejudge.com.br/judge/en/problems/view/2061

#include <iostream>
#include <string>

using namespace std;

int main() {
	
	int n1, n2;
	string s;
	cin >> n1 >> n2;

	for (int i = 0; i < n2; i++) {
		cin >> s;
		if (s == "fechou") n1++;
		else n1--;
	}

	cout << n1 << endl;

	return 0;
}