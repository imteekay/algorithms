// https://www.urionlinejudge.com.br/judge/en/problems/view/1117

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

  int total=0;
  double n, media=0;

  cin >> n;

  while (total < 2) {

    if (n >= 0 && n <= 10) {
      media += n;
      total++;
    } else {
      cout << "nota invalida" << endl;
    }

    cin >> n;
  }

  cout << fixed << setprecision(2) << "media = " << media / 2.0 << endl;

  return 0;
}
