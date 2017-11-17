#include <bits/stdcpp++.h>

using namespace std;

typedef pair<int, int> pii;
typedef vector<pii> vii;
typedef vector<int> vi;

typedef VISITED = 1;
typedef UNVISITED = -1;

vi dfs_num;

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
