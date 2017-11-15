// https://www.urionlinejudge.com.br/judge/en/problems/view/1260

#include <iostream>
#include <map>
#include <string>
#include <iomanip>

using namespace std;

int main() {
	int n;
	float numberOfTrees;
	string name;

	cin >> n;
	cin.ignore();
	getline(cin, name);

	while (n--) {
		map<string, float> trees;
		numberOfTrees = 0;
		
		while (getline(cin, name)) {
			if (name != "") {
				if (trees.find(name) != trees.end()) trees[name]++;
				else trees[name] = 1;
				numberOfTrees++;
			} else {
				break;
			}			
		}

		map<string, float>::iterator it;		

		for (it = trees.begin(); it != trees.end(); ++it) {
			cout << fixed << setprecision(4) << it->first << " " << (it->second / numberOfTrees) * 100.00 << endl;
		}

		if (n != 0) cout << endl;
	}

	return 0;
}