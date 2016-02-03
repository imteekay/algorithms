// https://www.urionlinejudge.com.br/judge/en/problems/view/1866

#include <iostream>

using namespace std;

int main() {

  int n;
  cin >> n;

  while (n--) {
    int x;
    cin >> x;

    if (x % 2 == 0) cout << 0 << endl;
    else cout << 1 << endl;
  }

  return 0;
}
