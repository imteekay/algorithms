// https://www.urionlinejudge.com.br/judge/en/problems/view/1855

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

	int n1, n2;
	cin >> n2 >> n1;

	vector<string> v;
	string x;

	for (int i = 0; i < n1; i++) {		
		cin >> x;
		v.push_back(x);
	}

	for (int i = 0; i < n1; i++) {
		for (int j = 0; j < n2; j++) {
			cout << v[i][j] << " ";
		}

		cout << endl;
	}

	return 0;
}