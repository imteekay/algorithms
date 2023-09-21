// http://codeforces.com/contest/437/problem/C

#include <bits/stdc++.h>

using namespace std;

int min(int x, int y, int values[]) {
  return values[x-1] < values[y-1] ? values[x-1] : values[y-1];
}

int main() {
  int n, m, x, y, value, min_energy = 0;
  cin >> n >> m;

  int values[n];

  for (int i = 0; i < n; i++) {
    cin >> value;
    values[i] = value;
  }

  while (m--) {
    cin >> x >> y;
    min_energy += min(x, y, values);
  }

  cout << min_energy << endl;

  return 0;
}
