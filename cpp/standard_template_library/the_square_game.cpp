#include <iostream>
#include <vector>
#include <string>

using namespace std;

string findSquare(vector< vector<int> > &matrix, int x, int n, int m) {
	int total = 1;

	for (int i = 0; i < n+1-x; i++) {
		for (int j = 0; j < m+1-x; j++) {
			for (int k = i; k < i+x; k++) {
				for (int l = j; l < j+x; l++) {
					total *= matrix[k][l];
				}
			}

			if (total) return "yes";
			total = 1;
		}
	}

	return "no";
}

main() {
	vector<int> v;
	vector< vector<int> > matrix;
	int n, m, q, x;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> x;
			v.push_back(x);
		}

		matrix.push_back(v);
		v.clear();
	}

	cin >> q;
	int greater;

	while (q--) {
		cin >> x;
	
		if (x <= greater) {
			cout << "yes" << endl;
		} else if (findSquare(matrix, x, n, m) == "yes") {
			cout << "yes" << endl;
			greater = x;
		} else {
			cout << "no" << endl;
		}
	}

	return 0;
}
