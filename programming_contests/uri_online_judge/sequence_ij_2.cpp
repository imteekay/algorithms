// https://www.urionlinejudge.com.br/judge/en/problems/view/1096

#include <iostream>

using namespace std;

int main() {

	int i = 1, j = 7, counter=0;

	while (i != 9 || j != 5) {
		cout << "I=" << i << " J=" << j << endl;

		counter++;
		j--;

		if (counter == 3) {
			i += 2;
			j = 7;
			counter = 0;
		}
	}
	
	cout << "I=" << i << " J=" << j << endl;

	return 0;
}