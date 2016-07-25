// https://www.urionlinejudge.com.br/judge/en/problems/view/1837

// 9 4 --> 2 1
// 9 -4 --> -2 1
// -9 4 --> -3 3
// -9 -4 --> 3 3

#include <iostream>

using namespace std;

int main() {
  int x, n, q, r;
  float n1, n2,xf;
  cin >> n1 >> n2;

  n = n2;
  if (n < 0) n *= -1;

  for (int i = 0; i < n; i++) {
    x = (n1 - i) / n2;
    xf = (n1 - i) / n2;

    if (x == xf) {
      r = i;
      q = x;
      break;
    }
  }

  cout << q << " " << r << endl;

  return 0;
}
