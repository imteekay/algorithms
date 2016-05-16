// https://www.urionlinejudge.com.br/judge/en/problems/view/1217

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int num_of_fruits(string fruits) {
	int num = 1;
	for (int i = 0; i < fruits.size(); i++) if (fruits[i] == ' ') num++;
	return num;
}

int main() {
	string fruits;
	int n, day_kg = 0, day = 1;
	double total_kg = 0.0, total_money, money;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> money;
		total_money += money;

		cin.ignore();
		getline(cin, fruits);

		day_kg = num_of_fruits(fruits);
		total_kg += day_kg;
		cout << "day " << day << ": " << day_kg << " kg" << endl;
		day++;
	}

	double kg_per_day = total_kg / n, money_per_day = total_money / day;
	cout << fixed << setprecision(2) << kg_per_day << " kg by day" << endl;
	cout << fixed << setprecision(2) << "R$ " << money_per_day << " by day" << endl;

	return 0;
}