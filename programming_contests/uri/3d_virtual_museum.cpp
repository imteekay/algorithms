// https://www.urionlinejudge.com.br/judge/en/problems/view/2548

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int N, M, num, total;
  vector<int> V;

  while (cin >> N >> M) {
    total = 0;

    while (N--) {
      cin >> num;
      V.push_back(num);
    }

    sort(V.begin(), V.end(), greater<int>());

    for (int i = 0; V.size() > 0 && i < M; i++) total += V[i];
    cout << total << endl;
    V.clear();
  }

  return 0;
}
