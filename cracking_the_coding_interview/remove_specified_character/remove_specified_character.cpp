#include <iostream>
#include <string>

using namespace std;

int main() {

	string word, characteres, result="";

	getline(cin, word);
	cin >> characteres;	

	for (int i = 0; i < word.size(); i++) {
		int belongs_to = 0;

		for (int j = 0; j < characteres.size(); j++) {
			if (word[i] == characteres[j]) {
				belongs_to = 1;
				break;
			}
		}

		if (!belongs_to)
			result += word[i];
	}

	cout << result << endl;

	return 0;
}