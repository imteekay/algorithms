// https://www.urionlinejudge.com.br/judge/en/problems/view/1865

#include <iostream>
#include <string>

using namespace std;

int main() {

  string hero;
  int n, force;

  cin >> n;

  while (n--) {

    cin >> hero >> force;

    if (hero == "Thor") cout << "Y" << endl;
    else cout << "N" << endl;

  }

  return 0;
}
