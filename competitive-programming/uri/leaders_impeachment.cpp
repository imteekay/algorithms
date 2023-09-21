#include <iostream>

using namespace std;

int main() {
  int N, X;
  double total = 0.0, rule = 2.0 / 3.0;

  while (cin >> N) {
    while (N--) {
      cin >> X;
      total += X;
    }

    if (total / N >= rule) cout << "impeachment" << endl;
    else cout << "acusacao arquivada" << endl;
    total = 0.0;
  }

  return 0;
}
