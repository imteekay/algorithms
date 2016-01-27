// https://www.urionlinejudge.com.br/judge/en/problems/view/1115

#include <iostream>

using namespace std;

int main() {

  int x, y;

  cin >> x >> y;

  while (x != 0 && y != 0) {
    if (x > 0 && y > 0) cout << "primeiro" << endl;
    else if (x < 0 && y > 0) cout << "segundo" << endl;
    else if (x < 0 && y < 0) cout << "terceiro" << endl;
    else if (x > 0 && y < 0) cout << "quarto" << endl;

    cin >> x >> y;
  }

  return 0;
}
