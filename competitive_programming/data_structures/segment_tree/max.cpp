#include <bits/stdc++.h>

using namespace std;

#define MAX_SIZE (1 << 20)

int A[4];
int segtree[MAX_SIZE];

void build_segtree(int node, int start, int end) {
  if (start == end) {
    segtree[node] = A[start];
  } else {
    int middle = (start + end) / 2;
    build_segtree(node * 2, start, middle);
    build_segtree(node * 2 + 1, middle + 1, end);
    segtree[node] = max(segtree[node * 2], segtree[node * 2 + 1]);
  }
}

int main() {
  A[0] = 1;
  A[1] = 3;
  A[2] = 3;
  A[3] = 1;
  A[4] = 1;

  build_segtree(1, 0, 4);

  for (int i = 1; i < 10; i++) cout << segtree[i] << " ";

  return 0;
}
