#include <iostream>
#include <vector>
using namespace std;

int main() {
	
	int n1, n2, x, instance = 1;
	cin >> n1 >> n2;
	
	while (n1 + n2 != 0) {
		if (n1 == 0 || n2 == 0) {
			cout << "Instancia " << instance << endl;
			cout << "sim" << endl;
		} else {
			vector<int> v;
			vector< vector<int> > matrix;
			
			for (int i = 0; i < n1; ++i) {
				for (int j = 0; j < n2; ++j) {
					cin >> x;
					v.push_back(x);
				}
				matrix.push_back(v);
				v.clear();
			}
			
			int n, i = 0, j = 0, counter = 1;
			
			while (true) {
				n = matrix[i][j];
				
				if (n == 1) {
					if (i == 0) {
						break;
					} else {
						matrix[i][j] = 0;
						i--;
					}
				} else if (n == 2) {
					if (i == 0 || j == n2-1) {
						break;
					} else {
						matrix[i][j] = 0;
						i--;
						j++;
					}
				} else if (n == 3) {
					if (j == n2-1) {
						break;
					} else {
						matrix[i][j] = 0;
						j++;
					}
				} else if (n == 4) {
					if (j == n2-1 || i == n1-1) {
						break;
					} else {
						matrix[i][j] = 0;
						j++;
						i++;
					}
				} else if (n == 5) {
					if (i == n1-1) {
						break;
					} else {
						matrix[i][j] = 0;
						i++;
					}
				} else if (n == 6) {
					if (j == 0 || i == n1-1) {
						break;
					} else {
						matrix[i][j] = 0;
						j--;
						i++;
					}
				} else if (n == 7) {
					if (j == 0) {
						break;
					} else {
						matrix[i][j] = 0;
						j--;
					}
				} else if (n == 8) {
					if (j == 0 || i == 0) {
						break;
					} else {
						matrix[i][j] = 0;
						j--;
						i--;
					}
				}
				
				counter++;
				if (matrix[i][j] == 0) break;
			}
			
			cout << "Instancia " << instance << endl;
			
			if (counter == n1 * n2) cout << "sim" << endl;
			else cout << "nao" << endl;
		}

		cin >> n1 >> n2;
		if (n1 + n2 != 0) cout << endl;
		instance++;
	}
	
	return 0;
}