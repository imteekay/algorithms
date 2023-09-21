// https://www.urionlinejudge.com.br/judge/pt/problems/view/2583

#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
  int N, num;
  string s1, s2;
  cin >> N;

  while (N--) {
    map<string, int> M;
    cin >> num;

    while (num--) {
      cin >> s1 >> s2;

      if (M.find(s1) == M.end() && s2 == "chirrin") M[s1] = 1;
      else if (M.find(s1) != M.end() && s2 == "chirrion") M[s1] = 0;
    }

    cout << "TOTAL" << endl;

    for (map<string, int>::iterator it = M.begin(); it != M.end(); it++) {
      if (it->second == 1) cout << it->first << endl;
    }
  }

  return 0;
}
