// https://www.urionlinejudge.com.br/judge/en/problems/view/2168

#include <iostream>

using namespace std;

bool isSecure(int matrix[101][101], int i, int j) {
  int numOfCameras = 0;
  numOfCameras += matrix[i][j];
  numOfCameras += matrix[i][j+1];
  numOfCameras += matrix[i+1][j];
  numOfCameras += matrix[i+1][j+1];
  return numOfCameras >= 2;
}

int main() {
  int n;
  int matrix[101][101];
  string line;
  cin >> n;

  for (int i = 0; i < n+1; i++) {
    for (int j = 0; j < n+1; j++) {
      cin >> matrix[i][j];
    }
  }

  for (int i = 0; i < n; i++) {
    line = "";
    for (int j = 0; j < n; j++) {
      if (isSecure(matrix, i, j)) line += "S";
      else line += "U";
    }
    cout << line << endl;
  }

  return 0;
}
