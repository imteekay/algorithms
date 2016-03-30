// https://www.urionlinejudge.com.br/judge/en/problems/view/2028

#include <iostream>
#include <vector>

using namespace std;

int main() {

  int n, counter=1, size, num;

  while (scanf("%i", &n) != EOF) {
    if (n == 0) {
      cout << "Caso " << counter << ": " << 1 << " numero" << endl;
      cout << 0;
    } else {
      size = ((n * (1 + n)) / 2) + 1;
      cout << "Caso " << counter << ": ";
      if (size == 1) cout << size << " numero" << endl;
      else cout << size << " numeros" << endl;

      for (int i = 0; i <= n; i++) {
        if (i == 0) num = 1;
        else num = i;
        for (int j = 0; j < num; j++) {
          cout << i;
          if (i != n || j != num - 1) cout << " ";
        }
      }
    }

    cout << endl << endl;
    counter++;
  }

  return 0;
}

