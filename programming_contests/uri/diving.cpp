// https://www.urionlinejudge.com.br/judge/en/problems/view/2311

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
	int n;
	cin >> n;
	string name;
	float level, rate;

	while (n--) {
		cin >> name;
		vector<float> rates;

		cin >> level;

		for (int i = 1; i <= 7; i++) {
			cin >> rate;
			rates.push_back(rate);
		}

		sort(rates.begin(), rates.end());
		float total = 0;
		for (int i = 1; i < 6; i++) total += rates[i];
		cout << setprecision(2) << fixed << name << " " << total * level << endl;
	}

	return 0;
}