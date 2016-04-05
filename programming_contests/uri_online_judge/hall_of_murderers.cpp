// https://www.urionlinejudge.com.br/judge/en/problems/view/1861

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool find(string murder, vector<string> &people_killed) {
	for (int j = 0; j < people_killed.size(); j++) {
		if (people_killed[j] == murder) return true;
	}

	return false;
}

int main() {
	vector<string> people_killed;
	vector< pair<string, int> > murders;
	string murder, killed;

	while (cin >> murder >> killed) {
		bool found = false;
		for (int i = 0; i < murders.size(); i++) {
			if (murders[i].first == murder) {
				found = true;
				murders[i].second++;
				break;
			}
		}
		
		if (!found) murders.push_back(make_pair(murder, 0));
		people_killed.push_back(killed);
	}

	for (int i = 0; i < people_killed.size(); i++) cout << people_killed[i] << " ";
	cout << endl;
	for (int i = 0; i < murders.size(); i++) cout << murders[i].first << " ";
	cout << endl;

	int num_of_killed = 0;

	for (int i = 0; i < murders.size(); i++) {
		if (find(murders[i].first, people_killed)) {
			murders.erase(murders.begin() + i + 1 - num_of_killed);
			num_of_killed++;
		}
	}

	sort(murders.begin(), murders.end());

	cout << "HALL OF MURDERERS" << endl;

	for (int j = 0; j < murders.size(); j++) cout << murders[j].first << " " << murders[j].second << endl;

	return 0;
}