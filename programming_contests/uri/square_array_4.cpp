#include <iostream>
#include <string>
using namespace std;

void generateFirstStep(int n, int x) {
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j) cout << "2";
			else if (n-i-1 == j) cout << "3";
			else cout << "0";
		}
		cout << endl;
	}
}

void generateSecondStep(int n, int x) {
	int medi = (n-x-x) / 2;
	int medj = n / 2;
	for (int i = 0; i < n-x-x; i++) {
		for (int j = 0; j < n; j++) {
			if (medi == i && medj == j) cout << "4";
			else if (j >= x && j < n-x) cout << "1";
			else cout << "0";
		}
		cout << endl;
	}
}

void generateThirdStep(int n, int x) {
	for (int i = n-x; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j) cout << "2";
			else if (n-i-1 == j) cout << "3";
			else cout << "0";
		}
		cout << endl;
	}
}

int main() {
	int n, x;
	
	while (cin >> n) {
		x = n / 3;
		generateFirstStep(n, x);
		generateSecondStep(n, x);
		generateThirdStep(n, x);
		cout << endl;
	}
	
	return 0;
}
