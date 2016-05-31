// https://www.urionlinejudge.com.br/judge/en/problems/view/1893

#include <iostream>

using namespace std;

int main() {

  int n1, n2;

  cin >> n1 >> n2;

  if (n2 >= 97 && n2 <= 100) cout << "cheia" << endl;
  else if (n2 >= 0 && n2 <= 2) cout << "nova" << endl;
  else if (n1 < n2) cout << "crescente" << endl;
  else cout << "minguante" << endl;

  return 0;
}
