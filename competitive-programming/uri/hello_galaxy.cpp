// https://www.urionlinejudge.com.br/judge/en/problems/view/1515

#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
	
	int n, year, years;
	string planet;

	while (cin >> n && n != 0) {
		map<int, string> m;

		for (int i = 0; i < n; ++i) {
			cin >> planet >> year >> years;
			m[year+years] = planet;
		}

		cout << m.begin()->second << endl;
	}

	return 0;
}