// https://www.urionlinejudge.com.br/judge/en/problems/view/1019

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	int time, hours=0, minutes=0, seconds=0;

	cin >> time;

	while (time >= 3600) {
		time -= 3600;
		hours++;
	}

	while (time >= 60) {
		time -= 60;
		minutes++;
	}

	while (time >= 1) {
		time -= 1;
		seconds++;
	}

	cout << hours << ":" << minutes << ":" << seconds << endl;

	return 0;
}