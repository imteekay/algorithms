#include <bits/stdc++.h>

using namespace std;

#define MAX_SIZE (1 << 20)

int segtree[MAX_SIZE];
int lazy[MAX_SIZE];

void build_segtree(int A[], int node, int start, int end) {
  if (start == end) {
    segtree[node] = A[start];
  } else {
    int middle = (start + end) / 2;
    build_segtree(A, node * 2, start, middle);
    build_segtree(A, node * 2 + 1, middle + 1, end);
  }
}

void propagate(int p, int start, int end) {
  if (lazy[p] != 0) {
    segtree[p] += lazy[p];

    if (start != end) {
      lazy[p * 2] += lazy[p];
      lazy[p * 2 + 1] += lazy[p];
    }

    lazy[p] = 0;
  }
}

void lazy_update(int p, int start, int end, int left, int right, int inc) {
  propagate(p, start, end);

  if (start > end || end < left || start > right) return; // Totally out of range

  if (start >= left && end <= right) { // Totally in the range
    segtree[p] += inc;

    if (start != end) { // Not a leaf
      lazy[p * 2] += inc;
      lazy[p * 2 + 1] += inc;
    }

    return;
  }

  // Partially in the range
  int middle = (start + end) / 2;
  lazy_update(p * 2, start, middle, left, right, inc);
  lazy_update(p * 2 + 1, middle + 1, end, left, right, inc);
}

int lazy_query(int p, int start, int end, int left, int right) {
  if (start > end || left > end || right < start) return -1;

  propagate(p, start, end);

  if (start >= left && end <= right) return segtree[p];

  int middle = (end + start) / 2;
  int left_f = lazy_query(p * 2, start, middle, left, right);
  int right_f = lazy_query(p * 2 + 1, middle + 1, end, left, right);
}

void print_all_leaves(int p, int start, int end) {
  if (start > end) return;
  propagate(p, start, end);
  if (start == end) cout << segtree[p] << endl;

  int middle = (start + end) / 2;
  print_all_leaves(p * 2, start, middle);
  print_all_leaves(p * 2 + 1, middle + 1, end);
}

int main() {
  int N, C, left, right, most_frequent;
  cin >> N >> C;

  int A[N];
  for (int i = 0; i < N; i++) A[i] = 1;

  build_segtree(A, 1, 0, N - 1);

  while (C--) {
    cin >> left >> right;
    most_frequent = lazy_query(1, 0, N - 1, left, right);
    lazy_update(1, 0, N - 1, left, right, most_frequent);
  }

  //print_all_leaves(1, 0, N - 1);

  return 0;
}
