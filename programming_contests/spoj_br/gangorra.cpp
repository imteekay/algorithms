// JGANGO14

#include <iostream>
using namespace std;

int main() {
	
	int p1, p2, c1, c2;
	
	cin >> p1;
	cin >> c1;
	cin >> p2;
	cin >> c2;
	
	if(p1 * c1 == p2 * c2) {
		cout << 0;
	} else if(p1 * c1 > p2 * c2) {
		cout << -1;
	} else {
		cout << 1;
	}
	
	return 0;
}