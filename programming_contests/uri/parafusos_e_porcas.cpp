// https://www.urionlinejudge.com.br/judge/pt/problems/view/1520

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int N, n1, n2;

  while (cin >> N) {
    vector<int> V;

    while (N--) {
      cin >> n1 >> n2;

      for (int i = n1; i <= n2; i++) {
        V.push_back(i);
      }
    }

    sort(V.begin(), V.end());
    cin >> N;
    n1 = -1;
    n2 = -1;

    for (int i = 0; i < V.size(); i++) {
      if (N == V[i]) {
        n1 = i;
        break;
      }
    }

    for (int i = V.size()-1; i >= 0; i--) {
      if (N == V[i]) {
        n2 = i;
        break;
      }
    }

    if (n1 != -1 && n2 != -1) cout << N << " found from " << n1 << " to " << n2 << endl;
    else cout << N << " not found" << endl;
  }

  return 0;
}
