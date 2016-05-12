#include <iostream>

using namespace std;

int triangulo_pascal(int n, int m) {

	if ((m == 0 || n == 0) || (m == 1 && n == 1) || (m == n))
		return 1;
		
	return triangulo_pascal(n - 1, m) + triangulo_pascal(n - 1, m - 1);
}

int main() {

	int n, x, y;

	cin >> n;
	
	while (n--) {

		cin >> x;
		cin >> y;
		
		cout << triangulo_pascal(x, y) << endl;
	}	

	return 0;
}