#include <bits/stdcpp++.h>

using namespace std;

typedef pair<int, int> pii;
typedef vector<pii> vii;
typedef vector<int> vi;

int VISITED = 1;
int UNVISITED = 0;
int vertices_number = 100;

vi dfs_num(vertices_number, 0);

void dfs(int u) {
  dfs_num[u] = VISITED;

  for (int j = 0; j < AdjList[u].size(); j++) {
    ii v = AdjList[u][j];
    if (dfs_num[v.first] == UNVISITED) dfs(v.first);
  }
}

int main() {
  return 0;
}
