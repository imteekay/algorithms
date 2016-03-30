// https://www.urionlinejudge.com.br/judge/en/problems/view/2028

#include <iostream>
#include <vector>

using namespace std;

int main() {

  int n, counter=1, size, num;

  while (scanf("%i", &n) != EOF) {

    size = ((n * (1 + n)) / 2) + 1;
    cout << "Caso " << counter << ": ";
    if (size == 1) cout << size << " numero" << endl;
    else cout << size << " numeros" << endl;

    for (int i = 1; i <= n; i++) {
      num = i;
      while (num--) cout << i << " ";
    }

    cout << endl << endl;
    counter++;
  }

  return 0;
}
