#include <iostream>

using namespace std;

int main() {
  int N, min, max, X, total;

  while (cin >> N >> min >> max) {
    total = 0;
    while (N--) {
      cin >> X;
      if (X >= min && X <= max) total++;
    }

    cout << total << endl;
  }

  return 0;
}
