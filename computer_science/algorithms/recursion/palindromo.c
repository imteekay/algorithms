#include <stdio.h>
#include <string.h>

int palindromo(char *n);

int main() {
  char num1[6] = { '3', '6', '9', '9', '6', '3' };
  char *n1 = num1;

  if (palindromo(n1)) printf("É palíndromo\n");
  else printf("Não é palíndromo\n");

  char num2[6] = { '3', '6', '0', '9', '6', '3' };
  char *n2 = num2;

  if (palindromo(n2)) printf("É palíndromo\n");
  else printf("Não é palíndromo\n");

  return 0;
}

int palindromo(char *n) {
  if (strlen(n) <= 1) return 1;
  char first = n[0], last = n[strlen(n)-1];
  memmove(n, n+1, strlen(n));
  n[strlen(n)-1] = 0;
  return (first == last) * palindromo(n);
}
