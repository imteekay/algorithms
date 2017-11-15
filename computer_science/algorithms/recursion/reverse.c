#include <stdio.h>
#include <string.h>

int reverse(char *str);

int main() {
  char str[7] = { 'l', 'e', 'a', 'n', 'd', 'r', 'o' };
  char *name = str;
  reverse(name);
  return 0;
}

int reverse(char *str) {
  if (strlen(str) == 0) return 0;
  printf("%c", str[strlen(str)-1]);
  str[strlen(str)-1] = 0;
  return reverse(str);
}
