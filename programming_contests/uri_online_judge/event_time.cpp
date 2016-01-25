// https://www.urionlinejudge.com.br/judge/en/problems/view/1061

#include <iostream>
#include <string>

using namespace std;

int main() {
	
	string str1, str2, s3, s4, s5, s6;
	int d1, d2, h1, h2, m1, m2, s1, s2;

	cin >> str1 >> d1;
	cin >> h1 >> str2 >> m1 >> s3 >> s1;

	cin >> s4 >> d2;
	cin >> h2 >> s5 >> m2 >> s6 >> s2;

	int d, h, m, s;

	if (d2 >= d1) {
		d = d2 - d1;
	}

	if (h2 >= h1) {
		h = h2 - h1;
	} else {
		h = 24 - h1 + h2;
		d--;
	}

	if (m2 >= m1) {
		m = m2 - m1;
	} else {
		m = 60 - m1 + m2;
		h--;
	}	

	if (s2 >= s1) {
		s = s2 - s1;
	} else {
		s = 60 - s1 + s2;
		m--;
	}

	cout << d << " dia(s)" << endl;
	cout << h << " hora(s)" << endl;
	cout << m << " minuto(s)" << endl;
	cout << s << " segundo(s)" << endl;

	return 0;
}