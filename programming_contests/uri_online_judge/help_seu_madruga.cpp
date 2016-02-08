// https://www.urionlinejudge.com.br/judge/en/problems/view/1912

#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>

using namespace std;

int main() {

	int n, temp, a, total=0, counter=0, greater=0, result;	

	cin >> n >> a;

	while (n + a != 0) {
		vector<int> v;

		for (int i = 0; i < n; i++) {
			cin >> temp;
			total += temp;
			v.push_back(temp);

			if (temp > greater) greater = temp;
		}

		result = greater - 1;

		if (total == a) {
			cout << ":D" << endl;
		} else {
			sort(v.begin(), v.end(), std::greater<int>());

			while (true) {
				counter = 0;

				for (int i = 0; i < n; i++) {
					if (v[i] - result > 0) counter += v[i] - result;
					else break;
				}

				if (counter >= a) break;
				else result--;
			}

			if (counter == a) {
				double bla = result;
				cout << fixed << setprecision(4) << bla << endl;
			} else {
				cout << "-.-" << endl;
			}
		}

		cin >> n >> a;
		total = 0;
		greater = 0;
	}

	return 0;
}