#include <iostream>
#include <vector>

using namespace std;

unsigned long long factorial_dp(int n) {
	vector<unsigned long long> v(1000000);
	v[0] = 1;
	
	for (int i = 1; i <= n; i++)
		v[i] = v[i - 1] * i;			

	return v[n];
}	

int main() {	

	cout << factorial_dp(0) << endl;
	cout << factorial_dp(1) << endl;
	cout << factorial_dp(5) << endl;
	cout << factorial_dp(50) << endl;

	return 0;
}