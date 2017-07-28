// https://www.urionlinejudge.com.br/judge/pt/problems/view/2516

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  double S, VA, VB;

  while (cin >> S >> VA >> VB) {
    if (VB >= VA) cout << "impossivel" << endl;
    else {
      cout << fixed << setprecision(2) << S / (VA - VB) << endl;
    }
  }

  return 0;
}
