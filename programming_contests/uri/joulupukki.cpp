// https://www.urionlinejudge.com.br/judge/en/problems/view/2025

#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> split(string s) {
	vector<string> words;
	string word;
	int pos = 0;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == ' ') {
			word = s.substr(pos, i-pos);
			words.push_back(word);
			pos = i+1;
		}
	}
	
	word = s.substr(pos, s.size()-pos);
	words.push_back(word);

	return words;
}

string transformWord(string word) {
	if (word.size() == 10) {
		if (word.substr(1, 8) == "oulupukk") return "Joulupukki";
	} else if (word.size() == 11) {
		if (word.substr(1, 8) == "oulupukk") return "Joulupukki.";
	}

	return word;
}

int main() {
	int n;
	cin >> n;
	cin.ignore();
	string s;

	while (n--) {
		getline(cin, s);
		vector<string> words = split(s);
		
		for (int i = 0; i < words.size(); i++) {
			if (i < words.size()-1) cout << transformWord(words[i]) << " ";
			else cout << transformWord(words[i]) << endl;
		}
	}

	return 0;
}