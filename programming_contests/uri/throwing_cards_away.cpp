// https://www.urionlinejudge.com.br/judge/en/problems/view/1110

#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
  int n;
  map<int, int> m;
  vector<int> v;

  while (cin >> n && n != 0) {
    for (int i = 1; i <= n; i++) m[i] = 0;
    map<int, int>::iterator it = m.begin();

    while (true) {
      v.push_back(it->first);
      m.erase(it);
      if (m.empty()) break;
      it++;
      if (it == m.end()) it = m.begin();
      it++;
      if (it == m.end()) it = m.begin();
    }

    for (int i = 0; i < v.size(); i++) {
      cout << v[i] << " ";
    }
  }

  return 0;
}
