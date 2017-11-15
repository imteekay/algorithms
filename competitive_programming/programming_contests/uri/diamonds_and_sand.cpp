// https://www.urionlinejudge.com.br/judge/en/problems/view/1069

#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	int n, d, open;
	cin >> n;

	while (n--) {
		d=0, open=0;
		cin >> s;

		for(int i = 0; i < s.size(); i++) {
			if (s[i] == '<') {
				open++;
			} else if (s[i] == '>') {
				if (open > 0) {
					open--;
					d++;
				}
			}
		}

		cout << d << endl;
	}

	return 0;
}