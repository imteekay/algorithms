// https://www.urionlinejudge.com.br/judge/en/problems/view/1068

#include <iostream>
#include <string>

using namespace std;

int main() {
	string operation;
	int open = 0, close = 0;
	bool correct = true;

	while (getline(cin, operation)) {
		for (int i = 0; i < operation.size(); i++) {
			if (operation[i] == '(') {
				open++;				
			} else if (operation[i] == ')') {
				close++;
				if (open < close) {
					break;
					correct = false;
				}
			} 
		}
		
		if (correct && open == close) cout << "correct" << endl;
		else cout << "incorrect" << endl;

		open = 0;
		close = 0;
		correct = true;
	}

	return 0;
}