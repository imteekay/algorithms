// https://www.urionlinejudge.com.br/judge/en/problems/view/1556

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

  string s;

  while (cin >> s) {
    vector<string> v;

    for (int i = 0; i < s.size(); i++) {
      string new_s = "";

      for (int j = i; j < s.size(); j++) {
        new_s += s[j];
        v.push_back(new_s);
        cout << new_s << endl;
      }
    }

  }

  return 0;
}
