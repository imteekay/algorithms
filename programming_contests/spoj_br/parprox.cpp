#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {

	int n;
	vector< pair<int, int> > vec;
	vector<double> v;

	cin >> n;

	if (n <= 1) {
		cout << 0 << endl;
		return 0;
	}

	while (n--) {
		int n1, n2;
		cin >> n1 >> n2;
		vec.push_back(make_pair(n1, n2));
	}

	for (int i = 0; i < vec.size()-1; i++) {
		for (int j = i + 1; j < vec.size(); j++) {
			int x = vec[i].first - vec[j].first;
			int y = vec[i].second - vec[j].second;

			if (x < 0) x *= (-1);
			if (y < 0) y *= (-1);

			double result = hypot(x, y);
			v.push_back(result);
		}
	}

	sort(v.begin(), v.end());

	cout.precision(3);
	cout << fixed << v[0] << endl;

	return 0;
}