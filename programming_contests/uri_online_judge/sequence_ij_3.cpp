// https://www.urionlinejudge.com.br/judge/en/problems/view/1097

#include <iostream>

using namespace std;

int main() {

	int i = 1, j = 7, counter=0;

	while (true) {
		cout << "I=" << i << " J=" << j << endl;

		counter++;
		j--;

		if (counter == 3) {
			i += 2;
			j += 5;
			counter = 0;
		}

		if (i == 9 && j == 13) {
			cout << "I=" << i << " J=" << j << endl;
			break;
		}
	}	

	return 0;
}