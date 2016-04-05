// https://www.urionlinejudge.com.br/judge/en/problems/view/1239

#include <iostream>
#include <string>

using namespace std;

string edit_italic(char charac, bool is_start) {
	if (is_start) return "<i>";
	else return "</i>";
}

string edit_bold(char charac, bool is_start) {
	if (is_start) return "<b>";
	else return "</b>";
}

int main() {

	int n;
	string line;
	
	while (getline(cin, line)) {
		string new_line = "";
		bool italic_start = true;
		bool bold_start = true;
		for (int i = 0; i < line.size(); i++) {
			if (line[i] == '*') {
				new_line += edit_bold(line[i], italic_start);
				italic_start = !italic_start;
			} else if (line[i] == '_') {
				new_line += edit_italic(line[i], bold_start);
				bold_start = !bold_start;
			} else {
				new_line += line[i];
			}
		}
		
		cout << new_line << endl;
	}

	return 0;
}
