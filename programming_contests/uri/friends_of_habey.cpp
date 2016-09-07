// https://www.urionlinejudge.com.br/judge/en/problems/view/2136

#include <iostream>
#include <set>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool compareByName(string name1, string name2) {
	return name1.size() >= name2.size();
}

int main() {
	string name, want;
	set<string> peopleThatWant;
	set<string> peopleThatDoNotWant;
	vector<string> v;

	while (cin >> name && name != "FIM") {
		cin >> want;
		if (want == "YES") { 
			peopleThatWant.insert(name);
			v.push_back(name);
		} else peopleThatDoNotWant.insert(name);
	}	

	for (set<string>::iterator it = peopleThatWant.begin(); it != peopleThatWant.end(); it++) {
		cout << *it << endl;
	}

	for (set<string>::iterator it = peopleThatDoNotWant.begin(); it != peopleThatDoNotWant.end(); it++) {
		cout << *it << endl;
	}

	cout << endl;

	sort(v.begin(), v.end(), compareByName);

	cout << "Amigo do Habay:" << endl << v[0] << endl;

	return 0;
}