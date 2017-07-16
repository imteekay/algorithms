// https://www.urionlinejudge.com.br/judge/en/problems/view/2600

#include <iostream>

using namespace std;

int main() {
  long long int N, n1, n2, n3, n4, n5, n6;
  cin >> N;

  while (N--) {
    cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6;
    if (n1 + n6 == 7 && n2 + n4 == 7 && n3 + n5 == 7) cout << "SIM" << endl;
    else cout << "NAO" << endl;
  }

  return 0;
}
