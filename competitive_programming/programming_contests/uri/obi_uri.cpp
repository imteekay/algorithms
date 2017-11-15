// https://www.urionlinejudge.com.br/judge/en/problems/view/2062

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	
	int n;
	cin >> n;
	string s, ns;
	vector<string> v;

	while (n--) {
		cin >> s;
		v.push_back(s);
	}

	vector<string> v1;

	for (int i = 0; i < v.size(); i++) {
		if (v[i].size() == 3) {
			if (v[i].substr(0, 2) == "UR") v1.push_back("URI");
			else if (v[i].substr(0, 2) == "OB") v1.push_back("OBI");
			else v1.push_back(v[i]);
		} else {
			v1.push_back(v[i]);
		}
	}

	for (int i = 0; i < v1.size(); i++) {
		if (i == v1.size()-1) cout << v1[i];
		else cout << v1[i] << " ";
	}

	cout << endl;

	return 0;
}