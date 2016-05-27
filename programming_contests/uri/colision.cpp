// https://www.urionlinejudge.com.br/judge/en/problems/view/1618

#include <iostream>

using namespace std;

int main() {
	
	int n, ax, ay, bx, by, cx, cy, dx, dy, x, y;
	cin >> n;

	while (n--) {
		cin >> ax >> ay >> bx >> by >> cx >> cy >> dx >> dy >> x >> y;
		if (x >= ax && x <= bx && y >= ay && y <= dy) cout << 1 << endl;
		else cout << 0 << endl;
	}

	return 0;
}