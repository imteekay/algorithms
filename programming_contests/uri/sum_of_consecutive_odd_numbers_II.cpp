// https://www.urionlinejudge.com.br/judge/en/problems/view/1099

#include <iostream>

using namespace std;

int main() {

	int n, x, y, total=0;

	cin >> n;

	while(n--) {
		cin >> x >> y;
		if (x > y) {
			for (int i = y+1; i < x; i++) {
				if (i % 2 != 0) {				
					total += i;
				}
			}
		} else if (y > x) {
			for (int i = x+1; i < y; i++) {
				if (i % 2 != 0) {
					total += i;
				}
			}		
		}

		if (total > 0) {
			cout << total << endl;
		} else {
			cout << 0 << endl;
		}

		total = 0;
	}	

	return 0;
}