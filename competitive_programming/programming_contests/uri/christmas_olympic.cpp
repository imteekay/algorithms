// https://www.urionlinejudge.com.br/judge/en/problems/view/2018

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

struct country {
	string name;
	int gold;
	int silver;
	int bronze;
};

bool compareByMedals(const country &c1, const country &c2) {
	if (c1.gold > c2.gold) return true;
	else if (c1.gold == c2.gold) {
		if (c1.silver > c2.silver) return true;
		else if (c1.silver == c2.silver) {
			if (c1.bronze > c2.bronze) return true;
			else if (c1.bronze == c2.bronze) return c1.name < c2.name;
		}
	}

	return false;
}

int main() {
	int index, counter = 0;
	string game, first, second, third;
	map<string, int> m;
	vector<country> countries;

	while (getline(cin, game)) {
		getline(cin, first);
		getline(cin, second);
		getline(cin, third);		

		if (m.find(first) != m.end()) {
			index = m[first];
			countries[index].gold++;
		} else {
			m[first] = counter;
			country c;
			c.name = first;
			c.gold = 1;
			c.silver = 0;
			c.bronze = 0;
			countries.push_back(c);
			counter++;
		}		

		if (m.find(second) != m.end()) {
			index = m[second];
			countries[index].silver++;
		} else {
			m[second] = counter;
			country c;
			c.name = second;
			c.gold = 0;
			c.silver = 1;
			c.bronze = 0;
			countries.push_back(c);
			counter++;
		}		

		if (m.find(third) != m.end()) {
			index = m[third];
			countries[index].bronze++;
		} else {
			m[third] = counter;
			country c;
			c.name = third;
			c.gold = 0;
			c.silver = 0;
			c.bronze = 1;
			countries.push_back(c);
			counter++;
		}
	}

	sort(countries.begin(), countries.end(), compareByMedals);
	cout << "Quadro de Medalhas" << endl;

	for (int i = 0; i < countries.size(); i++) {
		cout << countries[i].name << " " << countries[i].gold << " " << countries[i].silver << " " << countries[i].bronze << endl;
	}

	return 0;
}