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

		return 0;
}
