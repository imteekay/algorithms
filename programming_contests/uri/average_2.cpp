// https://www.urionlinejudge.com.br/judge/en/problems/view/1006

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

  double a, b, c;
  cin >> a >> b >> c;

  cout << fixed << setprecision(1) << "MEDIA = " << (a * 2 + b * 3 + c * 5) / 10 << endl;

  return 0;
}
