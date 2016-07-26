// https://www.urionlinejudge.com.br/judge/en/problems/view/2161

#include <iostream>
#include <iomanip>

using namespace std;

double rootNumber(int n1, int n2) {
  if (n1 == n2) return 6.0;
  return 6 + 1.0 / rootNumber(n1+1, n2);
}

int main() {
  int n;
  cin >> n;
  if (n) cout << fixed << setprecision(10) << 3.0 + 1.0 / rootNumber(1, n) << endl;
  else cout << fixed << setprecision(10) << 3.0 << endl;

  return 0;
}
