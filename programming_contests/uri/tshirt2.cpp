// https://www.urionlinejudge.com.br/judge/en/problems/view/1258

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct tshirt {
  string color;
  string tshirtSize;
};

int clothesFound(vector< pair< tshirt, vector<string> > > &clothes, string tshirtSize, string color) {
  for (int i = 0; i < clothes.size(); i++) {
    if (clothes[i].first.tshirtSize == tshirtSize && clothes[i].first.color == color) 
      return i;
  }

  return -1;
}

bool compareClothes(const pair< tshirt, vector<string> > &p1, const pair< tshirt, vector<string> > &p2) {
  if (p1.first.color < p2.first.color) return true;
  else if (p1.first.color > p2.first.color) return false;
  else {
    if (p1.first.tshirtSize >= p2.first.tshirtSize) return true;
    else return false;
  }
}

int main() {
  int n, found;
  string name, tshirtSize, color;

  while (cin >> n && n != 0) {    
    vector< pair< tshirt, vector<string> > > clothes;
    vector<string> v;

    while (n--) {
      cin.ignore();
      getline(cin, name);
      cin >> color >> tshirtSize;
      tshirt t;
      t.tshirtSize = tshirtSize;
      t.color = color;
      found = clothesFound(clothes, tshirtSize, color);

      if (found != -1) {
        clothes[found].second.push_back(name);
      } else {
        vector<string> names;
        names.push_back(name);
        clothes.push_back(make_pair(t, names));
      }
    }

    sort(clothes.begin(), clothes.end(), compareClothes);

    for (int i = 0; i < clothes.size(); i++) {
      sort(clothes[i].second.begin(), clothes[i].second.end());
      for (int j = 0; j < clothes[i].second.size(); j++) {
        cout << clothes[i].first.color << " " << clothes[i].first.tshirtSize << " " << clothes[i].second[j] << endl;
      }
    }
  }

  return 0;
}
