// https://www.urionlinejudge.com.br/judge/en/problems/view/1171

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int get_position(vector< pair<int, int> >& v, int el) {
  for (int i = 0; i < v.size(); i++) if (el == v[i].first) return i;
  return v.size();
}

int main() {

  int n, x;
  cin >> n;

  vector< pair<int, int> > v;
  cin >> x;
  v.push_back(make_pair(x, 1));
  n--;

  while (n--) {
    cin >> x;    
    if (get_position(v, x) < v.size()) v[get_position(v, x)].second++;
    else v.push_back(make_pair(x, 1));    
  }

  sort(v.begin(), v.end());

  for (int i = 0; i < v.size(); i++) cout << v[i].first << " aparece " << v[i].second << " vez(es)" << endl;

  return 0;
}
