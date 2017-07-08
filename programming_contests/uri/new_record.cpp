// https://www.urionlinejudge.com.br/judge/en/problems/view/2551

#include <iostream>

using namespace std;

int main() {
  int N;
  double best, time, distance;

  while (cin >> N) {
    best = 0;

    for (int i = 1; i <= N; i++) {
      cin >> time >> distance;

      if (distance / time > best) {
        best = distance / time;
        cout << i << endl;
      }
    }
  }

  return 0;
}
