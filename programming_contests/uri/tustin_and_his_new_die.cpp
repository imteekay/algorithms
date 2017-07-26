// https://www.urionlinejudge.com.br/judge/en/problems/view/2600

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  long long int N, n1, n2, n3, n4, n5, n6, total;
  vector<long long int> V;
  cin >> N;

  while (N--) {
    cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6;

    V.push_back(n1);
    V.push_back(n2);
    V.push_back(n3);
    V.push_back(n4);
    V.push_back(n5);
    V.push_back(n6);
    sort(V.begin(), V.end());

    if (n1 + n6 == 7 && n2 + n4 == 7 && n3 + n5 == 7 && V[0] == 1 && V[1] == 2 && V[2] == 3 && V[3] == 4 && V[4] == 5 && V[5] == 6) cout << "SIM" << endl;
    else cout << "NAO" << endl;
    V.clear();
  }

  return 0;
}
