// https://www.urionlinejudge.com.br/judge/en/problems/view/1031

#include <iostream>
#include <vector>

using namespace std;

vector<int> buildVector(int n) {
  vector<int> v;
  for(int i = 0; i < n; i++) {
    v.push_back(1);
  }
  return v;
}

int getLastRegion(vector<int> regions) {

}

int main() {
  vector<int> v;
  int n, regionIndex;

  while (cin >> n && n != 0) {
    for (int i = 5; i < n; i++) {
      if (getLastRegions(buildVector(n)) == 13) regionIndex = i;
    }
  }

  return 0;
}
