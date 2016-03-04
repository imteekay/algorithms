#define swap(a, b) { int x=a; a=b; b=x  }

void bubble_sort(int v[], int n) {
  for (int i = 1; i <= n - 1; i++) {
    for (int j = 0; j < n - i; j++) {
      if (v[j] > v[j+1]) troca(v[j], v[j+1]);
    }
  }
}
