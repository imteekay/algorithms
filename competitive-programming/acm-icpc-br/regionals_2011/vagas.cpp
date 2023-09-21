#include <iostream>

using namespace std;

int main() {

	int c, total;
	
	cin >> c;
	
	while (c != -1) {
	
		total = (c - 6) / 5;
		cout << total << endl;
		
		cin >> c;
	}


	return 0;
}