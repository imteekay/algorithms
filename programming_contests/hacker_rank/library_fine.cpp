#include <iostream>

using namespace std;

int main() {
	
	int day1, day2, month1, month2, year1, year2;

	cin >> day1 >> month1 >> year1;
	cin >> day2 >> month2 >> year2;

	if (year1 == year2) {
		if (month1 == month2) {
			if (day1 <= day2)
				cout << 0 << endl;
			else
				cout << 15 * (day1 - day2) << endl;
		} else if (month1 > month2) {
			cout << 500 * (month1 - month2) << endl;
		}	else {
			cout << 0 << endl;
		}
	} else if (year1 > year2) {
		cout << 10000 * (year1 - year2) << endl;
	} else {
		cout << 0 << endl;
	}

	return 0;
}