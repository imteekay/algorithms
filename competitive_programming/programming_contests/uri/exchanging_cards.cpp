// https://www.urionlinejudge.com.br/judge/en/problems/view/1104

#include <iostream>
#include <map>

using namespace std;

int main() {
	
	int a, b, temp;
	cin >> a >> b;

	while (a + b != 0) {
		map<int, int> alice;
		map<int, int> betty;

		for (int i = 0; i < a; i++) {
			cin >> temp;
			if (alice.find(temp) != alice.end()) alice[temp]++;
			else alice[temp] = 0;
		}

		for (int i = 0; i < b; i++) {
			cin >> temp;
			if (betty.find(temp) != betty.end()) betty[temp]++;
			else betty[temp] = 0;
		}

		int alice_counter = 0, betty_counter = 0;

		for (map<int, int>::iterator it = alice.begin(); it != alice.end(); it++) {
			if (betty.find(it->first) == betty.end()) alice_counter++;
		}

		for (map<int, int>::iterator it = betty.begin(); it != betty.end(); it++) {
			if (alice.find(it->first) == alice.end()) betty_counter++;
		}

		if (alice_counter < betty_counter) cout << alice_counter << endl;
		else cout << betty_counter << endl;

		cin >> a >> b;
	}

	return 0;
}