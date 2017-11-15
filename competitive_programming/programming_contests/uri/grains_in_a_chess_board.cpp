// https://www.urionlinejudge.com.br/judge/en/problems/view/1169

#include <iostream>
#include <math.h>

using namespace std;

int main() {
	
	int n, x;
	cin >> n;

	while (n--) {
		cin >> x;

		if (x < 64) {			
			unsigned long long int grains = 1;
			while (x--) grains *= 2;
			unsigned long long int kl = (grains / 12) / 1000 ;
			cout << kl << " kg" << endl;
		} else {
			unsigned long long int grains = pow(2, 63) - 1;
			unsigned long long int kl = (grains / 6) / 1000 ;
			cout << kl << " kg" << endl;
		}
	}

	return 0;
}