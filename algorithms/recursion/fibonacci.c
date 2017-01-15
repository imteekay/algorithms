#include <stdio.h>
#include <string.h>

int fibonacciHelper(int n, int first, int second);
int fibonacci(int n);

int main() {
  fibonacci(10);
  return 0;
}

int fibonacciHelper(int n, int first, int second) {
  if (n == 1) return 0;
  if (n == 2) return 1;
  printf("%d\n", second);
  return fibonacciHelper(n - 1, second, first + second);
}

int fibonacci(int n) {
  return fibonacciHelper(n, 1, 0);
}
