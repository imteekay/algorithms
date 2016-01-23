// https://www.urionlinejudge.com.br/judge/en/problems/view/1035

#include <iostream>

using namespace std;

int main() {
	
	int n1, n2, n3, n4;

	cin >> n1 >> n2 >> n3 >> n4;

	// Then if B is greater than C and D is greater than A and 
	// if the sum of C and D is greater than the sum of A and B and 
	// if C and D were positives values and if A is even

	if (n2 > n3 && n4 > n1 && n3 + n4 > n1 + n2 && n3 > 0 && n4 > 0 && n1 % 2 == 0)
		cout << "Valores aceitos" << endl;
	else
		cout << "Valores nao aceitos" << endl;

	return 0;
}