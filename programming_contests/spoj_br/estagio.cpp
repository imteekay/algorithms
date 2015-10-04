#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {

	int n, test=1;
	cin >> n;

	while (n != 0) {
		vector< pair<int, int> > v;

		while (n--) {
			int cod, media;
			cin >> cod >> media;
			v.push_back(make_pair(cod, media));
		}

		int max = 0;

		for (int i = 0; i < v.size(); i++)
			if (v[i].second > max) max = v[i].second;

		cout << "Turma " << test << endl;

		for (int i = 0; i < v.size(); i++)
			if (v[i].second == max) cout << v[i].first << " ";

		cout << endl << endl;

		cin >> n;
		test++;
	}

	return 0;
}