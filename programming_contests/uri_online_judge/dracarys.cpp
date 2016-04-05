// https://www.urionlinejudge.com.br/judge/en/problems/view/1849

#include <iostream>
#include <math.h>

using namespace std;

unsigned long long int get_result1(int d1, int d2, int v1, int v2) {
	unsigned long long int x, y;

	if (d1 <= v1) x = d1;
	else x = v1;

	y = d2 + v2;

	if (x <= y) return x;
	else return y;
}

unsigned long long int get_result2(int d1, int d2, int v1, int v2) {
	unsigned long long int x, y;

	if (d2 <= v2) x = d2;
	else x = v2;

	y = d1 + v1;

	if (x <= y) return x;
	else return y;
}

unsigned long long int get_result3(int d1, int d2, int v1, int v2) {
	unsigned long long int x, y;

	if (d1 + v2 <= d2 + v1) {
		x = d1 + v2;
		if (d2 <= v1) y = d2;
		else y = v1;
	} else {
		x = d2 + v1;
		if (d1 <= v2) y = d1;
		else y = v2;
	}

	if (x <= y) return x;
	else return y;
}

int main() {
	int d1, d2, v1, v2, x, y;	
	unsigned long long int result1, result2, result3, result;

	cin >> d1 >> d2 >> v1 >> v2;

	result1 = get_result1(d1, d2, v1, v2);
	result2 = get_result2(d1, d2, v1, v2);
	result3 = get_result3(d1, d2, v1, v2);

	if (result1 >= result2 && result1 >= result3) result = pow(result1, 2);
	else if (result2 >= result3) result = pow(result2, 2);
	else result = pow(result3, 2);

	cout << result << endl;

	return 0;
}