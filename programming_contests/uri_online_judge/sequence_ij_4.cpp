// https://www.urionlinejudge.com.br/judge/en/problems/view/1098

#include <iostream>

using namespace std;

int main() {

	int counter=0;
	double i = 0, j = 1;

	while (true) {
		cout << "I=" << i << " J=" << j << endl;

		counter++;
		j++;

		if (counter == 3) {
			i += 0.2;
			j -= 2.8;
			counter = 0;
		}

		cout << "I=" << i << " J=" << j << endl << "-------------" << endl;
		
		if (i == 2 && j == 5) {
			cout << "I=" << i << " J=" << j << endl;
			break;
		}
	}	

	return 0;
}