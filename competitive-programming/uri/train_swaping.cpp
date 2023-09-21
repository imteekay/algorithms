#include <iostream>

using namespace std;

#define swap(a, b) { int x=a; a=b; b=x; }

int numberOfSwaps(int v[], int n) {
	int swapNumber = 0;
  for (int i = 1; i <= n - 1; i++) {
    for (int j = 0; j < n - i; j++) {
      if (v[j] > v[j+1]) {
      	swap(v[j], v[j+1]);
      	swapNumber++;
      }
    }
  }

  return swapNumber;
}

int main() {
	int n, x, c;
	cin >> n;

	while (n--) {
		int num = 0;
		cin >> c;
		int ar[51];

		for (int i = 0; i < c; i++) {
			cin >> x;
			ar[i] = x;
			num++;
		}

		cout << "Optimal train swapping takes " << numberOfSwaps(ar, num) << " swaps." << endl;
	}

	return 0;
}