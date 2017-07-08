#include <iostream>

using namespace std;

int main() {
  int N, I, UID, G, total;

  while (cin >> N >> I) {
    total = 0;
    while (N--) {
      cin >> UID >> G;
      if (UID == I && G == 0) total++;
    }

    cout << total << endl;
  }

  return 0;
}
