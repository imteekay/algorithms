#include <iostream>

using namespace std;

void reverse_insertion_sort(int n, int array[]) {
	int x, j;
	for (int i = 1; i < n; i++) {
		x = array[i];		
		for (j = i - 1; j >= 0 && array[j] < x; j--) array[j+1] = array[j];
		array[j+1] = x;
	}
}

int main() {

	int array[] = { 17, 3, 2, 10 };

	reverse_insertion_sort(4, array);

	for (int i = 0; i < 4; i++) cout << array[i] << " ";

	return 0;
}