// https://www.urionlinejudge.com.br/judge/en/problems/view/1088

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool sortElements(vector<int> &v) {
  for (int i = 0; i < v.size()-1; i++) {
    if (v[i] > v[i+1]) {
      swap(v[i], v[i+1]);
      return true;
    }
  }

  return false;
}

int main() {
  int n, x;
  string winner;

  while (cin >> n && n != 0) {
    vector<int> v;
    winner = "Carlos";

    while (n--) {
      cin >> x;
      v.push_back(x);
    }

    while (sortElements(v)) {
      if (winner == "Carlos") winner = "Marcelo";
      else winner = "Carlos";
    }

    cout << winner << endl;
  }

  return 0;
}
