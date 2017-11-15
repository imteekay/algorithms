// https://www.urionlinejudge.com.br/judge/en/problems/view/2315

#include <iostream>

using namespace std;

int main() {
	int dates[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int day1, day2, month1, month2, totalDays;

	cin >> day1 >> month1 >> day2 >> month2;	

	if (month2 > month1) {
		totalDays = dates[month1-1] - day1 + day2;
		for (int i = month1; i < month2 - 1; i++) totalDays += dates[i];
	} else {
		totalDays = day2 - day1;
	}

	cout << totalDays << endl;

	return 0;
}