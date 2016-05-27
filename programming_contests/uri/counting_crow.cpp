// https://www.urionlinejudge.com.br/judge/en/problems/view/1848

#include <iostream>
#include <string>

using namespace std;

int main() {

  int scream_counter = 0, blink_counter = 0;
  string s;

  while (scream_counter < 3) {
    cin >> s;
    if (s == "caw") {
      scream_counter++;
      cin >> s;
      cout << blink_counter << endl;
      blink_counter = 0;
    } else {
      for (int i = 0; i < 3; i++) {
        if (s[i] == '*') {
          if (i == 0) blink_counter+= 4;
          else if (i == 1) blink_counter+= 2;
          else if (i == 2) blink_counter+= 1;
        }
      }
    }
  }

  return 0;
}
