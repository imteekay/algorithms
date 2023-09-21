// https://www.urionlinejudge.com.br/judge/pt/problems/view/2567

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int N, num, level;

  while (cin >> N) {
    vector<int> V;
    level = 0;

    while (N--) {
      cin >> num;
      V.push_back(num);
    }

    sort(V.begin(), V.end());

    for (int i = 0; i < V.size() / 2; i++) {
      level += (V[V.size()-1] - V[i]);
    }

    cout << level << endl;
  }

  return 0;
}
