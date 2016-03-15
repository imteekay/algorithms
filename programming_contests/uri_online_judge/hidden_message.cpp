// https://www.urionlinejudge.com.br/judge/en/problems/view/1272

#include <iostream>
#include <string>

using namespace std;

int main() {

  int n;
  cin >> n;
  string s;
  getline(cin, s);

  while (n--) {
    getline(cin, s);
    int can_get_letter = 1;
    string result = "";
    for (int i = 0; i < s.size(); i++) {
      if (can_get_letter && s[i] != ' ') {
        result.push_back(s[i]);
        can_get_letter = 0;
      } else {
        if (s[i] == ' ') can_get_letter = 1;
      }
    }

    cout << result << endl;
  }

  return 0;
}
