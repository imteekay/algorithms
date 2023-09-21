// https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=666&page=show_problem&problem=216

#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;
typedef vector<pii> vii;
typedef vector<int> vi;

int VISITED = 1;
int UNVISITED = 0;

void dfs(int vertex, vector<vi> & AdjList, set<int> & reached, int dfs_num[]) {
  dfs_num[vertex] = VISITED;
  int edge;

  for (int i = 0; i < AdjList[vertex].size(); i++) {
    edge = AdjList[vertex][i];
    reached.insert(edge);
    if (dfs_num[edge] == UNVISITED) dfs(edge, AdjList, reached, dfs_num);
  }
}

int main() {
  int n, edge, starting_vertex, test, vertex;
  vi V;
  vector<vi> AdjList;

  while (cin >> n && n) {
    for (int i = 0; i <= n; i++) {
      AdjList.push_back(V);
    }

    while (cin >> starting_vertex && starting_vertex) {
      while (cin >> edge && edge) {
        AdjList[starting_vertex].push_back(edge);
      }
    }

    cin >> test;

    while (test--) {
      set<int> reached, unreached;
      cin >> vertex;
      int dfs_num[101];
      bool a = false;

      fill(dfs_num, dfs_num+101, 0);
      dfs(vertex, AdjList, reached, dfs_num);

      for (int i = 1; i <= n; i++) {
        for (set<int>::iterator it = reached.begin(); it != reached.end(); it++) {
          if (*it == i) a = true;
        }

        if (!a) unreached.insert(i);
        a = false;
      }

      if (unreached.size()) {
        cout << unreached.size();

        for (set<int>::iterator it = unreached.begin(); it != unreached.end(); it++) {
          cout << " " << *it;
        }

        cout << endl;
      } else {
        cout << unreached.size() << endl;
      }
    }

    AdjList.clear();
  }

  return 0;
}
