// https://www.urionlinejudge.com.br/judge/en/problems/view/2147

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
	int n;
	float seconds;
	string s;
	cin >> n;

	while (n--)	{
		cin >> s;
		seconds = s.size() / 100.00;
		cout << fixed << setprecision(2) << seconds << endl;
	}

	return 0;
}