#define swap(a, b) { int x=a; a=b; b=x  }

void selection_sort(int v[], int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i; j++) {
      if (v[j] > v[j+1]) troca(v[j], v[j+1]);
    }
  }
}
