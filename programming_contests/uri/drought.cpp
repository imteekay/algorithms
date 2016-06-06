// https://www.urionlinejudge.com.br/judge/en/problems/view/1023

#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

struct city {
	int comsumption;
	int inhabitants;
};

bool compareCities(const city &a, const city &b) {
	return a.comsumption < b.comsumption;
}

vector<city> groupByMediumComsumption(vector<city> &cities) {
	vector<city> v;
	int n = cities[0].inhabitants, coms = cities[0].comsumption;
	for (int i = 1; i < cities.size(); i++) {
		if (coms == cities[i].comsumption) n += cities[i].inhabitants;
		else {
			city ci;
			ci.inhabitants = n;
			ci.comsumption = coms;
			v.push_back(ci);
			n = cities[i].inhabitants;
			coms = cities[i].comsumption;
		}
	}
	
	city ci;
	ci.inhabitants = n;
	ci.comsumption = coms;
	v.push_back(ci);
	return v;
}

int main() {
	int n, c=1, hab, litres;
	vector<city> cities;
	cin >> n;
	
	while (n != 0) {
		float totalLitres = 0, totalInhabitants = 0;
		for (int i = 0; i < n; i++) {
			cin >> hab >> litres;
			totalInhabitants += hab;
			totalLitres += litres;
			city ci;
			ci.comsumption = litres / hab;
			ci.inhabitants = hab;
			cities.push_back(ci);
		}
		
		sort(cities.begin(), cities.end(), compareCities);
		vector<city> nCities = groupByMediumComsumption(cities);
		
		cout << "Cidade# " << c << ":" << endl;
		cout << nCities[0].inhabitants << "-" << nCities[0].comsumption;
		
		for (int i = 1; i < nCities.size(); i++) cout << " " << nCities[i].inhabitants << "-" << nCities[i].comsumption;
		cout << endl;
		
		cout << fixed << setprecision(2) << "Consumo medio: " << (totalLitres / totalInhabitants) - 0.0049999999 << " m3." << endl;
		cin >> n;
		if (n) cout << endl;
		c++;
		cities.clear();
	}
	
	return 0;
}
