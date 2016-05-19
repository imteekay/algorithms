// https://www.urionlinejudge.com.br/judge/en/problems/view/1542

#include <iostream>

using namespace std;

int main() {
	
	int n1, n2, n3, result;

	while (cin >> n1 && n1 != 0) {
		cin >> n2 >> n3;
		result = n1 * (n2 * n3) / (n3 - n1);		
		if (result <= 1) cout << result << " pagina" << endl;
		else cout << result << " paginas" << endl;
	}

	return 0;
}