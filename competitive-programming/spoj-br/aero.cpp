#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main() {

  int n1, n2, test=1;

  cin >> n1 >> n2;

  while (n1 + n2 != 0) {

    vector< pair<int, int> > v;

    while (n2--) {
      int line1, line2;
      cin >> line1 >> line2;
      v.push_back(make_pair(line1, line2));
    }

    map<int, int> mapper;

    for (int i = 0; i < v.size(); i++) {
      if (mapper.find(v[i].first) != mapper.end()) mapper.find(v[i].first)->second++;
      else mapper[v[i].first] = 1;

      if (mapper.find(v[i].second) != mapper.end()) mapper.find(v[i].second)->second++;
      else mapper[v[i].second] = 1;
    }

    vector<int> lines;

    for (map<int, int>::iterator it = mapper.begin(); it != mapper.end(); ++it) {
      lines.push_back(it->second);
    }

    int max=0;

    for (int i = 0; i < lines.size(); i++)
      if (lines[i] > max) max = lines[i];

    cout << "Teste " << test << endl;

    for (int i = 0; i < lines.size(); i++)
      if (lines[i] == max) printf("%d ", i+1);

    printf("\n\n");

    test++;
    cin >> n1 >> n2;
  }

  return 0;
}
