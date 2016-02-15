#include <iostream>
using namespace std;

int main() {
	
	int k, m, n, x, y;
	
	cin >> k;
	
	while(k != 0) {
	
		cin >> m;
		cin >> n;
		
		while(k--) {
			cin >> x;
			cin >> y;
			
			if ((x < m) && (y < n))
				cout << "SO" << endl;
			else if ((x > m) && (y < n))
				cout << "SE" << endl;
			else if ((x < m) && (y > n))
				cout << "NO" << endl;
			else if ((x > m) && (y > n))
				cout << "NE" << endl;
			else
				cout << "divisa" << endl;
			
		}
	
		cin >> k;
	}
	
	return 0;
}