#include <iostream>
#include <vector>

using namespace std;

int binary_search(vector<int> &v, int element) {
	
	int NOT_FOUND = -1;
	int low = 0, high = v.size()-1, mid;

	while (low <= high) {
		mid = (low + high) / 2;
		if (v[mid] < element) low = mid + 1;
		else if (v[mid] > element) high = mid -1;
		else return mid;
	}

	return NOT_FOUND;
}

int main() {
	
	int ar[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	vector<int> v(ar, ar + sizeof(ar) / sizeof(ar[0]));

	int element = binary_search(v, 7);
	cout << element << endl;

	return 0;
}