#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {

  int n, total, test=1;
  string operation;
  char op;
  cin >> n;

  while (n != 0) {

    cin >> operation;
    total = operation[0];

    for (int i = 1; i < 2*n - 1; i++) {
      if ((operation[i] != '+') && (operation[i] != '-')) {
        stringstream ss;
        ss << operation[i];
        int x;
        ss >> x;
        cout << x << " ";

        if (op == '+') total += x;
        else total -= x;
      } else {
        op = operation[i];
      }

    }

    cout << "Teste " << test << endl;
    cout << total << endl << endl;

    test++;
    cin >> n;
    total = 0;
  }

  return 0;
}
