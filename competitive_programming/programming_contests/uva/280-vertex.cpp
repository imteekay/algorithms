// https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=666&page=show_problem&problem=216

#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;
typedef vector<pii> vii;
typedef vector<int> vi;

int main() {
  int n, edge, starting_vertex, test, vertex;
  vi V;
  vector<vi> AdjList;

  while (cin >> n && n) {
    for (int i = 0; i <= n; i++) {
      AdjList.push_back(V);
    }

    for (int i = 0; i < n; i++) {
      while (cin >> starting_vertex && starting_vertex) {
        while (cin >> edge && edge) {
          AdjList[starting_vertex].push_back(edge);
        }
      }
    }

    cin >> test;

    while (test--) {
      vector<int> unreached;
      cin >> vertex;
      bool reached = false;

      for (int i = 1; i <= n; i++) {
        for (int j = 0; j < AdjList[vertex].size(); j++) {
          if (i == AdjList[vertex][j]) reached = true;
          cout << AdjList[vertex][j] << " ";
        }

        if (!reached) unreached.push_back(i);
        reached = false;
      }

      cout << unreached.size();
      for (int i = 0; i < unreached.size(); i++) cout << " " << unreached[i];
      cout << endl;
    }
  }

  return 0;
}
