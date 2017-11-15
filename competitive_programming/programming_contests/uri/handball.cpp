// https://www.urionlinejudge.com.br/judge/en/problems/view/1715

#include <iostream>

using namespace std;

int main() {
	
	int players, matches, p;

	while (cin >> players >> matches) {
		int counter = 0;
		for (int i = 0; i < players; i++) {
			bool scored = true;
			for (int j = 0; j < matches; j++) {
				cin >> p;
				if (p == 0) scored = false;
			}

			if (scored) counter++;
		}

		cout << counter << endl;
	}

	return 0;
}