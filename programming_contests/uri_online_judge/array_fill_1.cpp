// https://www.urionlinejudge.com.br/judge/en/problems/view/1173

#include <iostream>
#include <vector>

using namespace std;

int main() {

	int n, count;
	cin >> n;

	vector<int> v;

	while (count < 10) {
		v.push_back(n);
		n *= 2;
		count++;
	}

	for (int i = 0; i < 10; i++) {
		cout << "N[" << i << "] = " << v[i] << endl;
	}

	return 0;
}