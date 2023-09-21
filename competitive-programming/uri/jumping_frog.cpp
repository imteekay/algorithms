// https://www.urionlinejudge.com.br/judge/en/problems/view/1961

#include <iostream>

using namespace std;

int main() {

	int n, x, jump, before, after, win=1;
	cin >> jump >> n;

	cin >> x;
	before = x;

	while (n--) {

		cin >> x;
		after = x;

		if (after > before) {
			if (after - before > jump) {			
				win = 0;
				break;
			}
		} else {
			if (before - after > jump) {
				win = 0;
				break;
			}
		}

		before = after;
	}

	if (win) cout << "YOU WIN" << endl;
	else cout << "GAME OVER" << endl;

	return 0;
}