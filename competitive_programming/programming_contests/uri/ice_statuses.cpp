// https://www.urionlinejudge.com.br/judge/pt/problems/view/1034

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int min(int a, int b) {
  return (a < b)? a : b;
}

int main() {
  int T, N, M, num;

  cin >> T;

  while (T--) {
    cin >> N >> M;
    vector<int> V;

    while (N--) {
      cin >> num;
      V.push_back(num);
    }

    sort(V.begin(), V.end());

    int dp[V.size()][M+1];

    for (int i = 0; i <= M; i++) dp[0][i] = i;

    for (int i = 1; i < V.size(); i++) {
      for (int j = 0; j <= M; j++) {
        if (V[i] <= j) dp[i][j] = min(1 + dp[i][j-V[i]], dp[i-1][j]);
        else dp[i][j] = dp[i-1][j];
      }
    }

    cout << dp[V.size()-1][M] << endl;
  }

  return 0;
}
