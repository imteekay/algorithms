// https://www.urionlinejudge.com.br/judge/en/problems/view/1258

#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

int main() {
  int n;
  string name, tshirt;

  while (cin >> n && n != 0) {
    cin.ignore();
    map <string, vector<string> > m;
    vector<string> v;

    while (n--) {
      getline(cin, name);
      getline(cin, tshirt);

      if (m.find(tshirt) != m.end()) m[tshirt].push_back(name);
      else {
        v.push_back(name);
        m[tshirt] = v;
        v.clear();
      }
    }

    for (map<string, vector<string> >::iterator it = m.begin(); it != m.end(); ++it) {
      cout << it->first
    }
  }

  return 0;
}
