#include <bits/stdc++.h>

using namespace std;

#define MAX_SIZE (1 << 20)

int segtree[MAX_SIZE];
map<int, int> frequencyMap;
int lazy[MAX_SIZE];

void initialize_frequency_map(int A[]) {
  frequencyMap[-1] = 0;

  for (int i = 0; i <= 4; i++) {
    if (frequencyMap.find(A[i]) == frequencyMap.end()) frequencyMap[A[i]] = 1;
    else frequencyMap[A[i]]++;
  }
}

void build_segtree(int A[], int node, int start, int end) {
  if (start == end) {
    segtree[node] = A[start];
  } else {
    int middle = (start + end) / 2;
    build_segtree(A, node * 2, start, middle);
    build_segtree(A, node * 2 + 1, middle + 1, end);

    if (frequencyMap[segtree[node * 2]] > frequencyMap[segtree[node * 2 + 1]]) segtree[node] = segtree[node * 2];
    else if (frequencyMap[segtree[node * 2]] < frequencyMap[segtree[node * 2 + 1]]) segtree[node] = segtree[node * 2 + 1];
    else segtree[node] = max(segtree[node * 2], segtree[node * 2 + 1]);
  }
}

void propagate(int p, int start, int end) {
  cout << "Start: " << start << " | End: " << end << " | lazy: " << lazy[p] << endl;
  if (lazy[p] != 0) {
    frequencyMap[segtree[p]]--;
    segtree[p] += lazy[p];
    if (frequencyMap.find(segtree[p]) == frequencyMap.end()) frequencyMap[segtree[p]] = 1;
    else frequencyMap[segtree[p]]++;

    if (start != end) {
      lazy[p * 2] = lazy[p];
      lazy[p * 2] = lazy[p];
    }

    lazy[p] = 0;
  }
}

void lazy_update(int p, int start, int end, int left, int right, int inc) {
  propagate(p, start, end);

  if (start > end || end < left || start > right) return; // Totally out of range

  if (start >= left && end <= right) { // Totally in the range
    frequencyMap[segtree[p]]--;
    segtree[p] += inc;
    if (frequencyMap.find(segtree[p]) == frequencyMap.end()) frequencyMap[segtree[p]] = 1;
    else frequencyMap[segtree[p]]++;

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

  if (frequencyMap[segtree[p * 2]] > frequencyMap[segtree[p * 2 + 1]]) segtree[p] = segtree[p * 2];
  else if (frequencyMap[segtree[p * 2]] < frequencyMap[segtree[p * 2 + 1]]) segtree[p] = segtree[p * 2 + 1];
  else segtree[p] = max(segtree[p * 2], segtree[p * 2 + 1]);
}

int lazy_query(int p, int start, int end, int left, int right) {
  if (start > end || left > end || right < start) return -1;

  propagate(p, start, end);

  if (start >= left && end <= right) return segtree[p];

  int middle = (end + start) / 2;
  int left_f = lazy_query(p * 2, start, middle, left, right);
  int right_f = lazy_query(p * 2 + 1, middle + 1, end, left, right);

  if (frequencyMap[left_f] > frequencyMap[right_f]) return segtree[left_f];
  else if (frequencyMap[segtree[left_f]] < frequencyMap[right_f]) return segtree[right_f];
  else return max(segtree[left_f], segtree[right_f]);
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
  initialize_frequency_map(A);

  build_segtree(A, 1, 0, N - 1);

  while (C--) {
    cin >> left >> right;
    most_frequent = lazy_query(1, 0, N - 1, left, right);
    cout << "Most: " << most_frequent << endl;
    lazy_update(1, 0, N - 1, left, right, most_frequent);
    for (int i = 1; i < N * 2; i++) cout << segtree[i] << " ";
    cout << endl;
  }

  //print_all_leaves(1, 0, N - 1);

  return 0;
}
