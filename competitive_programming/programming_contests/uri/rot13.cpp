// https://www.urionlinejudge.com.br/judge/en/problems/view/1249

#include <iostream>
#include <string>

using namespace std;

int main() {
	
	string word;
	string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";

	while (getline(cin, word)) {
		string new_word = "";
		for (int i = 0; i < word.size(); i++) {
			int index = alphabet.find(word[i]);
			if (index != -1) {
				index += 13;
				new_word += alphabet[index];
			} else {
				new_word += word[i];
			}
		}	
		
		cout << new_word << endl;
	}

	return 0;
}
