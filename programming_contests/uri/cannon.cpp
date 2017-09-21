// https://www.urionlinejudge.com.br/judge/pt/problems/view/1288

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct missile {
  int power, weight;
};

bool compare(missile m1, missile m2) {
  if (m1.weight < m2.weight) return true;
  else if (m1.weight > m2.weight) return false;
  else return m1.power <= m2.power;
}

int max(int a, int b) {
  return a >= b ? a : b;
}

int main() {
  int C, N, X, Y, K, R;

  cin >> C;

  while (C--) {
    cin >> N;
    vector<missile> missiles;

    for (int i = 0; i < N; i++) {
      cin >> X >> Y;
      missile m;
      m.power = X;
      m.weight = Y;
      missiles.push_back(m);
    }

    cin >> K >> R;
    int dp[N][K+1];
    sort(missiles.begin(), missiles.end(), compare);

    for (int i = 0; i <= K; i++) {
      if (i < missiles[0].weight) dp[0][i] = 0;
      else dp[0][i] = missiles[0].power;
    }

    for (int i = 1; i < N; i++) {
      for (int j = 0; j <= K; j++) {
        if (j < missiles[i].weight) dp[i][j] = dp[i-1][j];
        else dp[i][j] = max(dp[i-1][j], dp[i-1][j-missiles[i].weight] + missiles[i].power);
      }
    }    

    if (dp[N-1][K] >= R) cout << "Missao completada com sucesso" << endl;
    else cout << "Falha na missao" << endl;
  }

  return 0;
}
