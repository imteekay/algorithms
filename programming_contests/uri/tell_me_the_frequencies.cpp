// https://www.urionlinejudge.com.br/judge/en/problems/view/1251

#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int toASCII(char charac) {
  int newCharac = int(charac);
  return newCharac;
}

bool compareByFrequency(const pair<int, int> &item1, const pair<int, int> &item2) {
  if (item1.second < item2.second) return true;
  else if (item1.second == item2.second) return item1.first > item2.first;
  else return false;
}

int main() {
  char charac;
  string text;
  bool first = true;

  while (getline(cin, text)) {
    map<int, int> m;
    if (first) first = false;
    else cout << endl;

    for (int i = 0; i < text.size(); i++) {
      charac = toASCII(text[i]);
      if (m.find(charac) != m.end()) m[charac]++;
      else m[charac] = 1;
    }

    vector< pair<int, int> > vec(m.begin(), m.end());
    sort(vec.begin(), vec.end(), compareByFrequency);

    for (int i = 0; i < vec.size(); ++i) {
      cout << vec[i].first << " " << vec[i].second << endl;
    }
  }

  return 0;
}
