// https://www.urionlinejudge.com.br/judge/en/problems/view/1030

#include <iostream>

using namespace std;

int josephus(int n, int k) {
	if (n == 1) return 0;
	return (josephus(n-1, k) + k) % n;
}

int main() {
	
	int n, n1, n2, counter = 1;
	cin >> n;

	while (n--) {
		cin >> n1 >> n2;
		cout << "Case " << counter << ": " << josephus(n1, n2)+1 << endl;
		counter++;
	}

	return 0;
}