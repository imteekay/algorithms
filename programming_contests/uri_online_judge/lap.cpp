// https://www.urionlinejudge.com.br/judge/en/problems/view/1708

#include <iostream>

using namespace std;

int main() {
	
	int n1, n2;

	while (cin >> n1 >> n2) {
		int t1=n1, t2=n2, counter=1;
		while(true) {
			counter++;
			t1 += n1;
			if (t1 <= t2) break;
			t2 += n2;
		}

		cout << counter << endl;
	}

	return 0;
}