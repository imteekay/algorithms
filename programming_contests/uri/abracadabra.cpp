// https://www.urionlinejudge.com.br/judge/pt/problems/view/2484

#include <iostream>
#include <string>

using namespace std;

int main() {
  string s;

  while (getline(cin, s)) {
    for (int i = 0; i < s.size(); i++) {
      for (int j = 0; j < i; j++) cout << " ";

      for (int j = 0; j < s.size()-i; j++) {
        if (j == 0) cout << s[j];
        else cout << " " << s[j];
      }
      cout << endl;
    }
    cout << endl;
  }

  return 0;
}
