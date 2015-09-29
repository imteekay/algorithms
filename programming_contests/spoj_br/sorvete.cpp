#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	
	int test=1, s, p;
	vector< pair<int, int> > vetorzin;
	vector< pair<int, int> > v;

	cin >> p >> s;

	while (s + p != 0) {

		for (int i = 0; i < s; i++) {
			int n1, n2;
			cin >> n1 >> n2;
			vetorzin.push_back(make_pair(n1, n2));			
		}

		sort(vetorzin.begin(), vetorzin.end());

		v.push_back(make_pair(vetorzin[0].first, vetorzin[0].second));

		for (int i = 1; i < s; i++) {
			if (v.back().second < vetorzin[i].first) v.push_back(make_pair(vetorzin[i].first, vetorzin[i].second));
			else if (v.back().second < vetorzin[i].second) v.back().second = vetorzin[i].second;
		}

		cout << "Teste " << test << endl;

		for (int i = 0; i < v.size(); i++) {
			cout << v[i].first << " " << v[i].second << endl;
		}

		cout << endl;
		v.clear();
		vetorzin.clear();
		test++;
		cin >> p >> s;
	}

	return 0;
}