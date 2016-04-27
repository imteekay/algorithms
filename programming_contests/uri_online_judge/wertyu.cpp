// https://www.urionlinejudge.com.br/judge/en/problems/view/1196

#include <iostream>
#include <string>

using namespace std;

int main() {
  string s = "QWERTYUIOP[] ASDFGHJKL;'ZXCVBNM,./";
  string thing;
  int index;

  while (cin >> thing) {
    string new_thing = "";
    for (int i = 0; i < thing.size(); i++) {
      if (thing[i] == '\"') index = s.find(" ") - 1;
      else index = s.find(thing[0]) - 1;
      new_thing += s[index];
    }

    cout << new_thing << endl;
  }

  return 0;
}
