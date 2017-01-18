
#include <stdio.h>

void regua (int n) {
  if (n == 1) printf("-\n");
  else {
    regua(n-1);
    int i;
    for (i=0; i<n; i++) printf("-");
    printf("\n");
    regua(n-1);
  }
}

int main() {
  regua(5);
}
