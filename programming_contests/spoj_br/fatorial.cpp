#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

int factorial(int n) {

	int result = 1;

	for (int i = 2; i <= n; i++)
		result *= i;

	return result;
}

int main() {

	int n, temp, instance=1;
	vector<int> v;	
	
	while (scanf("%i", &n) != 0) {

		cout << "Instancia " << instance << endl;
		int result = factorial(n);

		while (result != 0) {
			temp = result % 10;
			v.push_back(temp);
			result /= 10;
		}

		for (int i = 0; i < v.size(); i++) {
			if (v[i] != 0) {
				cout << v[i] << endl;
				break;
			}				
		}

		v.clear();
		instance++;

	}

	return 0;
}