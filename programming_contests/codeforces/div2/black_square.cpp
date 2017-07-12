// http://codeforces.com/problemset/problem/828/B

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
  int N, M, product, black = 0, result_square,
      smaller_black_x = 101,
      smaller_black_y = 101,
      bigger_black_x = 0,
      bigger_black_y = 0;

  vector<string> matrix;
  string line;
  cin >> N >> M;
  cin.ignore();
  product = N * M;

  if (N == 1 && M > 1 || M == 1 && N > 1) cout << -1 << endl;
  else {
    for (int i = 0; i < N; i++) {
      getline(cin, line);
      matrix.push_back(line);
    }

    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
        if (matrix[i][j] == 'B') {
          black++;

          if (i < smaller_black_y) smaller_black_y = i;
          if (i > bigger_black_y) bigger_black_y = i;
          if (j < smaller_black_x) smaller_black_x = j;
          if (j > bigger_black_x) bigger_black_x = j;
        }
      }
    }

    result_square = (bigger_black_x - smaller_black_x + 1) * (bigger_black_y - smaller_black_y + 1);
    cout << result_square << endl;
  }

  return 0;
}
