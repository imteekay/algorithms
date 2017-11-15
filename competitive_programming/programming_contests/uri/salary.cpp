// https://www.urionlinejudge.com.br/judge/en/problems/view/1008

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

  int n1, n2;
  float num;

  cin >> n1 >> n2 >> num;

  cout << "NUMBER = " << n1 << endl;
  cout << fixed << setprecision(2) << "SALARY = U$ " << n2 * num << endl;

  return 0;
}
