// https://www.urionlinejudge.com.br/judge/en/problems/view/1175

#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector<int> v1;
	vector<int> v2;
	int n, x;

	for (int i = 0; i < 20; i++) {
		cin >> n;
		v1.push_back(n);
	}

	for (int i = 19; i >= 0; i--) {		
		x = v1[i];
		v2.push_back(x);
	}

	for (int i = 0; i < 20; i++) cout << "N[" << i << "] = " << v2[i] << endl;

	return 0;
}