// https://www.urionlinejudge.com.br/judge/en/problems/view/1235

#include <iostream>
#include <string>

using namespace std;

int main() {

	int n;
	string line;
	
	cin >> n;
	cin.ignore();
	
	while (n--) {
		getline(cin, line);
		int pos = line.size() / 2;
		
		string new_line = "";
		
		for (int i = pos-1; i >= 0; i--) new_line += line[i];
		for (int i = line.size()-1; i >= pos; i--) new_line += line[i];
		
		cout << new_line << endl;
	}

	return 0;
}
