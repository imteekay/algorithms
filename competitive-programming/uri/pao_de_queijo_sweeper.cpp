// https://www.urionlinejudge.com.br/judge/en/problems/view/2552

#include <iostream>
#include <vector>

using namespace std;

int calculate(const vector< vector<int> > &matrix, int i, int j, int max_line, int max_column) {
  if (matrix[i][j] == 1) return 9;
  int total = 0;
  if (i+1 <= max_line) total += matrix[i+1][j]; // bottom
  if (i-1 >= 0) total += matrix[i-1][j]; // top
  if (j+1 <= max_column) total += matrix[i][j+1]; // right
  if (j-1 >= 0) total += matrix[i][j-1]; // left
  return total;
}

int main() {
  int N, M, X;

  while (cin >> N >> M) {
    vector< vector<int> > matrix;

    for (int i = 0; i < N; i++) {
      vector<int> V;

      for (int j = 0; j < M; j++) {
        cin >> X;
        V.push_back(X);
      }

      matrix.push_back(V);
    }

    for (int i = 0; i < N; i++) {
      for (int j = 0; j < M; j++) {
        cout << calculate(matrix, i, j, N-1, M-1);
      }
      cout << endl;
    }
  }

  return 0;
}
