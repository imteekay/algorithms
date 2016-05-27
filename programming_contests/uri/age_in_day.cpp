// https://www.urionlinejudge.com.br/judge/en/problems/view/1020

#include <iostream>

using namespace std;

int main() {

	int time, year=0, month=0, day=0;

	cin >> time;

	while (time >= 365) {
		time -= 365;
		year++;
	}

	while (time >= 30) {
		time -= 30;
		month++;
	}

	while (time >= 1) {
		time -= 1;
		day++;
	}

	cout << year << " ano(s)" << endl;
	cout << month << " mes(es)" << endl;
	cout << day << " dia(s)" << endl;

	return 0;
}