// https://www.urionlinejudge.com.br/judge/en/problems/view/1558

#include <iostream>
#include <vector>
#include <string>
#include <math.h>

using namespace std;

bool is_int(float n) {
	int num = n;
	if (num == n) return true;
	return false;
}

int main() {
	
	int n;
	
	while (cin >> n) {
		unsigned int n1, n2;
		float res;
		string response = "NO";

		for (int i = 1; pow(i, 2) < n; i++) {
			n1 = pow(i, 2);
			n2 = n - n1;
			res = sqrt(n2);
			if (is_int(res)) {
				response = "YES";
				break;
			}
		}
		
		cout << response << endl;
	}
	
	return 0;
}
