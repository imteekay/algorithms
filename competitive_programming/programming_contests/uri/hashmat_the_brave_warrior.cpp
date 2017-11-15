// https://www.urionlinejudge.com.br/judge/en/problems/view/1198

#include <iostream>

using namespace std;

int main() {

  long long int n1, n2;

  while (scanf("%llu %llu", &n1, &n2) != EOF) {
    if (n1 > n2) cout << n1 - n2 << endl;
    else cout << n2 - n1 << endl;
  }

  return 0;
}
