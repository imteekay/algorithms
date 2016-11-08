// https://www.urionlinejudge.com.br/judge/en/problems/view/2137

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main() {
	int n;
	string s;
	vector<string> ss;

	while (cin >> n) {
		while (n--) {
			cin >> s;
			ss.push_back(s);
		}

		sort(ss.begin(), ss.end());

		for (int i = 0; i < ss.size(); i++) {
			cout << ss[i] << endl;
		}

		ss.clear();
	}

	return 0;
}