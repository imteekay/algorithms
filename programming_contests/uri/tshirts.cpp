// https://www.urionlinejudge.com.br/judge/en/problems/view/1258

#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

int main() {
  int n;
  string name, tshirt, size;

  while (cin >> n && n != 0) {
    cin.ignore();
    map < string, pair< string, vector<string> > > m;
    vector<string> v;

    while (n--) {
      getline(cin, name);
      cin >> tshirt >> size;

      if (m.find(tshirt) != m.end()) {
        m[tshirt].second.push_back(name);
      } else {
        v.push_back(name);
        m[tshirt] = make_pair(size, v);
        v.clear();
      }
    }

    for (map < string, pair< string, vector<string> > >::iterator it = m.begin(); it != m.end(); ++it) {
      for (int i = 0; i < it->second.size(); i++) {
        cout << it->first << " " << it->second[i] << endl;
      }
    }
  }

  return 0;
}
