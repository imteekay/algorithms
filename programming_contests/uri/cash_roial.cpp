// https://www.urionlinejudge.com.br/judge/pt/problems/view/2595

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int enemies_counter(vector<string> &V, int cx, int cy, int N, int M) {
  int counter = 0;

  if (cx-2 >= 0 && cy-2 >= 0) counter += V[cx-2][cy-2];
  if (cy-2 >= 0) counter += V[cx-1][cy-2];
  if (cx < N && cy-2 >= 0) counter += V[cx][cy-2];
  if (cx-2 >= 0) counter += V[cx-2][cy-1];
  if (cx < N) counter += V[cx][cy-1];
  if (cx-2 >= 0 && cy-2 >= 0) counter += V[cx-2][cy];
  if (cx-2 >= 0 && cy-2 >= 0) counter += V[cx-1][cy];
  if (cx-2 >= 0 && cy-2 >= 0) counter += V[cx][cy];

  return counter;
}

int main() {
  int num, N, M, P, X, Y, cx, cy;
  vector<string> V;
  string line;

  cin >> num;

  while (num--) {
    cin >> N >> M >> P;
    cin.ignore();

    for (int i = 0; i < N; i++) {
      cin >> line;
      V.push_back(line);
    }

    while (P--) {
      cin >> cx >> cy;
      if (enemies_counter(V, cx, cy, N, M) > 5) cout << "GRRR" << endl;
      else cout << "GG IZI" << endl;
    }

    V.clear();
  }

  return 0;
}
