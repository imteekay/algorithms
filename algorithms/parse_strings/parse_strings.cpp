#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> parse_string(string line) {
	vector<string> v;
	string word = "";
	
	for (int i = 0; i < line.size(); i++) {
		if (line[i] == ' ') {
			v.push_back(word);
			word.clear();
		} else {
			word += line[i];
		}
	}
	
	return v;
}

int main() {
	
	string s = "Top Coder comp Wedn at midnight";
	vector<string> strings = parse_string(s);
		
	for (int i = 0; i < strings.size(); i++) cout << strings[i] << endl;
	
	return 0;
}
