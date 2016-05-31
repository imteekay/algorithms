// https://www.urionlinejudge.com.br/judge/en/problems/view/1262

#include <iostream>
#include <string>

using namespace std;

int main() {

	int n;
	string process;
	
	while (cin >> process) {
		cin >> n;
		int counter = 0;
		int number_of_rs = 0;
		
		for (int i = 0; i < process.size(); i++) {
			if (process[i] == 'W') {
				counter++;
				number_of_rs = 0;
			} else {
				if (number_of_rs == 0) counter++;
				number_of_rs++;
			}
			
			if (number_of_rs >= n) number_of_rs = 0;
		}
	
		cout << counter << endl;
	}

	return 0;
}
