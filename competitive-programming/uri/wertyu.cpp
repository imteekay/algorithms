// https://www.urionlinejudge.com.br/judge/en/problems/view/1196

#include <iostream>
#include <string>

using namespace std;

int main() {
  string s = "QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./`1234567890-=";
  string thing;
  int index;

  while (getline(cin, thing)) {
    string new_thing = "";
    for (int i = 0; i < thing.size(); i++) {
      if (thing[i] != ' ') {
        index = s.find(thing[i]) - 1;
        new_thing += s[index];
      } else {
        new_thing += " ";
      }
    }

    cout << new_thing << endl;
  }

  return 0;
}
