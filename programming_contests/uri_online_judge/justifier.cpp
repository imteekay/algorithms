// https://www.urionlinejudge.com.br/judge/en/problems/view/1273

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int get_greater_size(vector<string> &v) {
  int max = 0;
  for (int i = 0; i < v.size(); i++) if (v[i].size() > max) max = v[i].size();
  return max;
}

string concatenate_spaces(int n) {
  string spaces = "";
  while (n--) spaces += " ";
  return spaces;
}

int main() {

  int n;
  cin >> n;
  string s, spaces;

  while (n) {
    vector<string> v;

    while (n--) {
      cin >> s;
      v.push_back(s);
    }

    int greater_size = get_greater_size(v);

    for (int i = 0; i < v.size(); i++) {
      spaces = concatenate_spaces(greater_size - v[i].size());
      v[i].insert(0, spaces);
      cout << v[i] << endl;
    }

    cin >> n;

    if (n) cout << endl;
  }

  return 0;
}
