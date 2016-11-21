// https://www.urionlinejudge.com.br/judge/en/problems/view/2252

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

struct oil {
	float key;
	int value;
};

string intToString(int passwordPart) {
	ostringstream ss;
	ss << passwordPart;
	return ss.str();
}

bool compareOiliness(const oil &oil1, const oil &oil2) {
	if (oil1.key == oil2.key) return oil1.value < oil2.value;
	return oil1.key > oil2.key;
}

int main() {
	int n, casy = 1;
	float f;

	while (cin >> n) {
		vector<oil> oils;

		for (int i = 0; i < 10; i++) {
			cin >> f;
			oil o;
			o.key = f;
			o.value = i;
			oils.push_back(o);
		}

		sort(oils.begin(), oils.end(), compareOiliness);

		int passwordPart;
		string password = "";

		for (int i = 0; i < n; i++) {
			passwordPart = oils[i].value;
			password += intToString(passwordPart);
		}

		cout << "Caso " << casy << ": " << password << endl;
		casy++;
	}

	return 0;
}