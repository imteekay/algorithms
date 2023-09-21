// http://www.urionlinejudge.com.br/judge/en/problems/view/1305

#include <iostream>
#include <cmath>

using namespace std;

int main() {

  long double num, cutoff, fractional;
  int intnum;

  while (cin >> num >> cutoff) {
    intnum = num;
    fractional = num - intnum;

    if (fractional >= cutoff) cout << ((int) num + 1) << endl;
    else cout << ((int) num) << endl;
  }

  return 0;
}
