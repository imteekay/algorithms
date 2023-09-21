// https://www.urionlinejudge.com.br/judge/en/problems/view/1172

#include <iostream>
#include <vector>

using namespace std;

int main() {

	int n;

	vector<int> v;

	for (int i = 0; i < 10; i++) {
		cin >> n;

		if (n <= 0) v.push_back(1);
		else v.push_back(n);
	}

	for (int i = 0; i < 10; i++) {
		cout << "X[" << i << "] = " << v[i] << endl;
	}

	return 0;
}
