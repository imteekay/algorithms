// http://codeforces.com/problemset/problem/828/B

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
  int N, M, black = 0,
      smaller_black_x = 101,
      smaller_black_y = 101,
      bigger_black_x = -1,
      bigger_black_y = -1,
      result_square,
      bigger_side;

  vector<string> matrix;
  string line;
  cin >> N >> M;
  cin.ignore();

  for (int i = 0; i < N; i++) {
    getline(cin, line);
    matrix.push_back(line);
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      if (matrix[i][j] == 'B') {
        if (i < smaller_black_y) smaller_black_y = i;
        if (i > bigger_black_y) bigger_black_y = i;
        if (j < smaller_black_x) smaller_black_x = j;
        if (j > bigger_black_x) bigger_black_x = j;
        black++;
      }
    }
  }

  if (black == 0) {
    cout << 1 << endl;
    return 0;
  }

  bigger_side = max(bigger_black_x - smaller_black_x + 1, bigger_black_y - smaller_black_y + 1);

  if (bigger_side > N || bigger_side > M) cout << -1 << endl;
  else cout << bigger_side * bigger_side - black << endl;

  return 0;
}
