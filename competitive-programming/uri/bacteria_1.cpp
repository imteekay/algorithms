// https://www.urionlinejudge.com.br/judge/pt/problems/view/2356

#include <iostream>
#include <string>

using namespace std;

int main() {
  string s1, s2;

  while (getline(cin, s1) && getline(cin, s2)) {
    if (s1.find(s2) == string::npos) cout << "Nao resistente" << endl;
    else cout << "Resistente" << endl;
  }

  return 0;
}
