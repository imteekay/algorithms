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
		} else if (i == line.size() - 1) {
			word += line[i];
			v.push_back(word);
			word.clear();
		} else {
			word += line[i];
		}
	}
	
	return v;
}

vector<string> sort_by_size(vector<string> &v) {
	vector<string> new_v;
	int size = v.size();
	
	while (size--) {
		int max_size = v[0].size(), index = 0;
		for (int i = 1; i < v.size(); i++) {
			if (v[i].size() > max_size) {
				index = i;
				max_size = v[i].size();
			}
		}

		new_v.push_back(v[index]);
		v.erase(v.begin() + index);
	}
	
	return new_v;
}

int main() {
	
	string s;
	int n;
	cin >> n;
	cin.ignore();
	
	while (n--) {
		getline(cin, s);
		vector<string> strings = parse_string(s);
		vector<string> sorted_strings = sort_by_size(strings);
	
		for (int i = 0; i < sorted_strings.size()-1; i++) cout << sorted_strings[i] << " ";
		cout << sorted_strings[sorted_strings.size()-1] << endl;
	}
		
	return 0;
}
