// https://www.urionlinejudge.com.br/judge/en/problems/view/1154

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

  int n, number=0;
  double total=0;

  cin >> n;

  while (n >= 0) {
    total += n;
    number++;
    cin >> n;
  }

  cout << fixed << setprecision(2) << total / number << endl;

  return 0;
}

