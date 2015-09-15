#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

int custom_factorial(int n) {

	int temp, result, flag;
			
	vector<int> v(1000000);
	v[0] = 1;

	for (int i = 1; i <= n; i++) {
		if (n < 4) v[i] = v[i - 1] * i;
		else {
			result = v[i - 1] * i;
			flag = 1;
			while (flag) {
				temp = result % 10;
				if (temp != 0) {
					v[i] = temp;
					flag = 0;
				} else {
					result /= 10;
				}				
			}
		}
	}

	return v[n];
}

int main() {

	int n, instance=1;
	
	while (scanf("%i", &n) != 0) {

		int result = custom_factorial(n);		

		cout << "Instancia " << instance << endl;
		cout << result << endl;
		instance++;

	}

	return 0;
}