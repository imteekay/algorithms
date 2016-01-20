// https://www.urionlinejudge.com.br/judge/en/problems/view/1009

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

  string name;
  float n1, n2;

  cin >> name;
  cin >> n1 >> n2;

  cout << fixed << setprecision(2) << "TOTAL = R$ " << n1 + n2 * 0.15 << endl;

  return 0;
}
