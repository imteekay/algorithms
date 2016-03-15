#include <iostream>
#include <string>

using namespace std;

int main() {

		// defining strings
		string string1 = "hello world";
		string string2;

		// printing strings
		cout << string1 << endl;

		// finding letter(s) in a string
		cout << string1.find("e") << endl;

		// using input for string
		cin >> string2;
		cout << string2 << endl;

		// size
		cout << string1.size() << endl;
		cout << string2.size() << endl;

		// substrings
		cout << string1.substr(0, 5) << endl;
		cout << string1.substr(6, string1.size() - 1) << endl;

		string palavra = "lalala.lololo";
		cout << palavra.substr(6, 1) << endl;
		cout << palavra.substr(0, 6 - 0) << endl;
		cout << palavra.substr(6+1, palavra.size()-6) << endl;

		// string to integer
		string um = "1";
  	cout << stoi(um) << " - deu certo!" << endl;

  	string vinte = "20";
		cout << stoi(vinte) << " - deu certo.. de novo!" << endl;

		// last element of string
		string word = "Leandro";
		cout << palavra.back() << endl;

		// we can iterate a string: each char
		for (int i = 0; i < word; i++) cout << word[i] << " ";
		cout << endl;

		return 0;
}
