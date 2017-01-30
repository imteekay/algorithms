/*
  Nome: Leandro Toshiyuki Kinoshita
  Curso: Tópicos de Programação
  EP: 1
*/

#include <stdio.h>
#include <string.h>

int palindromo(char *n);
int inversa(char *str);
int fibonacciHelper(int n, int first, int second);
int fibonacci(int n);
int pisoLog(int n);

int main() {
  printf("---------- Testando Palindromo ----------\n\n");
  char num1[6] = { '3', '6', '9', '9', '6', '3' };
  char *n1 = num1;

  if (palindromo(n1)) printf("É palíndromo\n");
  else printf("Não é palíndromo\n");

  char num2[6] = { '3', '6', '0', '9', '6', '3' };
  char *n2 = num2;

  if (palindromo(n2)) printf("É palíndromo\n");
  else printf("Não é palíndromo\n");

  printf("\n---------- Testando Inversa ----------\n\n");

  char str[7] = { 'l', 'e', 'a', 'n', 'd', 'r', 'o' };
  char *name = str;
  inversa(name);

  printf("\n\n---------- Testando Fibonacci ----------\n\n");

  fibonacci(10);

  printf("\n---------- Testando Log2 ----------\n\n");

  int i;
  for (i = 1; i <= 16; i++) {
    printf("%d\n", pisoLog(i));
  }

  return 0;
}

int palindromo(char *n) {
  if (strlen(n) <= 1) return 1;
  char first = n[0], last = n[strlen(n)-1];
  memmove(n, n+1, strlen(n));
  n[strlen(n)-1] = 0;
  return (first == last) * palindromo(n);
}

int inversa(char *str) {
  if (strlen(str) == 0) return 0;
  printf("%c", str[strlen(str)-1]);
  str[strlen(str)-1] = 0;
  return inversa(str);
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

int pisoLog(int n) {
  if (n <= 1) return 0;
  return 1 + pisoLog(n / 2);
}
