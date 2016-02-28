// https://www.urionlinejudge.com.br/judge/en/problems/view/1429

#include <iostream>
#include <vector>

using namespace std;

long long int factorial(int n) {
	if (n < 1) return 1;
	return n * factorial(n - 1);
}

int main() {
	
	int n;
	cin >> n;
	
	while (n != 0) {
		vector<int> v;
		long long int total = 0;
		
		while (n) {
			v.push_back(n % 10);
			n /= 10;
		}
		
		for (int i = 0; i < v.size(); i++) total += factorial(i+1) * v[i];
		
		cout << total << endl;
		cin >> n;
	}
	
	return 0;
}
