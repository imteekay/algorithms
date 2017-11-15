// https://www.urionlinejudge.com.br/judge/en/problems/view/1144

#include <iostream>

using namespace std;

int main() {

	int n, i=1;
	int count1=1, count2=1, count3=1;
	int x1=1, x2=2;
	int y1=1, y2=1, y3=1, y4=2;

	cin >> n;

	n *= 2;

	while (n--) {
		cout << i << " " << x1 << " " << y1 << endl;

		if (count1 % 2 == 0) {
			i++;
		}

		if (count2 % 2 == 0) {			
			x1 += x2;
			x2 += 2;
		} else {
			x1++;
		}

		if (count3 % 2 == 0) {			
			y2 = 6 * y3;
			y1 += y2;
			y3 += y4;			
			y4++;
		} else {
			y1++;
		}

		count1++;
		count2++;
		count3++;
	}

	return 0;
}