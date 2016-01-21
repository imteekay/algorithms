// https://www.urionlinejudge.com.br/judge/en/problems/view/1014

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

  int n1, n2;

  cin >> n1 >> n2;

  cout << fixed << setprecision(3) << n1 / n2 << " km/l" << endl;

  return 0;
}
