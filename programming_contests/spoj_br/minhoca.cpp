#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {

	int n1, n2;
	cin >> n1 >> n2;

	vector< vector<int> > matrix;

	for (int i = 0; i < n1; i++) {
		vector<int> v;

		for (int j = 0; j < n2; j++) {
			int temp;
			cin >> temp;
			v.push_back(temp);
		}

		matrix.push_back(v);
	}

	int max = 0;

	for (int i = 0; i < n1; i++) {
		int total = 0;

		for (int j = 0; j < n2; j++) {
			total += matrix[i][j];
		}

		if (total > max) max = total;
	}

	for (int j = 0; j < n2; j++) {
		int total = 0;

		for (int i = 0; i < n1; i++) {
			total += matrix[i][j];
		}

		if (total > max) max = total;
	}

	cout << max << endl;

	return 0;
}