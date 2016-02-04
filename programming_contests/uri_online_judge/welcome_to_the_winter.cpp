// https://www.urionlinejudge.com.br/judge/en/problems/view/1847

#include <iostream>

using namespace std;

int main() {

  int a, b, c;

  cin >> a >> b >> c;

  if (a == b && b == c) {
  	cout << ":(" << endl;
  } else {
		if (b - a < c - b) cout << ":)" << endl;
		else if (b - a == c - b && b - a > 0) cout << ":)" << endl;
		else if (b - a == c - b && b - a < 0) cout << ":(" << endl;
		else cout << ":(" << endl;
	}

  return 0;
}
