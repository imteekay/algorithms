// https://www.urionlinejudge.com.br/judge/pt/problems/view/2653

#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
  string s;
  set<string> ss;

  while (cin >> s) {
    ss.insert(s);
  }

  cout << ss.size() << endl;

  return 0;
}
