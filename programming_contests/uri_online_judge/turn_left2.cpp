// https://www.urionlinejudge.com.br/judge/en/problems/view/1437

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	
	int n;
	cin >> n;
	string directions;

	char ar[] = { 'N', 'L', 'S', 'O' };

	while (n) {
		int num = 0;
		cin >> directions;

		for (int i = 0; i < directions.size(); i++) {
			if (directions[i] == 'D') {
				if (num >= 3) num = 0;
				else num++;
			} else  {
				if (num <= 0) num = 3;
				else num--;
			}
		}

		cout << ar[num] << endl;

		cin >> n;
	}

	return 0;
}