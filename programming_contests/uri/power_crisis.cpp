// https://www.urionlinejudge.com.br/judge/en/problems/view/1031

#include <iostream>
#include <vector>

using namespace std;

vector<int> buildVector(int n) {
  vector<int> v;
  for(int i = 0; i < n; i++) v.push_back(1);
  return v;
}

int getLastRegion(vector<int> regions, int m) {
  int counter = 0, max = regions.size(), ind = 0, c = m;
  while (counter < max - 1) {
    while (regions[ind] == 0) {      
      ind++;
      if (ind >= max) ind -= max;
    }
    
    if (c == m) {
      regions[ind] = 0;
      counter++;
      c = 0;
    }
    
    ind++;
    c++;
    if (ind >= max) ind -= max;
  }

  for (int i = 0; i < regions.size(); i++) if (regions[i] == 1) return i+1;
}

int main() {
  vector<int> v;
  int n, regionIndex;

  while (cin >> n && n != 0) {
    int i = 1;
    while(true) {
      if (getLastRegion(buildVector(n), i) == 13) {
        regionIndex = i;
        break;
      }

      i++;
    }

    cout << regionIndex << endl;
  }

  return 0;
}
