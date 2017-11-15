// https://www.urionlinejudge.com.br/judge/en/problems/view/2176

#include <iostream>
#include <string>

using namespace std;

int main() {
	int numOfOneBits = 0;
	string s;
	cin >> s;
	
	for (int i = 0; i < s.size(); i++) if (s[i] == '1') numOfOneBits++;
	
	if (numOfOneBits % 2 == 0) s += '0';
	else s += '1';
	
	cout << s << endl;
	
	return 0;
}