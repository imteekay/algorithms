#include <iostream>
#include <vector>

using namespace std;

int main() {
	
	int test=1, s, p;
	vector< pair<int, int> > v;

	cin >> p >> s;

	while (s + p != 0) {

		int n1, n2;
		cin >> n1 >> n2;
		v.push_back(make_pair(n1, n2));
		s--;

		for (int i = 0; i < s; i++) {
			cin >> n1 >> n2;

			if (v.back().second < n1) v.push_back(make_pair(n1, n2));
			else if (v.back().second < n2) v.back().second = n2;			
		}

		cout << "Teste " << test << endl;

		for (int i = 0; i < v.size(); i++) {
			cout << v[i].first << " " << v[i].second << endl;
		}

		cout << endl;
		v.clear();
		test++;
		cin >> p >> s;
	}

	return 0;
}