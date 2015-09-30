#include <iostream>

using namespace std;

int main() {

  int n, total=0, test=1;
  cin >> n;

  while (n != 0) {

    for (int i = 0; i < n; i++) {
      int temp;
      cin >> temp;
      total += temp;
    }

    cout << "Teste " << test << endl;
    cout << total << endl << endl;

    test++;
    cin >> n;
    total = 0;
  }

  return 0;
}
