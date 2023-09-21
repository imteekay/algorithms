#include <bits/stdcpp++.h>

using namespace std;

typedef pair<int, int> pii;
typedef vector<pii> vii;
typedef vector<int> vi;

int VISITED = 1;
int UNVISITED = 0;
int vertices_number = 100;
int INF = -1;

void bfs(vii AdjList, int s) {
  vi d(vertices_number, INF); d[s] = 0;
  queue<int> q;
  q.push(s);

  while (!queue.empty()) {
    int u = q.front(); q.pop();

    for (int i = 0; i < AdjList[u].size(); i++) {
      ii v = AdjList[u][i];

      if (d[v.first] == INF) {
        d[v.first] = d[u] + 1;
        q.push(v.first);
      }
    }
  }
}

int main() {
  return 0;
}
