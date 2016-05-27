// https://www.hackerrank.com/challenges/arrays-introduction?h_r=next-challenge&h_v=zen

#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> v;
	int n, x;
	cin >> n;

	while (n--) {
		cin >> x;
		v.push_back(x);
	}

	for (int i = v.size()-1; i >= 0; i--) cout << v[i] << " ";
	cout << endl;

	return 0;
}