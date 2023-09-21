// https://www.urionlinejudge.com.br/judge/en/problems/view/2152

#include <iostream>
#include <string>

using namespace std;

string parsePhrase(string hour, string minute, int opened) {
	string parsedHour, parsedMinute, numbers = "0123456789";
	if (hour.size() == 1) parsedHour = "0" + hour;
	else parsedHour = hour;
	if (minute.size() == 1) parsedMinute = "0" + minute;
	else parsedMinute = minute;

	if (opened) return parsedHour + ":" + parsedMinute + " - A porta abriu!";
	else return parsedHour + ":" + parsedMinute + " - A porta fechou!";
}

int main() {
	int n, opened;
	string hour, minute;

	cin >> n;

	while (n--)	{
		cin >> hour >> minute >> opened;
		cout << parsePhrase(hour, minute, opened) << endl;
	}

	return 0;
}