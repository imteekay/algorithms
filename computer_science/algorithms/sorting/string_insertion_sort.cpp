#include <iostream>

using namespace std;

void insertion_sort(int n, char array[]) {
  int i, j;
  char x;

  for (i = 1; i < n; i++) {
    x = array[i];

    for (j = i - 1; j >= 0 && array[j] - '0' > x - '0'; j--)
      array[j+1] = array[j];

    array[j+1] = x;
  }
}

int main() {

  char array[] = { 'l', 'e', 'a', 'n', 'd', 'r', 'o' };

  insertion_sort(7, array);

  for (int i = 0; i < 7; i++) cout << array[i];

  return 0;
}
