// https://www.urionlinejudge.com.br/judge/en/problems/view/1574

#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

string parse_string(string line) {
	vector<string> v;
	string word = "";
	
	for (int i = 0; i < line.size(); i++) {
		if (line[i] == ' ') {
			v.push_back(word);
			word.clear();
		} else if (i == line.size() - 1) {
			word += line[i];
			v.push_back(word);
			word.clear();
		} else {
			word += line[i];
		}
	}
	
	return v.back();
}

int to_digit(char digit) {
  return digit - '0';
}

int string_to_number(string n) {
  if (n == "") {
    return -1;
  } else {
    int num = 0;

    for (int i = 0; i < n.size(); i++) {
      num = num * 10 + to_digit(n[i]);
    }

    return num;
  }
}

int main() {
	int n, tests;
	cin >> n;
	string command;
	
	while (n--) {
		cin >> tests;
		cin.ignore();
		map<int, int> m;
		getline(cin, command);
		if (command == "LEFT") m[1] = -1;
		else m[1] = 1;
		
		for (int i = 2; i <= tests; i++) {
			getline(cin, command);
			command = parse_string(command);
			if (command == "LEFT") m[i] = -1;
			else if (command == "RIGHT") m[i] = 1;
			else {
				int key = string_to_number(command);
				m[i] = m[key];
			}
		}
		
		map<int, int>::iterator it;
		int position = 0;
		
		for (it = m.begin(); it != m.end(); it++) {
			position += it->second;
		}
		
		cout << position << endl;
	}
	
	return 0;
}
