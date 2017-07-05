// https://www.urionlinejudge.com.br/judge/en/problems/view/2534

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int N, Q, X;
  vector<int> V, R;

  while (cin >> N >> Q) {
    while (N--) {
      cin >> X;
      V.push_back(X);
    }

    sort(V.begin(), V.end(), greater<int>());

    while (Q--) {
      cin >> X;
      cout << V[X-1] << endl;
    }

    V.clear();
  }

  return 0;
}
