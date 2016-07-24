// https://www.urionlinejudge.com.br/judge/en/problems/view/1557

#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int getNumberOfDigits(int n) {
  int counter = 0;
  while (n) {
    counter++;
    n /= 10;    
  }

  return counter;
}

string generateSpaces(int n, int t) {
  int diff = t - getNumberOfDigits(n);
  string s = "";
  for (int i = 0; i < diff; i++) s += " ";
  return s;
}

int main() {
  int n, num, t;

  while (cin >> n && n) {
    vector<int> v;
    vector< vector<int> > matrix;

    for (int i = 0; i < n; i++) {
      num = pow(2, i);
      v.push_back(num);
      for (int j = 1; j < n; j++) {
        num *= 2;
        v.push_back(num);
      }

      matrix.push_back(v);
      v.clear();
    }

    t = getNumberOfDigits(matrix[n-1][n-1]);

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (j == n-1) cout << generateSpaces(matrix[i][j], t) << matrix[i][j];
        else cout << generateSpaces(matrix[i][j], t) << matrix[i][j] << " ";
      }

      cout << endl;
    }

    cout << endl;
  }

  return 0;
}