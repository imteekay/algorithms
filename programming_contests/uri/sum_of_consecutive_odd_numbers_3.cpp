// https://www.urionlinejudge.com.br/judge/en/problems/view/1158

#include <iostream>

using namespace std;

int main() {

  int n, n1, n2, counter=0, total=0;

  cin >> n;

  while (n--) {
    cin >> n1 >> n2;

    while (true) {
      if (n1 % 2 != 0) {
        total += n1;
        counter++;
      }

      if (counter == n2) {
        break;
      }

      n1++;
    }

    cout << total << endl;
    counter = 0;
    total = 0;
  }

  return 0;
}
