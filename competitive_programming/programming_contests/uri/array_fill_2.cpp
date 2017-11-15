// https://www.urionlinejudge.com.br/judge/en/problems/view/1177

#include <iostream>
#include <vector>

using namespace std;

int main() {

	int n, counter=0;
	cin >> n;

	vector<int> v;

	for (int i = 0; i < 1000; i++) {
		v.push_back(counter);
		if (counter == n-1) counter = 0;
		else counter++;
	}

	for (int i = 0; i < 1000; i++) {
		cout << "N[" << i << "] = " << v[i] << endl;
	}

	return 0;
}