// https://www.urionlinejudge.com.br/judge/en/problems/view/1573

#include <iostream>
#include <cmath>

using namespace std;

int main() {

  int n1, n2, n3;

  while (cin >> n1 >> n2 >> n3 && n1 + n2 + n3 != 0) {
    int total = n1 * n2 * n3;
    int cubic_root = cbrt(total);
    cout << cubic_root << endl;
  }

  return 0;
}
