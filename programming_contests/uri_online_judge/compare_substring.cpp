// https://www.urionlinejudge.com.br/judge/en/problems/view/1237

#include <iostream>
#include <string>

using namespace std;

int searchSubstring(string s) {
	for (int i = s.size(); i > 0; i--) {
		
	}
}

int main() {
	
	string s1, s2;
	
	while(getline(cin, s1)) {
		getline(cin, s2);

		if (s1.size() < s2.size()) {
			searchSubstring(s1);
		} else {
			searchSubstring(s2);
		}
	}

	return 0;
}