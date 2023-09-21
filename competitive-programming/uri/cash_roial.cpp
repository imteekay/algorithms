// https://www.urionlinejudge.com.br/judge/pt/problems/view/2595

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int enemies_counter(vector<string> &V, int cx, int cy, int N, int M) {
  int counter = 0;

  if (cx-1 >= 0 && cy-1 >= 0 && V[cx-1][cy-1] == 'T') counter++;
  if (cy-1 >= 0 && V[cx][cy-1] == 'T') counter++;
  if (cx+1 < N && cy-1 >= 0 && V[cx+1][cy-1] == 'T') counter++;
  if (cx-1 >= 0 && V[cx-1][cy] == 'T') counter++;
  if (cx+1 < N && V[cx+1][cy] == 'T') counter++;
  if (cx-1 >= 0 && cy+1 < M && V[cx-1][cy+1] == 'T') counter++;
  if (cy+1 < M && V[cx][cy+1] == 'T') counter++;
  if (cx+1 < N && cy+1 < M && V[cx+1][cy+1] == 'T') counter++;

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
      if (enemies_counter(V, cx-1, cy-1, N, M) >= 5) cout << "GRRR" << endl;
      else cout << "GG IZI" << endl;
    }

    V.clear();
  }

  return 0;
}
