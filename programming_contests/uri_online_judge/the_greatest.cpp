// https://www.urionlinejudge.com.br/judge/en/problems/view/1013

#include <iostream>

using namespace std;

int abs(int a, int b) {

  if (a > b) return a - b;
  else if (a < b) return b - a;
  else return 0;
}

int main() {

  int n1, n2, n3;

  cin >> n1 >> n2 >> n3;

  int maior = ((n1 + n2) + abs(n1, n2)) / 2;
  maior = ((maior + n3) + abs(maior, n3)) / 2;

  cout << maior << " eh o maior" << endl;

  return 0;
}
