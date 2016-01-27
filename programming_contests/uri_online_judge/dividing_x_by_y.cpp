// https://www.urionlinejudge.com.br/judge/en/problems/view/1116

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

  int n;
  double x, y;

  cin >> n >> x >> y;

  while (n--) {

    if (y != 0) {
      cout << fixed << setprecision(1) << x / y << endl;
    } else {
      cout << "divisao impossivel" << endl;
    }

    cin >> x >> y;
  }

  return 0;
}
