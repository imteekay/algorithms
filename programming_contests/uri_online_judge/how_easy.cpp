// https://www.urionlinejudge.com.br/judge/en/problems/view/1243

#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool correct_word(string word) {
	string not_word_part = "0123456789 .";
	for (int j = 0; j < word.size(); j++) if (not_word_part.find(word[j]) != -1) return false;
	return true;
}

vector<string> parse_string(string line) {
	vector<string> v;
	string word = "";
	
	for (int i = 0; i < line.size(); i++) {
		if (line[i] == ' ' && word.size() > 0) {
			if (correct_word(word)) v.push_back(word);
			word.clear();
		} else if (line[i] == '.' && i < line.size() - 1 && line[i+1] == ' ' && word.size() > 0) {
			if (correct_word(word)) v.push_back(word);
			word.clear();
			word += line[i];
		} else if (i == line.size() - 1) {
			if (line[i] != '.') word += line[i];
			if (correct_word(word)) v.push_back(word);
			word.clear();
		} else {
			if (line[i] != ' ') word += line[i];
		}
	}
	
	return v;
}

int main() {	
	vector<string> words;
	string phrase;
	int word_size_counter = 0, words_size, average;

	while (getline(cin, phrase)) {
		words = parse_string(phrase);
		words_size = words.size();

		if (words_size) {
			for (int i = 0; i < words_size; i++) word_size_counter += words[i].size();
			average = word_size_counter / words_size;

			if (average <= 3) cout << 250 << endl;
			else if (average <= 5) cout << 500 << endl;
			else cout << 1000 << endl;
		} else {
			cout << 250 << endl;
		}

		word_size_counter = 0;
	}

	return 0;
}