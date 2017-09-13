// https://www.urionlinejudge.com.br/judge/pt/problems/view/1310

#include <iostream>

using namespace std;

int max(int a, int b) {
  return (a > b)? a : b;
}

int main() {
  int N, C, pricePerDay;

  while (cin >> N >> pricePerDay) {
    int revenue[N+1];
    revenue[0] = 0;

    for (int i = 1; i <= N; i++) {
      cin >> C;
      revenue[i] = C;
    }

    int dp[N+1][N+1];

    for (int i = 0; i < N+1; i++) {
      for (int j = 0; j < N+1; j++) {
        if (i != 0 && i == j) dp[i][j] = revenue[i] - pricePerDay;
        else dp[i][j] = 0;
      }
    }

    for (int i = 1; i < N+1; i++) {
      for (int j = i+1; j < N+1; j++) {
        if (dp[i][j] == 0) dp[i][j] = dp[i][j-1] + dp[j][j];
      }
    }

    int greater = 0;

    for (int i = 1; i < N+1; i++) {
      for (int j = i; j < N+1; j++) {
        greater = max(dp[i][j], greater);
      }
    }

    cout << greater << endl;
  }

  return 0;
}
