// https://www.urionlinejudge.com.br/judge/en/problems/view/1192

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {

  int n;
  cin >> n;

  while (n--) {
    string x;
    cin >> x;

    int n1 = x[0] - 48;
    int n2 = x[2] - 48;

    if (n1 == n2) {
      cout << n1 * n2 << endl;
    } else if (isupper(x[1])) {
      cout << n2 - n1 << endl;
    } else {
      cout << n1 + n2 << endl;
    }
  }

  return 0;
}
