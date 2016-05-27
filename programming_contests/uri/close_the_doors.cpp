// https://www.urionlinejudge.com.br/judge/en/problems/view/1371

#include <iostream>
#include <math.h>

using namespace std;
int main() {
	long long n = 0, k;
	
	while(cin >> k) {
		long long i = 0;
		if (k == 0) break;
		for (n = 0; i < (int)sqrt(k); i++) {
			n += 2 * i + 1;
			if (i + 1 >= (int)sqrt(k)) cout << n;
			else cout << n << " ";
		}
		
		cout << endl;
	}
}
