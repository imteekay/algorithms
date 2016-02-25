// https://www.urionlinejudge.com.br/judge/en/problems/view/1170

#include <iostream>

using namespace std;

int main() {

  int n;
  double x;
  cin >> n;

  while (n--) {
    cin >> x;
    int counter = 0;

    while (x > 1) {
      x /= 2;
      counter++;
    }

    cout << counter << " dias" << endl;
  }

  return 0;
}
