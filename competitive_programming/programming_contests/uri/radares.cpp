// https://www.urionlinejudge.com.br/judge/pt/problems/view/2598

#include <iostream>

using namespace std;

int main() {
  int C, N, M, result;

  cin >> C;

  while (C--) {
    cin >> N >> M;

    result = N / M;
    if (N % M > 0) result++;
    cout << result << endl;
  }

  return 0;
}
