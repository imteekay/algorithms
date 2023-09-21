#include <bits/stdc++.h>

using namespace std;

#define MAX_SIZE (1 << 20)

int A[4];
int segtree[MAX_SIZE];
map<int, int> frequencyMap;

void initialize_frequency_map() {
  for (int i = 0; i <= 4; i++) {
    if (frequencyMap.find(A[i]) == frequencyMap.end()) frequencyMap[A[i]] = 1;
    else frequencyMap[A[i]]++;
  }
}

void build_segtree(int node, int start, int end) {
  if (start == end) {
    segtree[node] = A[start];
  } else {
    int middle = (start + end) / 2;
    build_segtree(node * 2, start, middle);
    build_segtree(node * 2 + 1, middle + 1, end);

    if (frequencyMap[segtree[node * 2]] > frequencyMap[segtree[node * 2 + 1]]) segtree[node] = segtree[node * 2];
    else if (frequencyMap[segtree[node * 2]] < frequencyMap[segtree[node * 2 + 1]]) segtree[node] = segtree[node * 2 + 1];
    else segtree[node] = max(segtree[node * 2], segtree[node * 2 + 1]);
  }
}

int main() {
  A[0] = 1;
  A[1] = 3;
  A[2] = 3;
  A[3] = 1;
  A[4] = 1;

  initialize_frequency_map();

  build_segtree(1, 0, 4);

  for (int i = 1; i < 10; i++) cout << segtree[i] << " ";

  return 0;
}
