#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	vector<int> v;

	int n, temp;

	cin >> n;

	while (n--) {
		cin >> temp;
		v.push_back(temp);
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";

  return 0;
}
