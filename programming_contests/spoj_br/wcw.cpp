#include <iostream>
#include <vector>

using namespace std;

int main() {

	int n;
	cin >> n;

	while (n--) {
		int x, temp;
		cin >> x;

		vector<int> v;

		while (x--) {
			cin >> temp;
			v.push_back(temp);
		}

		cout << merge_sort(v) << endl;
	}

	return 0;
}