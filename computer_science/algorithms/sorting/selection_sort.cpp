#include <iostream>
using namespace std;

#define swap(a, b) { int x=a; a=b; b=x; }

void selection_sort(int v[], int n) {
  for (int i = 0; i < n - 1; i++) {
  	int smaller_position = i;
    for (int j = i + 1; j < n; j++) if (v[j] < v[smaller_position]) smaller_position = j;
  	if (smaller_position != i) swap(v[i], v[smaller_position]);
  }
}

int main() {
	int ar[] = { 33,23,10,9,1 };
	
	for (int i = 0; i < 5; i++) cout << ar[i] << " ";
	cout << endl;
	
	selection_sort(ar, 5);
	
	for (int i = 0; i < 5; i++) cout << ar[i] << " ";
	cout << endl;
	
	return 0;
}