// https://www.urionlinejudge.com.br/judge/en/problems/view/2163

#include <iostream>

using namespace std;

bool surroundedBySevens(int matrix[1001][1001], int y, int x) {
  int sum = 0;

  for (int i = y-1; i <= y+1; i++) {
    for (int j = x-1; j <= x+1; j++) {
      if (y != i || x != j) sum += matrix[i][j];
    }
  }

  return sum == 56;
}

int main() {
  int n1, n2, y = 0, x = 0;
  cin >> n1 >> n2;
  int matrix[1001][1001];

  for (int i = 0; i < n1; i++) {
    for (int j = 0; j < n2; j++) {
      cin >> matrix[i][j];
    }
  }

  for (int i = 1; i < n1-1; i++) {
    for (int j = 1; j < n2-1; j++) {
      if (matrix[i][j] == 42 && surroundedBySevens(matrix, i, j)) {
        y = i+1;
        x = j+1;
      }
    }
  }

  cout << y << " " << x << endl;

  return 0;
}
