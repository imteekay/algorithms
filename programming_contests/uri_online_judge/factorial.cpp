// https://www.urionlinejudge.com.br/judge/en/problems/view/1936

#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
	map<int, int> factorial;	
	int n, index = 1;
	cin >> n;
	factorial[0] = 1;
	factorial[1] = 1;
	
	for (int i = 2; factorial[i-1] < n; i++) {
		if (factorial[i-1] * i > n) break;
		factorial[i] = factorial[i-1] * i;
		index = i;
	}
	
	int counter = 0;
	
	for (int i = index; i > 0 && n > 0; i--) {
		while (n >= factorial[i]) {
			n -= factorial[i];
			counter++;
		}
	}
	
	cout << counter << endl;
	
	return 0;
}
