#include <bits/stdc++.h>

using namespace std;

#define MAX_SIZE (1 << 20)

int segtree[MAX_SIZE];
int lazy[MAX_SIZE];

void lazy_update(int p, int start, int end, int left, int right, int inc) {
  if (lazy[p] != 0) {
    segtree[p] = (end - start + 1) * lazy[p];

    if (start != end) {
      lazy[p * 2] = lazy[p];
      lazy[p * 2] = lazy[p];
    }

    lazy[p] = 0;
  }

  if (end < left || start > right) return; // Totally out of range

  if (start >= left && end <= right) { // Totally in the range
    segtree[p] = (end - start + 1) * inc;

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
  segtree[p] = segtree[p * 2] + segtree[p * 2 + 1];
}

int main() {
  return 0;
}
