// https://www.urionlinejudge.com.br/judge/en/problems/view/1944

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	int n, giftNumber = 0;
	bool opposite;
	string word, lastWord;
	char letter;
	cin >> n;

	vector<string> words;
	words.push_back("FACE");

	while (n--) {
		word = "";
		opposite = true;
		lastWord = words.back();

		for (int i = 3; i >= 0; i--) {
			cin >> letter;
			word += letter;
			if (lastWord[i] != letter) opposite = false;
		}

		if (opposite) {
			giftNumber++;
			words.pop_back();
			if (words.empty()) words.push_back("FACE");
		} else words.push_back(word);
	}

	cout << giftNumber << endl;

	return 0;
}