// https://www.urionlinejudge.com.br/judge/en/problems/view/2312

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

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
	string country_name;
	int n, gold, silver, bronze;
	cin >> n;

	vector<country> countries;

	while (n--) {
		cin >> country_name >> gold >> silver >> bronze;
		country c;
		c.name = country_name;
		c.gold = gold;
		c.silver = silver;
		c.bronze = bronze;
		countries.push_back(c);
	}

	sort(countries.begin(), countries.end(), compareByMedals);

	for (int i = 0; i < countries.size(); i++) {
		cout << countries[i].name << " " << countries[i].gold << " " << countries[i].silver << " " << countries[i].bronze << endl;
	}

	return 0;
}