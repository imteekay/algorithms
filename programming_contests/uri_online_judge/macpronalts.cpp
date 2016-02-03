// https://www.urionlinejudge.com.br/judge/en/problems/view/1985

#include <iostream>
#include <iomanip>

using namespace std;

double total_price(int code, int number) {

  double total;

  if (code == 1001) total = number * 1.5;
  else if (code == 1002) total = number * 2.5;
  else if (code == 1003) total = number * 3.5;
  else if (code == 1004) total = number * 4.5;
  else if (code == 1005) total = number * 5.5;

  return total;
}

int main() {

  int n, code, number;
  double total=0;

  cin >> n;

  while (n--) {
    cin >> code >> number;
    total += total_price(code, number);
  }

  cout << fixed << setprecision(2) << total << endl;

  return 0;
}
