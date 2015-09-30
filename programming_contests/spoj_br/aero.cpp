#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

map<int, int> find_by_value(map<int, int> mapper) {
  for (it = mapper.begin(); it != mapper.end(); ++it)
    if (it->second == )
      return it->first;
}

int main() {

  int n1, n2;

  cin >> n1 >> n2;

  while (n1 + n2 != 0) {

    vector< pair<int, int> > v;

    while (n2--) {
      v.push_back(make_pair(n1, n2));
    }

    map<int, int> mapper;

    for (int i = 0; i < v.size(); i++) {
      if (mapper.find(v[i].first) != mapper.end()) mapper.find(v[i].first)->second++;
      else if (mapper.find(v[i].second) != mapper.end()) mapper.find(v[i].second)->second++;
      else mapper[v[i]] = 1;
    }

    cin >> n1 >> n2;
  }

  return 0;
}
