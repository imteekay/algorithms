// https://www.urionlinejudge.com.br/judge/en/problems/view/2160

#include <iostream>
#include <string>

using namespace std;

int main() {
	string phrase;
	getline(cin, phrase);
	if (phrase.size() <= 80) cout << "YES" << endl;
	else cout << "NO" << endl;

	return 0;
}