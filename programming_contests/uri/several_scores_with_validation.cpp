// https://www.urionlinejudge.com.br/judge/en/problems/view/1118

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

  int response = 1;
  float grade1, grade2;

  while (response != 2) {
    while (true) {
      cin >> grade1;
      if (grade1 >= 0 && grade1 <= 10) break;
      else cout << "nota invalida" << endl;
    }

    while (true) {
      cin >> grade2;
      if (grade2 >= 0 && grade2 <= 10) break;
      else cout << "nota invalida" << endl;
    }

    cout << fixed << setprecision(2) << "media = " << (grade1 + grade2) / 2 << endl;

    cout << "novo calculo (1-sim 2-nao)" << endl;
    cin >> response;

    while (response != 1 && response != 2) {
      cout << "novo calculo (1-sim 2-nao)" << endl;
      cin >> response;
    }
  }

  return 0;
}
