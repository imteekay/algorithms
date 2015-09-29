#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	
	int n, temp;
	vector<int> v;	

	cin >> n;

	while (n--) {
		cin >> temp;
		v.push_back(temp);
	}

	sort(v.begin(), v.end());

	vector< pair<int, int> > vetorzin;
	vetorzin.push_back(make_pair(1, v[0]));

	for (int i = 1; i < v.size(); i++) {
		int found = 0;

		for (int j = 0; j < vetorzin.size(); j++) {
			if (vetorzin[j].second == v[i]) {
				vetorzin[j].first++;
				found = 1;
				break;
			}
		}

		if (!found) vetorzin.push_back(make_pair(1, v[i]));
	}

	sort(vetorzin.begin(), vetorzin.end());

	cout << vetorzin.back().second << endl;

	return 0;
}