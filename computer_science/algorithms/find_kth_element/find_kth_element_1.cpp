// Finding the kth element algorithm

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int find_kth_element(vector<int> &elements, int k) {
	sort(elements.begin(), elements.end());
	return elements[k-1];
}

int main() {
	vector<int> elements;
	elements.push_back(3);
	elements.push_back(6);
	elements.push_back(5);
	elements.push_back(8);
	elements.push_back(1);
	elements.push_back(2);
	elements.push_back(0);

	cout << find_kth_element(elements, 1) << endl;
	cout << find_kth_element(elements, 5) << endl;
	cout << find_kth_element(elements, 7) << endl;

	return 0;
}