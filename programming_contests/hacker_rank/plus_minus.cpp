#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	int n, temp, num, zeros=0, positives=0, negatives=0;

	cin >> n;
	temp = n;

	while (temp--) {
		cin >> num;

		if (num > 0) positives++;
		else if (num < 0) negatives++;
		else zeros++;
	}

	double divisor = n;

	cout << positives / divisor << endl;
	cout << negatives / divisor << endl;
	cout << zeros / divisor << endl;

  return 0;
}