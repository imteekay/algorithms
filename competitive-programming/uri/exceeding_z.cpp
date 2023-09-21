// https://www.urionlinejudge.com.br/judge/en/problems/view/1150

#include <iostream>

using namespace std;

int main() {

  int n, n1, n2, total=1;

  cin >> n1 >> n2;

  while (n2 <= n1) {
    cin >> n2;
  }

  n = n1;

  while (true) {

    n += n1 + 1;
    n1++;
    total++;

    if (n > n2) {
      break;
    }
  }

  cout << total << endl;

  return 0;
}
