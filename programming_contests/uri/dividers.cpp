#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int a, b, c, d, result = -1;
	cin >> a >> b >> c >> d;
	vector<int> divisors;
	
	for (int i = 1; i * i < c; i++) {
		if (c % i == 0) {
			divisors.push_back(i);
			divisors.push_back(c / i);
		}
	}
	
	sort(divisors.begin(), divisors.end());

	for (int i = 0; i < divisors.size(); i++) {
		if (divisors[i] % a == 0 && divisors[i] % b != 0 && d % divisors[i] != 0) {
			result = divisors[i];
			break;
		}
	}

	cout << result << endl;

	return 0;
}