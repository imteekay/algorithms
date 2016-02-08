// https://www.urionlinejudge.com.br/judge/en/problems/view/1171

#include <iostream>
#include <vector>

using namespace std;

int main() {

  int n, x, found=0;
  cin >> n;

  vector<int> v1;
  vector<int> v2;

  for (int i = 0; i < n; i++) {
    v2.push_back(0);
  }

  for (int i = 0; i < n; i++) {
    cin >> x;

    for (int i = 0; i < v1.size(); i++) {
      if (v1[i] == x) {
        found = 1;
        break;
      }
    }

    if (!found) v1.push_back(x);

    found = 0;
  }

  return 0;
}
