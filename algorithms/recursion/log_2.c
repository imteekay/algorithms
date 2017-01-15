#include <stdio.h>
#include <string.h>

int log_2(int n);

int main() {
  int i;
  for (i = 1; i <= 16; i++) printf("%d\n", log_2(i));
  return 0;
}

int log_2(int n) {
  if (n <= 1) return 0;
  return 1 + log_2(n / 2);
}
