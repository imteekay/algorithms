// https://www.urionlinejudge.com.br/judge/en/problems/view/1216

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {

	string s;
	int n, counter=0;
	double total=0;

	while (getline(cin, s)) {
		cin >> n;
		total += n;
		counter++;
		cin.ignore();
	}

	cout << fixed << setprecision(1) << total / counter << endl;

	return 0;
}