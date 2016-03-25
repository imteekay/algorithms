// https://www.urionlinejudge.com.br/judge/en/problems/view/1448

#include <iostream>
#include <string>

using namespace std;

int main() {

  int n, instance=1;
  string s, s1, s2;

  cin >> n;
  cin.ignore();

  while (getline(cin, s)) {
    getline(cin, s1);
    getline(cin, s2);

    int points_1=0, points_2=0;
    bool not_found = true;
    int winner = 0;

    for (int i = 0; i < s.size(); i++) {
      if (s[i] == s1[i]) points_1++;
      if (s[i] == s2[i]) points_2++;
      if (not_found) {
        if (s[i] == s1[i] && s[i] != s2[i]) {
          not_found = false;
          winner = 1;
        } else if (s[i] != s1[i] && s[i] == s2[i]) {
          not_found = false;
          winner = 2;
        }
      }
    }

    cout << "Instancia " << instance << endl;
    instance++;

    if (points_1 == points_2) {
      if (winner == 0) cout << "empate" << endl;
      else if (winner == 1) cout << "time 1" << endl;
      else if (winner == 2) cout << "time 2" << endl;
    } else if (points_1 > points_2) {
      cout << "time 1" << endl;
    } else if (points_1 < points_2) {
      cout << "time 2" << endl;
    }

    cout << endl;
  }

  return 0;
}
