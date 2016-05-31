// https://www.urionlinejudge.com.br/judge/en/problems/view/1010

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

  int code1, code2, unit1, unit2;
  float price_per_unit1, price_per_unit2;

  cin >> code1 >> unit1 >> price_per_unit1;
  cin >> code2 >> unit2 >> price_per_unit2;

  cout << fixed << setprecision(2) << "VALOR A PAGAR: R$ " << unit1 * price_per_unit1 + unit2 * price_per_unit2 << endl;

  return 0;
}
