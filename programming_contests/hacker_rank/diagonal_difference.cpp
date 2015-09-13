#include <vector>
#include <iostream>

using namespace std;

int main() {

  vector< vector<int> > matrix;
  vector<int> v;
  int n, diag1=0, diag2=0, temp;

  cin >> n;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> temp;
      v.push_back(temp);
    }

    matrix.push_back(v);
    v.clear();
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == j) diag1 += matrix[i][j];
      if (j == n - 1 - i) diag2 += matrix[i][j];
    }
  }

  int result = diag1 - diag2;
  if (result < 0) result *= -1;

  cout << result << endl;

  return 0;
}
