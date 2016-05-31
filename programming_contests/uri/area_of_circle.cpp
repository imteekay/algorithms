// https://www.urionlinejudge.com.br/judge/en/problems/view/1002

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {

  const double PI = 3.14159;
  double r;
  cin >> r;

  cout << fixed << setprecision(4) << "A=" << PI * pow(r, 2) << endl;

  return 0;
}

