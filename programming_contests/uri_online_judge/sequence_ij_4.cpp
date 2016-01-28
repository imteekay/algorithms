// https://www.urionlinejudge.com.br/judge/en/problems/view/1098

#include <iostream>

using namespace std;

int main() {

	int counter=0, count=0;
	double i = 0, j = 1;

	while (true) {
		cout << "I=" << i << " J=" << j << endl;;
		cout << boolalpha << (j == 5.0) << endl;
		if (i == 2 && j == 5) break;

		counter++;

		if (counter == 3) {
			i += 0.2;
			counter = 0;
		}
		
		count++;
		
		if (count == 3) {
			j -= 1.8;
			count = 0;
		} else {
			j++;
		}
		
	}	

	return 0;
}