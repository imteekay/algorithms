// https://www.urionlinejudge.com.br/judge/pt/problems/view/2518

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
  double N, H, C, L, result;
  cin >> N >> H >> C >> L;
  result = N * L * (sqrt(H * H + C * C)) / 10000;
  cout << fixed << setprecision(4) << result << endl;
  return 0;
}
