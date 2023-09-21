// https://www.urionlinejudge.com.br/judge/en/problems/view/1435

#include <iostream>
#include <vector>

using namespace std;

int get_limit(int n) {
  int limit = 0;
  for (int i = 0; i < n; i += 2) limit++;
  return limit;
}

int main() {

  int n;
  cin >> n;

  while (n != 0) {

    vector<int> v;
    vector< vector<int> > table;

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) v.push_back(0);
      table.push_back(v);
    }

    int start = 0;
    int limit = get_limit(n);

    while (start < limit) {
      for (int i = start; i < n-start; i++) {
        for (int j = start; j < n-start; j++) table[i][j]++;
      }

      start++;
    }

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (table[i][j] <= 9) cout << "  ";
        else if (table[i][j] <= 99) cout << " ";
        cout << table[i][j];
        if (j < n-1) cout << " ";
      }
      cout << endl;
    }

    cout << endl;
    cin >> n;
  }

  return 0;
}
