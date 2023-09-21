// https://www.urionlinejudge.com.br/judge/en/problems/view/1151

#include <iostream>

using namespace std;

int main() {
	
	int n, n1=0, n2=1, x;
	cin >> n;

	if (n == 1) {
		cout << n1 << endl;
	} else if (n == 2) {
		cout << n1 << " " << n2 << endl;
	} else if (n > 2){
		cout << n1 << " " << n2 << " ";
		n -= 2;
		while (n > 0) {
			x = n2;
			n2 += n1;
			n1 = x;
			cout << n2;

			if (n == 1) {
				cout << endl;
				break;
			}

			cout << " ";
			n--;
		}
	}

	return 0;
}