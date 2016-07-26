// https://www.urionlinejudge.com.br/judge/en/problems/view/2164

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

long double fibonacci(int n) {
  return (pow(((1 + sqrt(5)) / 2), n) - pow(((1 - sqrt(5)) / 2), n)) / sqrt(5);
}

int main() {
  int n;
  cin >> n;
  cout << fixed << setprecision(1) << fibonacci(n) << endl;

  return 0;
}
