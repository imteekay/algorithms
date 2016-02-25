// https://www.urionlinejudge.com.br/judge/en/problems/view/1555

#include <iostream>

using namespace std;

int main() {

  int n, n1, n2;
  cin >> n;

  while (n--) {
    cin >> n1 >> n2;
    int rafa = (3 * n1) * (3 * n1) + n2 * n2;
    int beto = 2 * (n1 * n1) + (5 * n2 * 5 * n2);
    int carlos = (n2 * n2 * n2) - 100 * n1;

    if (rafa > beto && rafa > carlos) cout << "Rafael ganhou" << endl;
    else if (beto > carlos) cout << "Beto ganhou" << endl;
    else cout << "Carlos ganhou" << endl;
  }

  return 0;
}
