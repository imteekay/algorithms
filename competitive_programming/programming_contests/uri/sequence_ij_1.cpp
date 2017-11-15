// https://www.urionlinejudge.com.br/judge/en/problems/view/1095

#include <iostream>

using namespace std;

int main() {

	int j = 1;

	for (int i = 60; i >= 0; i -= 5, j += 3) {
		cout << "I=" << j << " J=" << i << endl;
	}

	return 0;
}