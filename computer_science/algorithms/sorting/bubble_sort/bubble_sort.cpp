#include <iostream>
using namespace std;

#define swap(a, b) { int x=a; a=b; b=x; }

void bubble_sort(int v[], int n) {
  for (int i = 1; i <= n - 1; i++) {
    for (int j = 0; j < n - i; j++) {
      if (v[j] > v[j+1]) swap(v[j], v[j+1]);
    }
  }
}

int main() {
	int ar[] = { 33,23,10,9,1 };

	for (int i = 0; i < 5; i++) cout << ar[i] << " ";
	cout << endl;

	bubble_sort(ar, 5);

	for (int i = 0; i < 5; i++) cout << ar[i] << " ";
	cout << endl;

	return 0;
}
