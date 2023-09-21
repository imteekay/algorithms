// https://www.urionlinejudge.com.br/judge/en/problems/view/1534

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	int n, one, two;

	while (cin >> n) {
		vector<string> numbers;
		string num;
		one = 0;
		two = n-1;

		for (int i = 0; i < n; i++) {
			num = "";
			for (int j = 0; j < n; j++) {
				if (one == j && one == two) num += "2";
				else if (one == j) num += "1";
				else if (two == j) num += "2";
				else num += "3";
			}

			one++;
			two--;
			numbers.push_back(num);
		}

		for (int i = 0; i < numbers.size(); i++) {
			cout << numbers[i] << endl;
		}
	}

	return 0;
}