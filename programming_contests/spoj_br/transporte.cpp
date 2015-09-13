// TRANSP11

#include <iostream>
using namespace std;

int main() {

	int a, b, c, x, y, z;

	cin >> a >> b >> c >> x >> y >> z;

	if ((a > x) || (b > y) || (c > z))
		cout << 0;
	else {
		cout << ((x/a) * (y/b) * (z/c));
	}

	return 0;
}
