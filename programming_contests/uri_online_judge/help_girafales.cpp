// https://www.urionlinejudge.com.br/judge/en/problems/view/1911

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int get_index(vector< pair<string, string> > names, string name) {
	for (int i = 0; i < names.size(); i++) {
		if (names[i].first == name) return i;
	}
}

int main() {
	vector< pair<string, string> > names;
	int n, m, counter = 0;
	string name, signature;

	cin >> n;

	while (n != 0) {
		while (n--) {
			cin >> name >> signature;
			names.push_back(make_pair(name, signature));
		}

		cin >> m;

		for (int i = 0; i < m; i++) {
			cin >> name >> signature;
			bool falsy = false;
			int error_counter = 0;

			int ind = get_index(names, name);

			for (int j = 0; j < signature.size(); j++) {
				//cout << names[i].second[j] << " " << signature[j] << endl;
				if (names[ind].second[j] != signature[j]) error_counter++;
				if (error_counter > 1) {
					falsy = true;
					break;
				}
			}

			if (falsy) counter++;
		}

		cout << counter << endl;
		counter = 0;
		cin >> n;
	}

	return 0;
}