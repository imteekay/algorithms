// https://www.urionlinejudge.com.br/judge/en/problems/view/1276

#include <iostream>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

string removeSpaces(string phrase) {
	string newPhrase = "";
	char lastLetter;
	int index;

	for (int i = 0; i < phrase.size(); i++) {
		if (phrase[i] != ' ') {
			newPhrase += phrase[i];
			lastLetter = phrase[i];
			index = i;
			break;
		}
	}

	for (int i = index; i < phrase.size(); i++) {
		if (phrase[i] != ' ' && phrase[i] != lastLetter) {
			newPhrase += phrase[i];
			lastLetter = phrase[i];
		}
	}

	return newPhrase;
}

set<string> generateStrips(string phrase) {
	set<string> strips;
	string alphabet = "abcdefghijklmnopqrstuvwxyz", strip = "";
	char first = phrase[0], last = phrase[0];

	for (int i = 1; i < phrase.size(); i++) {
		if (alphabet.find(phrase[i])-1 == alphabet.find(last)) {
			last = phrase[i];
		} else {
			strip += first;
			strip += ':';
			strip += last;
			strips.insert(strip);
			first = phrase[i];
			last = phrase[i];
			strip = "";
		}
	}

	strip += first;
	strip += ':';
	strip += last;
	strips.insert(strip);

	return strips;
}

int main() {
	string phrase;
	set<string> strips;

	while (getline(cin, phrase)) {
		if (phrase == "") cout << endl;
		else {
			sort(phrase.begin(), phrase.end());
			phrase = removeSpaces(phrase);
			strips = generateStrips(phrase);
			
			set<string>::const_iterator iterator = strips.begin();
			cout << *iterator++;

			for (; iterator != strips.end(); iterator++)
				cout << ", " << *iterator;
			
			cout << endl;
		}
	}

	return 0;
}