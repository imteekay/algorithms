// https://www.urionlinejudge.com.br/judge/en/problems/view/1114

#include <iostream>

using namespace std;

int main() {

	int n;

	cin >> n;

	while (n != 2002) {
		cin >> n;
		cout << "Senha Invalida" << endl;
	}

	cout << "Acesso Permitido" << endl;

	return 0;
}